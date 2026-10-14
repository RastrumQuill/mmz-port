// sub_080E8ED4 at 0x080E8ED4 (thumb)

undefined4 sub_080E8ED4(int param_1)

{
  undefined4 in_lr;
  
  if (0 < *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x78)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x100;
  }
  return in_lr;
}

