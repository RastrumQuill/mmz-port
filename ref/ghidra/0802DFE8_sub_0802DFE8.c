// sub_0802DFE8 at 0x0802DFE8 (thumb)

undefined4 sub_0802DFE8(int param_1)

{
  undefined extraout_var;
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0xffffff40;
  }
  sub_080297C0(param_1);
  iVar1 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar1;
  iVar1 = sub_08008360(iVar1,*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x50) = iVar1 + -0xd00;
  iVar1 = sub_08008360(*(int *)(param_1 + 0x4c) + -0x1000);
  iVar2 = sub_08008360(*(int *)(param_1 + 0x4c) + 0x1000,*(undefined4 *)(param_1 + 0x50));
  sub_080C88E8(0x200,(iVar2 - iVar1) * 0x1000 >> 0x10);
  *(undefined *)(param_1 + 0x1f) = extraout_var;
  if (iVar1 == iVar2) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  return in_lr;
}

