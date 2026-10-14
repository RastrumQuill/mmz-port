"""Lift the disassembly (asm/*.s) to C that does exactly what the ARM7 does.

usage: lift.py OUTDIR [--skip NAME,...]

Every Thumb function becomes a C function. CPU registers live in a global
(`cpu`, see tools/lift/lift.h); flags are locals. Memory goes through
R8/R16/R32/W8/W16/W32, which reproduce the ARM7's unaligned behaviour and
route I/O to the runtime. Calls are C calls; a return is a jump to the LR the
function was entered with. Indirect jumps first try the labels of the
function (switch tables), then return, then call through the address table
(lift_call). Labels that are entered from outside their function get an extra
entry function (FUNC__LABEL) that jumps into a copy of the body.

Functions named with --skip, and ARM functions, are left to the runtime.
"""
import glob, os, re, struct, sys
from collections import defaultdict

ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), '../..')
sys.path.insert(0, os.path.join(ROOT, 'tools/disasm'))
import game
os.chdir(game.GAME_DIR)
outdir = sys.argv[1]
skip = set()
if '--skip' in sys.argv:
    skip = set(sys.argv[sys.argv.index('--skip') + 1].split(','))
rom = open('baserom.gba', 'rb').read()

def rom32(a):
    return struct.unpack_from('<I', rom, a - 0x08000000)[0]

REGS = {'r%d' % i: i for i in range(16)}
REGS.update({'sb': 9, 'sl': 10, 'fp': 11, 'ip': 12, 'sp': 13, 'lr': 14, 'pc': 15})

# ---------------------------------------------------------------- parsing

class Func:
    def __init__(self, name, addr, kind):
        self.name, self.addr, self.kind = name, addr, kind
        self.items = []          # (addr, kind, text) kind: 'label', 'insn'
        self.labels = {}         # label name -> addr
        self.unit = None

funcs = []
label_owner = {}                 # label -> Func
label_addr = {}
units = []
pending = None
for line in open(game.UNITS):
    f = line.split('#')[0].split()
    if f:
        units.append(f[1])

def size_of_data(text):
    if text.startswith('.4byte'):
        return 4 * (text.count(',') + 1)
    if text.startswith('.2byte') or text.startswith('.hword'):
        return 2 * (text.count(',') + 1)
    if text.startswith('.byte'):
        return text.count(',') + 1
    return 0

for unit in units:
    cur = None
    addr = None
    for raw in open('asm/%s.s' % unit):
        line = raw.rstrip('\n')
        code = line.split('@')[0].rstrip()
        m = re.match(r'\t(arm|thumb|non_word_aligned_thumb)_func_start (\w+)', line)
        if m:
            cur = None
            pending = (m.group(1), m.group(2))
            continue
        m = re.match(r'^(\w+):\s*(?:@ (0x[0-9A-Fa-f]+|jump table))?', line)
        if m:
            name = m.group(1)
            rest = line[m.end():].strip()
            if m.group(2) and m.group(2).startswith('0x'):
                addr = int(m.group(2), 16)
            elif re.search(r'_0[89][0-9A-F]{6}$', name):
                addr = int(name[-8:], 16)
            if pending and name == pending[1]:
                cur = Func(name, addr, 'arm' if pending[0] == 'arm' else 'thumb')
                cur.unit = unit
                funcs.append(cur)
                pending = None
            if cur is not None:
                cur.labels[name] = addr
                cur.items.append((addr, 'label', name))
                label_owner[name] = cur
            label_addr[name] = addr
            if rest.startswith('.'):
                addr += size_of_data(rest)
            continue
        if cur is None or addr is None:
            continue
        t = code.strip()
        if not t:
            continue
        if t.startswith('.align'):
            n = int(t.split()[1].rstrip(','))
            al = 1 << n
            addr = (addr + al - 1) & ~(al - 1)
            continue
        if t.startswith('.global') or t.startswith('.syntax') or t.startswith('.text') or t.startswith('.include'):
            continue
        if t.startswith('.hword') and cur.kind == 'thumb':
            cur.items.append((addr, 'insn', 'undefined'))
            addr += 2
            continue
        if t.startswith('.'):
            addr += size_of_data(t)
            continue
        cur.items.append((addr, 'insn', t))
        if cur.kind == 'thumb':
            addr += 4 if t.split()[0] in ('bl', 'blx') else 2
        else:
            addr += 4

