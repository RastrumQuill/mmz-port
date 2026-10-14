// sub_080B9A14 at 0x080B9A14 (thumb)

undefined4 sub_080B9A14(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar4 = *(int *)(param_1 + 0x74) + -0xc;
  *(int *)(param_1 + 0x74) = iVar4;
  if (iVar4 < 0) {
    sub_080B9AA0(param_1);
  }
  else {
    iVar2 = iVar4 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11) + 0x40 & 0xff];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    iVar3 = iVar4 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11)];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar2 >> 8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
    if (iVar4 < 0x101) {
      bVar1 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
  }
  return in_lr;
}

