// sub_080F78CC at 0x080F78CC (thumb)

undefined4 sub_080F78CC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x58) + -0x120;
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 < *(int *)(param_1 + 100)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 100);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  return in_lr;
}