def ends_with_exit(items):
    last = [t for a, k, t in items if k == 'insn']
    if not last:
        return False
    op = last[-1].split()[0]
    return op in ('b', 'bx') or (op == 'pop' and 'pc' in last[-1]) or last[-1].startswith('mov pc')

_by_addr = sorted(funcs, key=lambda f: f.addr)
for i, f in enumerate(_by_addr):
    j = i
    while not ends_with_exit(f.items) and j + 1 < len(_by_addr) and _by_addr[j + 1].kind == 'thumb':
        j += 1
        nxt = _by_addr[j]
        f.items = f.items + nxt.items
        for lab, a in nxt.labels.items():
            f.labels.setdefault(lab, a)

by_name = {f.name: f for f in funcs}
_sorted = sorted(funcs, key=lambda f: f.addr)
next_func = {a.name: b for a, b in zip(_sorted, _sorted[1:])}
func_at = {f.addr: f for f in funcs}

# ------------------------------------------------- entries from outside

def split_ops(s):
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '[{':
            depth += 1
        elif ch in ']}':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur.strip())
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out

extra_entries = defaultdict(set)     # func -> labels entered from elsewhere
for f in funcs:
    for a, k, t in f.items:
        if k != 'insn':
            continue
        p = t.split(None, 1)
        if len(p) < 2:
            continue
        op, rest = p
        if op in ('b', 'bl') or (op.startswith('b') and len(op) == 3 and op != 'bic'):
            tgt = rest.strip()
            o = label_owner.get(tgt)
            if o is not None and o is not f and tgt != o.name:
                extra_entries[o].add(tgt)
# code labels used as pointers in data ("_LABEL+1")
for m in re.finditer(r'\.4byte (_0[89][0-9A-F]{6})\+1', open('data/data.s').read()):
    o = label_owner.get(m.group(1))
    if o is not None:
        extra_entries[o].add(m.group(1))

# ---------------------------------------------------------- code generation

def reg(s):
    return REGS[s.strip()]

def R(n):
    return 'cpu.r[%d]' % n

def imm(s):
    s = s.strip().lstrip('#')
    return int(s, 0)

COND = {'beq': 'Z', 'bne': '!Z', 'bhs': 'C', 'bcs': 'C', 'blo': '!C', 'bcc': '!C', 'bmi': 'N', 'bpl': '!N',
        'bvs': 'V', 'bvc': '!V', 'bhi': '(C && !Z)', 'bls': '(!C || Z)', 'bge': '(N == V)', 'blt': '(N != V)',
        'bgt': '(!Z && N == V)', 'ble': '(Z || N != V)'}

