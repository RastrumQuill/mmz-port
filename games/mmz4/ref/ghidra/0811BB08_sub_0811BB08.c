// sub_0811BB08 at 0x0811BB08 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0811BB08(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xdf9) == '\0') {
    _DAT_02000a10 = _DAT_02000a10 + 0x10;
  }
  else {
    _DAT_02000a10 = _DAT_02000a10 - 0x10;
  }
  _DAT_02000a10 = _DAT_02000a10 & 0x1ff;
  if (*(char *)(param_1 + 0xdf9) == '\0') {
    uVar1 = _DAT_02000a10 + 0x20;
  }
  else {
    uVar1 = _DAT_02000a10 - 0x20;
  }
  if ((uVar1 & 0xff) == 0) {
    *(undefined *)(param_1 + 0xde5) = 1;
  }
  if (DAT_02000a10 == '\0') {
    *(char *)(param_1 + 0xdf8) = *(char *)(param_1 + 0xdf9);
    *(undefined *)(param_1 + 2) = 1;
    sub_0811BB94(param_1);
  }
  return in_lr;
}

