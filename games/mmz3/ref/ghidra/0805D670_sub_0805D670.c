// sub_0805D670 at 0x0805D670 (thumb)

undefined4 sub_0805D670(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4) + -0xe000;
  if (*(int *)(param_1 + 0x54) < iVar1) {
    *(int *)(param_1 + 0x54) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0xb4) + 0xe000;
  if (iVar1 < *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = iVar1;
  }
  return in_lr;
}

