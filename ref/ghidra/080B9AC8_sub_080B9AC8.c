// sub_080B9AC8 at 0x080B9AC8 (thumb)

undefined4 sub_080B9AC8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080B9B78();
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(iVar1 + 8);
  return in_lr;
}

