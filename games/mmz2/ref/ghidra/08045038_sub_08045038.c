// sub_08045038 at 0x08045038 (thumb)

undefined4 sub_08045038(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(*(int *)(param_1 + 0x2c) + 0x13) =
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  }
  return in_lr;
}

