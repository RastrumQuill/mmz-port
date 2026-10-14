// sub_081183CC at 0x081183CC (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_081183CC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xdf9) == '\x01') {
    _DAT_02000a10 = _DAT_02000a10 + 0x10;
  }
  else {
    _DAT_02000a10 = _DAT_02000a10 - 0x10;
  }
  _DAT_02000a10 = _DAT_02000a10 & 0x1ff;
  if (*(char *)(param_1 + 0xdf9) == '\x01') {
    if ((_DAT_02000a10 + 0x20 & 0xff) == 0) {
      *(undefined *)(param_1 + 0xdce) = 1;
    }
  }
  else if ((_DAT_02000a10 - 0x20 & 0xff) == 0) {
    *(undefined *)(param_1 + 0xdce) = 1;
  }
  if (DAT_02000a10 == '\0') {
    *(char *)(param_1 + 0xdf8) = *(char *)(param_1 + 0xdf9);
    *(undefined *)(param_1 + 2) = 1;
    sub_08118464(param_1);
  }
  return in_lr;
}

