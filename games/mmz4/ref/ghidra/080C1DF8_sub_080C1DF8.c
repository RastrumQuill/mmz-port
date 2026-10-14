// sub_080C1DF8 at 0x080C1DF8 (thumb)

undefined4 sub_080C1DF8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  iVar1 = DAT_0202dbf0;
  iVar3 = *(int *)(DAT_0202dbf0 + 0x54);
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + -0xc00;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if ((*(byte *)(iVar1 + 10) & 0x10) == 0) {
    iVar1 = -*(int *)(param_1 + 0x5c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar3 + iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    iVar1 = sub_08128A9C(uVar2 * 2 >> 0x11,0xf);
    *(int *)(param_1 + 0x60) = (iVar1 + 4) * -0x40;
    *(undefined *)(param_1 + 0x12) = 0x40;
    sub_080C17F4(param_1);
  }
  return in_lr;
}

