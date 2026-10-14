"""Per-game settings for the tools.

The game is the directory in $MMZ_GAME (default: the repository root, which
is Mega Man Zero 1). Its game.json holds:
  code_end, data_start  end of the code and start of the data in the ROM
  seeds                 [kind, address, name] entry points to start from
  exclude               [start, end) ranges that are not Thumb code
                        (header, ARM code copied to RAM)
  pinned                [start, end) data the code addresses with constants
  functions, units      function list (gbadisasm config) and unit list
"""
import json, os

TOOLS = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ROOT = os.path.dirname(TOOLS)
GAME_DIR = os.path.abspath(os.environ.get('MMZ_GAME', ROOT))
os.environ['MMZ_GAME'] = GAME_DIR  # for tools started from another directory
_path = os.path.join(GAME_DIR, 'game.json')
cfg = json.load(open(_path)) if os.path.exists(_path) else {}

def _hex(v):
    return int(v, 16) if isinstance(v, str) else v

CODE_END = _hex(cfg.get('code_end', 0))
DATA_START = _hex(cfg.get('data_start', 0))
SEEDS = [(k, _hex(a), n) for k, a, n in cfg.get('seeds', [])]
EXCLUDE = [(_hex(a), _hex(b)) for a, b in cfg.get('exclude', [])]
PINNED = [(_hex(a), _hex(b)) for a, b in cfg.get('pinned', [])]
FUNCTIONS = os.path.join(GAME_DIR, cfg.get('functions', 'functions.cfg'))
UNITS = os.path.join(GAME_DIR, cfg.get('units', 'units.txt'))

def save(**changes):
    """Update game.json."""
    for k, v in changes.items():
        cfg[k] = v
    with open(_path, 'w') as f:
        json.dump(cfg, f, indent=2)
        f.write('\n')

def excluded(a):
    return any(s <= a < e for s, e in EXCLUDE)
