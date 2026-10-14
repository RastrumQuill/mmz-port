// sub_080D6854 at 0x080D6854 (thumb)

undefined4 sub_080D6854(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0801CFF0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x5c) * 0xfa;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((*(char *)(param_1 + 0x13) != '\0') &&
     (iVar3 = *(int *)(param_1 + 0x60) + 0x40, *(int *)(param_1 + 0x60) = iVar3, 0x700 < iVar3)) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_080D63D8(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54);
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x2a);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