class Gen:
    def __init__(self, f):
        self.f = f
        self.lines = []
        self.jump_targets = set(f.labels.values())
        self.uses_jump = False

    def emit(self, s):
        self.lines.append('    ' + s)

    def branch(self, tgt, addr):
        f = self.f
        if tgt in f.labels:
            return 'goto L_%08X;' % f.labels[tgt]
        o = label_owner.get(tgt)
        if o is None:
            return 'lift_fail(0x%08X); /* branch to unknown %s */' % (addr, tgt)
        callee = o.name if tgt == o.name else '%s__%s' % (o.name, tgt)
        return '{ LIFT_TAIL(entry_lr); %s(); return; }' % callee

    def mem(self, op, rest, addr):
        ops = split_ops(rest)
        rd = reg(ops[0])
        m = re.match(r'\[(\w+)(?:,\s*(#?[\w-]+))?\]', ops[1].strip())
        if not m:
            raise ValueError(rest)
        base = reg(m.group(1))
        off = m.group(2)
        if base == 15:
            a = '0x%X' % (((addr + 4) & ~3) + (imm(off) if off else 0))
        elif off is None:
            a = R(base)
        elif off.startswith('#'):
            a = '%s + 0x%X' % (R(base), imm(off))
        else:
            a = '%s + %s' % (R(base), R(reg(off)))
        size = {'ldr': 'R32', 'str': 'W32', 'ldrb': 'R8', 'strb': 'W8', 'ldrh': 'R16', 'strh': 'W16',
                'ldrsb': 'RS8', 'ldrsh': 'RS16'}[op]
        if op.startswith('str'):
            self.emit('%s(%s, %s);' % (size, a, R(rd)))
        else:
            self.emit('%s = %s(%s);' % (R(rd), size, a))

    def jump(self, expr):
        self.uses_jump = True
        self.emit('jt = %s; goto do_jump;' % expr)

    def operand2(self, ops, addr):
        """ARM operand 2: '#imm', 'rm', or 'rm, <shift> #n' / 'rm, <shift> rs'."""
        if ops[0].startswith('#'):
            return '0x%X' % (imm(ops[0]) & 0xFFFFFFFF)
        rm = reg(ops[0])
        v = '0x%X' % (addr + 8) if rm == 15 else R(rm)
        if len(ops) == 1:
            return v
        sh, amt = ops[1].split()
        if amt.startswith('#'):
            n = imm(amt)
            return {'lsl': '(%s << %d)' % (v, n), 'lsr': '(%s >> %d)' % (v, n) if n else '0',
                    'asr': '(u32)((s32)%s >> %d)' % (v, n if n else 31), 'ror': 'ror32(%s, %d)' % (v, n)}[sh]
        rs = R(reg(amt))
        return {'lsl': 'LSL_ARM(%s, %s)' % (v, rs), 'lsr': 'LSR_ARM(%s, %s)' % (v, rs),
                'asr': 'ASR_ARM(%s, %s)' % (v, rs), 'ror': 'ror32(%s, %s & 0xFF)' % (v, rs)}[sh]

    ARM_CONDS = {'eq': 'Z', 'ne': '!Z', 'hs': 'C', 'cs': 'C', 'lo': '!C', 'cc': '!C', 'mi': 'N', 'pl': '!N',
                 'vs': 'V', 'vc': '!V', 'hi': '(C && !Z)', 'ls': '(!C || Z)', 'ge': '(N == V)', 'lt': '(N != V)',
                 'gt': '(!Z && N == V)', 'le': '(Z || N != V)'}
    ARM_BASES = ['ldrsb', 'ldrsh', 'ldrb', 'ldrh', 'strb', 'strh', 'umull', 'smull', 'push', 'pop',
                 'ldr', 'str', 'ldm', 'stm', 'mov', 'mvn', 'add', 'adc', 'sub', 'sbc', 'rsb', 'rsc', 'and',
                 'orr', 'eor', 'bic', 'cmp', 'cmn', 'tst', 'teq', 'mul', 'mla', 'lsl', 'lsr', 'asr', 'ror',
                 'bx', 'bl', 'b', 'svc', 'nop']

    def arm_insn(self, addr, t):
        p = t.split(None, 1)
        mn = p[0]
        rest = p[1] if len(p) > 1 else ''
        if mn[0] == 'b' and mn[1:] in self.ARM_CONDS:
            base = 'b'
        elif mn.startswith('bx'):
            base = 'bx'
        else:
            base = next(b for b in self.ARM_BASES if mn.startswith(b))
        tail = mn[len(base):]
        sflag = False
        cond = None
        if tail.startswith('s') and base not in ('b', 'bl', 'bx'):
            sflag, tail = True, tail[1:]
        if tail:
            cond = self.ARM_CONDS[tail]
        before = len(self.lines)
        self.arm_body(addr, base, sflag, rest)
        if cond:
            body = self.lines[before:]
            del self.lines[before:]
            self.emit('if (%s) {' % cond)
            self.lines.extend(['    ' + l for l in body])
            self.emit('}')

    def arm_body(self, addr, base, sflag, rest):
        e = self.emit
        ops = split_ops(rest)
        if base == 'nop':
            return
        if base in ('b', 'bl'):
            if base == 'b':
                e(self.branch(ops[0], addr))
            else:
                self.insn(addr, 'bl ' + ops[0], arm=True)
            return
        if base == 'bx':
            self.jump(R(reg(ops[0])))
            return
        if base in ('push', 'pop'):
            self.insn(addr, base + ' ' + rest)
            return
        if base in ('ldr', 'str', 'ldrb', 'strb', 'ldrh', 'strh', 'ldrsb', 'ldrsh'):
            rd = reg(ops[0])
            if not ops[1].startswith('['):
                e('%s = 0x%08X;' % (R(rd), rom32(label_addr[ops[1].split()[0]])))
                return
            m = re.match(r'\[(\w+)(?:,\s*([^\]]+))?\](!?)$', ops[1])
            rn = reg(m.group(1))
            pre_off = m.group(2)
            wb = m.group(3) == '!'
            post = ops[2:]
            def off_expr(o):
                o = o.strip()
                if o.startswith('#'):
                    return '0x%X' % (imm(o) & 0xFFFFFFFF)
                parts = split_ops(o)
                return self.operand2(parts, addr)
            basev = '0x%X' % (addr + 8) if rn == 15 else R(rn)
            size = {'ldr': 'R32', 'str': 'W32', 'ldrb': 'R8', 'strb': 'W8', 'ldrh': 'R16', 'strh': 'W16',
                    'ldrsb': 'RS8', 'ldrsh': 'RS16'}[base]
            if post:
                a = basev
                newbase = '%s + %s' % (R(rn), off_expr(', '.join(post)))
            elif pre_off:
                a = '%s + %s' % (basev, off_expr(pre_off))
                newbase = a if wb else None
            else:
                a, newbase = basev, None
            e('{ u32 a = %s;' % a)
            if base.startswith('str'):
                e('  %s(a, %s);' % (size, '0x%X' % (addr + 12) if rd == 15 else R(rd)))
                if newbase: e('  %s = %s;' % (R(rn), newbase.replace(basev, R(rn)) if post else 'a'))
            else:
                if newbase: e('  %s = %s;' % (R(rn), newbase.replace(basev, R(rn)) if post else 'a'))
                e('  %s = %s(a);' % (R(rd), size))
            e('}')
            return
        if base in ('ldm', 'stm'):
            self.insn(addr, base + ' ' + rest)
            return
        if base == 'umull' or base == 'smull':
            lo, hi, a, b = (reg(x) for x in ops)
            if base == 'umull':
                e('{ uint64_t p = (uint64_t)%s * (uint64_t)%s;' % (R(a), R(b)))
            else:
                e('{ uint64_t p = (uint64_t)((int64_t)(s32)%s * (int64_t)(s32)%s);' % (R(a), R(b)))
            e('  %s = (u32)p; %s = (u32)(p >> 32);%s }' % (R(lo), R(hi), ' N = %s >> 31; Z = p == 0;' % R(hi) if sflag else ''))
            return
        if base in ('mul', 'mla'):
            d = R(reg(ops[0]))
            expr = '%s * %s' % (R(reg(ops[1])), R(reg(ops[2])))
            if base == 'mla':
                expr += ' + %s' % R(reg(ops[3]))
            e('%s = %s;%s' % (d, expr, ' NZ(%s);' % d if sflag else ''))
            return
        if base in ('lsl', 'lsr', 'asr', 'ror'):
            # a shift written as its own instruction: mov rd, rm, <shift> x
            d = reg(ops[0])
            if len(ops) == 2:
                ops = [ops[0], ops[0], ops[1]]
            val = self.operand2([ops[1], '%s %s' % (base, ops[2])], addr)
            if sflag:
                if ops[2].startswith('#'):
                    fn = base.upper() + '_IMM'
                    n = imm(ops[2])
                    e('%s = %s(%s, %d);' % (R(d), fn, R(reg(ops[1])), n if base != 'ror' else n))
                else:
                    e('%s = %s_REG(%s, %s);' % (R(d), base.upper(), R(reg(ops[1])), R(reg(ops[2]))))
            else:
                e('%s = %s;' % (R(d), val))
            return
        if base in ('cmp', 'cmn', 'tst', 'teq'):
            a = R(reg(ops[0]))
            b = self.operand2(ops[1:], addr)
            e({'cmp': 'SUBS(%s, %s);', 'cmn': 'ADDS(%s, %s);', 'tst': 'NZ(%s & %s);', 'teq': 'NZ(%s ^ %s);'}[base] % (a, b))
            return
        if base in ('mov', 'mvn'):
            d = reg(ops[0])
            v = self.operand2(ops[1:], addr)
            if base == 'mvn':
                v = '~(%s)' % v
            if d == 15:
                self.jump(v)
                return
            e('%s = %s;%s' % (R(d), v, ' NZ(%s);' % R(d) if sflag else ''))
            return
        # two- or three-operand data processing
        d = reg(ops[0])
        if len(ops) == 2 or (len(ops) == 3 and ops[2].split()[0] in ('lsl', 'lsr', 'asr', 'ror')):
            a, rest_ops = R(d), ops[1:]
        else:
            rn = reg(ops[1])
            a, rest_ops = ('0x%X' % (addr + 8) if rn == 15 else R(rn)), ops[2:]
        b = self.operand2(rest_ops, addr)
        if base in ('add', 'sub', 'rsb', 'adc', 'sbc'):
            if base == 'rsb':
                a, b = b, a
            if base == 'adc':
                b = '%s + C' % b
            if base == 'sbc':
                b = '%s + !C' % b
            if sflag:
                expr = '%s(%s, %s)' % ('ADDS' if base in ('add', 'adc') else 'SUBS', a, b)
            else:
                expr = '%s %s %s' % (a, '+' if base in ('add', 'adc') else '-', b)
        else:
            op = {'and': '&', 'orr': '|', 'eor': '^', 'bic': '& ~'}[base]
            expr = '%s %s (%s)' % (a, op, b)
        if d == 15:
            self.jump(expr)
            return
        e('%s = %s;%s' % (R(d), expr, ' NZ(%s);' % R(d) if sflag and base in ('and', 'orr', 'eor', 'bic') else ''))

    def insn(self, addr, t, arm=False):
        if self.f.kind == 'arm' and not arm and t.split()[0] not in ('push', 'pop', 'ldm', 'stm'):
            return self.arm_insn(addr, t)
        p = t.split(None, 1)
        op = p[0]
        rest = p[1] if len(p) > 1 else ''
        ops = split_ops(rest)
        e = self.emit
        if op == 'undefined':
            e('lift_fail(0x%08X); return;' % addr)
            return
        if op == 'nop':
            return
        if op in COND:
            e('if (%s) %s' % (COND[op], self.branch(ops[0], addr)))
            return
        if op == 'b':
            e(self.branch(ops[0], addr))
            return
        if op == 'bl':
            tgt = ops[0]
            ret = (addr + 4) | (0 if arm else 1)
            if tgt in self.f.labels:          # long jump inside the function
                e('cpu.r[14] = 0x%08X; goto L_%08X;' % (ret, self.f.labels[tgt]))
                self.jump_targets.add(addr + 4)
                return
            o = label_owner.get(tgt)
            if o is None:
                e('lift_fail(0x%08X); /* call to unknown %s */' % (addr, tgt))
                return
            callee = o.name if tgt == o.name else '%s__%s' % (o.name, tgt)
            e('cpu.r[14] = 0x%08X; %s();' % (ret, callee))
            return
        if op == 'bx':
            self.jump(R(reg(ops[0])))
            return
        if op == 'svc':
            e('lift_swi(0x%X);' % imm(ops[0]))
            return
        if op in ('ldr', 'str', 'ldrb', 'strb', 'ldrh', 'strh', 'ldrsb', 'ldrsh'):
            if op == 'ldr' and not ops[1].startswith('['):
                lab = ops[1].split()[0]
                e('%s = 0x%08X;' % (R(reg(ops[0])), rom32(label_addr[lab])))
                return
            self.mem(op, rest, addr)
            return
        if op == 'push':
            rl = [reg(x) for x in ops[0].strip('{}').split(',')]
            e('cpu.r[13] -= %d;' % (4 * len(rl)))
            for i, r in enumerate(sorted(rl)):
                e('W32(cpu.r[13] + %d, %s);' % (4 * i, R(r)))
            return
        if op == 'pop':
            rl = sorted(reg(x) for x in ops[0].strip('{}').split(','))
            for i, r in enumerate(rl):
                if r == 15:
                    e('jt = R32(cpu.r[13] + %d);' % (4 * i))
                else:
                    e('%s = R32(cpu.r[13] + %d);' % (R(r), 4 * i))
            e('cpu.r[13] += %d;' % (4 * len(rl)))
            if 15 in rl:
                self.uses_jump = True
                e('goto do_jump;')
            return
        if op in ('ldm', 'stm'):
            base = reg(ops[0].rstrip('!'))
            rl = sorted(reg(x) for x in ops[1].strip('{}').split(','))
            e('{ u32 a = %s;' % R(base))
            for i, r in enumerate(rl):
                if op == 'ldm':
                    e('  %s = R32(a + %d);' % (R(r), 4 * i))
                else:
                    e('  W32(a + %d, %s);' % (4 * i, R(r)))
            if op == 'stm' or base not in rl:
                e('  %s = a + %d;' % (R(base), 4 * len(rl)))
            e('}')
            return
        # data processing
        if op == 'movs':
            if ops[1].startswith('#'):
                e('%s = 0x%X; N = 0; Z = %d;' % (R(reg(ops[0])), imm(ops[1]), imm(ops[1]) == 0))
            else:                         # movs rd, rm: flags N and Z
                d = R(reg(ops[0]))
                e('%s = %s; NZ(%s);' % (d, R(reg(ops[1])), d))
            return
        if op == 'mov':
            rd, rs = reg(ops[0]), ops[1]
            if rs.startswith('#'):
                raise ValueError(t)
            rs = reg(rs)
            src = '0x%X' % (addr + 4) if rs == 15 else R(rs)
            if rd == 15:
                self.jump(src)
            else:
                e('%s = %s;' % (R(rd), src))
            return
        if op in ('adds', 'subs'):
            fn = 'ADDS' if op == 'adds' else 'SUBS'
            if len(ops) == 2:
                a, b = ops[0], ops[1]
                src = R(reg(a))
            else:
                src, b = R(reg(ops[1])), ops[2]
            val = '0x%X' % imm(b) if b.startswith('#') else R(reg(b))
            e('%s = %s(%s, %s);' % (R(reg(ops[0])), fn, src, val))
            return
        if op in ('add', 'sub'):
            rd = reg(ops[0])
            if len(ops) == 3:            # add rd, pc/sp, #imm
                rs = reg(ops[1])
                v = imm(ops[2])
                src = '0x%X' % ((addr + 4) & ~3) if rs == 15 else R(rs)
                e('%s = %s %s 0x%X;' % (R(rd), src, '+' if op == 'add' else '-', v))
            elif ops[1].startswith('#'):  # add/sub sp, #imm
                e('%s %s= 0x%X;' % (R(rd), '+' if op == 'add' else '-', imm(ops[1])))
            else:                        # add rd, rm (high registers)
                rm = reg(ops[1])
                src = '0x%X' % (addr + 4) if rm == 15 else R(rm)
                if rd == 15:
                    self.jump('%s + %s' % ('0x%X' % (addr + 4), src))
                else:
                    e('%s += %s;' % (R(rd), src))
            return
        if op == 'cmp':
            b = ops[1]
            val = '0x%X' % imm(b) if b.startswith('#') else R(reg(b))
            e('SUBS(%s, %s);' % (R(reg(ops[0])), val))
            return
        if op == 'cmn':
            e('ADDS(%s, %s);' % (R(reg(ops[0])), R(reg(ops[1]))))
            return
        if op == 'rsbs':
            e('%s = SUBS(0, %s);' % (R(reg(ops[0])), R(reg(ops[1]))))
            return
        if op in ('ands', 'orrs', 'eors', 'bics'):
            sym = {'ands': '&', 'orrs': '|', 'eors': '^', 'bics': '& ~'}[op]
            d = R(reg(ops[0]))
            e('%s = %s %s %s; NZ(%s);' % (d, d, sym, R(reg(ops[1])), d))
            return
        if op == 'tst':
            e('NZ(%s & %s);' % (R(reg(ops[0])), R(reg(ops[1]))))
            return
        if op == 'mvns':
            d = R(reg(ops[0]))
            e('%s = ~%s; NZ(%s);' % (d, R(reg(ops[1])), d))
            return
        if op == 'muls':
            d = R(reg(ops[0]))
            e('%s = %s * %s; NZ(%s);' % (d, R(reg(ops[1])), R(reg(ops[2])), d))
            return
        if op in ('lsls', 'lsrs', 'asrs', 'rors'):
            fn = op[:3].upper()
            d = R(reg(ops[0]))
            if len(ops) == 3:            # by immediate
                e('%s = %s_IMM(%s, %d);' % (d, fn, R(reg(ops[1])), imm(ops[2])))
            else:
                e('%s = %s_REG(%s, %s);' % (d, fn, d, R(reg(ops[1]))))
            return
        raise ValueError('cannot lift %r at %08X' % (t, addr))

    def body(self):
        f = self.f
        for a, k, t in f.items:
            if k == 'label':
                pass
            else:
                if a in self.jump_targets or a in f.labels.values():
                    pass
        out = []
        emitted_labels = set()
        for a, k, t in f.items:
            if k == 'insn':
                if a not in emitted_labels and (a in self.jump_targets):
                    self.lines.append('L_%08X:;' % a)
                    emitted_labels.add(a)
                try:
                    self.insn(a, t)
                except Exception as ex:
                    self.emit('lift_fail(0x%08X); /* %s: %s */' % (a, t, ex))
            else:
                if a not in emitted_labels:
                    self.lines.append('L_%08X:;' % a)
                    emitted_labels.add(a)
        # a function whose last instruction does not branch away runs on into
        # the next function
        last = [t for a, k, t in f.items if k == 'insn']
        op = last[-1].split()[0] if last else ''
        ends = op in ('b', 'bx') or (op == 'pop' and 'pc' in last[-1]) or (op == 'mov' and last[-1].startswith('mov pc'))
        if not ends:
            self.emit('lift_fail(0x%08X); /* runs off the end */' % f.addr)
        self.emit('return;')
        self.emitted = emitted_labels

    def render(self, name, start_label=None):
        f = self.f
        h = ['void %s(void) {' % name,
             '    u32 N = 0, Z = 0, C = 0, V = 0, jt;',
             '    const u32 entry_lr = LIFT_ENTRY_LR();',
             '    (void)N; (void)Z; (void)C; (void)V; (void)jt; (void)entry_lr;']
        if start_label:
            h.append('    goto L_%08X;' % f.labels[start_label])
        tail = []
        if self.uses_jump:
            tail.append('do_jump:')
            tail.append('    switch (jt & ~1u) {')
            for a in sorted(self.emitted):
                if a & 1 == 0:
                    tail.append('    case 0x%08X: goto L_%08X;' % (a, a))
            tail.append('    }')
            tail.append('    if ((jt & ~1u) == (entry_lr & ~1u)) return;')
            tail.append('    LIFT_TAIL(entry_lr);')
            tail.append('    lift_call(jt);')
            tail.append('    return;')
        return '\n'.join(h + self.lines + tail + ['}', ''])

