// sub_08046024 at 0x08046024 (thumb)

undefined4 sub_08046024(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  iVar2 = *(int *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar2 = iVar2 + -0x100;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  iVar2 = *(int *)(param_1 + 0xc0);
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar2 = iVar2 + -0x100;
  }
  *(int *)(param_1 + 0x58) = iVar2;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (2 < bVar1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

