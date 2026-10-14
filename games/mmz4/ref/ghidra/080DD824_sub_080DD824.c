// sub_080DD824 at 0x080DD824 (thumb)

undefined4 sub_080DD824(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  iVar2 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x5c) = iVar2 - *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0xa00);
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DD2EC(param_1);
  }
  return in_lr;
}

