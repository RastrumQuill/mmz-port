// sub_080DD9F4 at 0x080DD9F4 (thumb)

undefined4 sub_080DD9F4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  iVar1 = *(int *)(param_1 + 100);
  *(int *)(param_1 + 100) = iVar1 + -1;
  if ((iVar1 == 0) || (1 < *(byte *)(iVar2 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DD2EC(param_1);
  }
  return in_lr;
}