os.makedirs(outdir, exist_ok=True)
protos = []
files = defaultdict(list)
table = []
lifted = 0
for f in funcs:
    if f.name in skip or f.unit == 'crt0':
        continue
    g = Gen(f)
    g.body()
    chunk = '%s_%02d' % (f.unit, (f.addr >> 15) & 0xFF) if f.unit.startswith('code') else f.unit
    files[chunk].append(g.render(f.name))
    protos.append(f.name)
    tb = 1 if f.kind == 'thumb' else 0
    table.append((f.addr | tb, f.name))
    for lab in sorted(extra_entries.get(f, ())):
        n = '%s__%s' % (f.name, lab)
        files[chunk].append(g.render(n, lab))
        protos.append(n)
        table.append((f.labels[lab] | tb, n))
    lifted += 1

all_names = set(protos)
lifted_names = set(protos)
for f in funcs:
    if f.name not in all_names:
        protos.append(f.name)          # provided by the runtime
        table.append((f.addr | (1 if f.kind == 'thumb' else 0), f.name))

with open(os.path.join(outdir, 'lifted.h'), 'w') as fp:
    fp.write('/* Generated by tools/lift/lift.py. */\n#include "lift.h"\n\n')
    for n in protos:
        fp.write('void %s(void);\n' % n)
