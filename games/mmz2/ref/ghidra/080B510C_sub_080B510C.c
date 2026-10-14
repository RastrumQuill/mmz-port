// sub_080B510C at 0x080B510C (thumb)

undefined4 sub_080B510C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  bVar1 = *(char *)(param_1 + 0x13) - 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  iVar3 = *(int *)(param_1 + 0x5c);
  iVar2 = iVar3 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - (iVar2 >> 8);
  iVar2 = iVar3 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - (iVar2 >> 8);
  *(int *)(param_1 + 0x5c) = iVar3 + 0x10;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (0x4ff < *(int *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

