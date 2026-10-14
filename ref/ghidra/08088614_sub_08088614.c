// sub_08088614 at 0x08088614 (thumb)

undefined4 sub_08088614(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEB4(param_1);
  sub_080033F0(param_1 + 0x6c,5);
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x11) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0xffffffc0;
    iVar3 = *(int *)(iVar4 + 0x4c) + 0x800;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0x40;
    iVar3 = *(int *)(iVar4 + 0x4c) + -0x800;
  }
  *(int *)(param_1 + 0x4c) = iVar3;
  *(int *)(param_1 + 0x50) = *(int *)(iVar4 + 0x50) + -0x1800;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x12) = 0x18;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_080885A4(param_1);
  return in_lr;
}