for chunk, bodies in files.items():
    with open(os.path.join(outdir, '%s.c' % chunk), 'w') as fp:
        fp.write('/* Generated by tools/lift/lift.py from asm/. */\n#include "lifted.h"\n\n')
        fp.write('\n'.join(bodies))
aliases = []
if '--alias' in sys.argv:
    for spec in sys.argv[sys.argv.index('--alias') + 1].split(','):
        dst, src, size = (int(x, 16) for x in spec.split(':'))
        for a, n in list(table):
            if src <= (a & ~1) < src + size:
                aliases.append(((a & ~1) - src + dst | (a & 1), n))
table += aliases
table.sort()
runtime = [(a, n) for a, n in table if n not in set(p for p in protos[:len(protos)] if p in lifted_names)]
with open(os.path.join(outdir, 'table.c'), 'w') as fp:
    fp.write('/* Generated by tools/lift/lift.py: code address -> function. */\n#include "lifted.h"\n\n')
    fp.write('/* Functions the runtime has to provide (ARM code, task switching). */\n')
    for a, n in runtime:
        fp.write('__attribute__((weak)) void %s(void) { lift_fail(0x%08X); }\n' % (n, a))
    fp.write('\n')
    fp.write('const struct LiftEntry gLiftTable[] = {\n')
    for a, n in table:
        fp.write('    { 0x%08X, %s, %d },\n' % (a, n, 0 if '__' in n else 1))
    fp.write('};\nconst int gLiftTableSize = %d;\n' % len(table))
print('lifted %d functions (%d entries) into %d files' % (lifted, len(table), len(files)), file=sys.stderr)
