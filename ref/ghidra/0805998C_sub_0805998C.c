// sub_0805998C at 0x0805998C (thumb)

undefined4 sub_0805998C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar1 - *(int *)(param_1 + 0x50) < 0x501) {
    *(int *)(param_1 + 0x50) = iVar1;
  }
  return in_lr;
}

