// sub_08022358 at 0x08022358 (thumb)

undefined4 sub_08022358(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (0 < *(int *)(param_1 + 0x160))) {
    *(int *)(*(int *)(param_1 + 0x10) + 0x54) = *(int *)(param_1 + 0x160);
  }
  return in_lr;
}

