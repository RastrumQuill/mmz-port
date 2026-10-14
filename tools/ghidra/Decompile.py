# Ghidra headless script (Jython): set up a GBA ROM and decompile functions.
# args: FUNCS.tsv OUTDIR
# FUNCS.tsv lines: ADDRESS(hex) thumb|arm NAME
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.app.cmd.disassemble import ArmDisassembleCommand
from ghidra.program.model.symbol import SourceType
from ghidra.util.task import ConsoleTaskMonitor
from java.math import BigInteger
import os

args = getScriptArgs()
funcs_path, outdir = args[0], args[1]
mem = currentProgram.getMemory()
space = currentProgram.getAddressFactory().getDefaultAddressSpace()
def A(x):
    return space.getAddress(x)

for name, start, size, volatile in [('EWRAM', 0x02000000, 0x40000, False), ('IWRAM', 0x03000000, 0x8000, False),
                                    ('IO', 0x04000000, 0x400, True), ('PAL', 0x05000000, 0x400, False),
                                    ('VRAM', 0x06000000, 0x18000, False), ('OAM', 0x07000000, 0x400, False)]:
    if mem.getBlock(A(start)) is None:
        b = mem.createUninitializedBlock(name, A(start), size, False)
        b.setWrite(True)
        b.setVolatile(volatile)

# the ROM is read-only, so constants loaded from it can be folded
rom_block = mem.getBlock(A(0x08000000))
rom_block.setWrite(False)

entries = []
for line in open(funcs_path):
    a, kind, name = line.split()
    entries.append((int(a, 16), kind, name))

tmode = currentProgram.getProgramContext().getRegister('TMode')
monitor = ConsoleTaskMonitor()
listing = currentProgram.getListing()
fm = currentProgram.getFunctionManager()
for a, kind, name in entries:
    addr = A(a)
    currentProgram.getProgramContext().setValue(tmode, addr, addr, BigInteger.ONE if kind == 'thumb' else BigInteger.ZERO)
for a, kind, name in entries:
    addr = A(a)
    cmd = ArmDisassembleCommand(addr, None, kind == 'thumb')
    cmd.applyTo(currentProgram, monitor)
for a, kind, name in entries:
    addr = A(a)
    f = fm.getFunctionAt(addr)
    if f is None:
        f = createFunction(addr, name)
    if f is not None:
        f.setName(name, SourceType.USER_DEFINED)

# let Ghidra work out references, stack frames and parameters
analyzeChanges(currentProgram)

opts = DecompileOptions()
ifc = DecompInterface()
ifc.setOptions(opts)
ifc.openProgram(currentProgram)
if not os.path.isdir(outdir):
    os.makedirs(outdir)
done = failed = 0
for a, kind, name in entries:
    f = fm.getFunctionAt(A(a))
    text = None
    if f is not None:
        res = ifc.decompileFunction(f, 60, monitor)
        if res.decompileCompleted():
            text = res.getDecompiledFunction().getC()
    if text is None:
        failed += 1
        text = '// decompilation failed\n'
    else:
        done += 1
    fp = open(os.path.join(outdir, '%08X_%s.c' % (a, name)), 'w')
    fp.write('// %s at 0x%08X (%s)\n' % (name, a, kind))
    fp.write(text)
    fp.close()
print('decompiled %d, failed %d' % (done, failed))
