// sub_080DFE34 at 0x080DFE34 (thumb)

undefined4 sub_080DFE34(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080E0E70();
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return in_lr;
}

