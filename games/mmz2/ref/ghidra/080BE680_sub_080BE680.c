// sub_080BE680 at 0x080BE680 (thumb)

undefined4 sub_080BE680(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    sub_080BE1AC(param_1,3,uVar4 * 2 >> 0x11 & 1);
    sub_080AC60C(1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

