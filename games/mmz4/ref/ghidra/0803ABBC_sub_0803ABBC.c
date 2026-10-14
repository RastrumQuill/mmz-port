// sub_0803ABBC at 0x0803ABBC (thumb)

undefined4 sub_0803ABBC(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = *(ushort *)(DAT_020359b8 + 0x15a) & 0x10;
  if ((*(ushort *)(DAT_020359b8 + 0x15a) & 0x10) == 0) {
    if (1 < *(byte *)(DAT_020359b8 + 0xc0)) {
      return in_lr;
    }
    if (1 < *(byte *)(DAT_020359b8 + 0xc1)) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    uVar2 = 0;
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(uint *)(param_1 + 0x8c) = uVar2;
  *(uint *)(param_1 + 0x90) = uVar2;
  *(char *)(param_1 + 0x94) = (char)uVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

