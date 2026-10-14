// sub_0811B2B8 at 0x0811B2B8 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0811B2B8(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xdf9) == '\x03') {
    uVar1 = _DAT_02000a10 + 0x10;
  }
  else {
    uVar1 = _DAT_02000a10 - 0x10;
  }
  _DAT_02000a10 = uVar1 & 0x1ff;
  if ((uVar1 & 0xff) == 0) {
    *(undefined *)(param_1 + 0xdf8) = *(undefined *)(param_1 + 0xdf9);
    *(undefined *)(param_1 + 2) = 1;
    sub_0811B318(param_1);
  }
  return in_lr;
}

