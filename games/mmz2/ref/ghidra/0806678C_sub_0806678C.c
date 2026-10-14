// sub_0806678C at 0x0806678C (thumb)

undefined4 sub_0806678C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(int *)(*(int *)(param_1 + 0x2c) + 0xb8) =
         *(int *)(DAT_0202e130 + 0x54) - *(int *)(*(int *)(param_1 + 0x2c) + 0x54);
  }
  return in_lr;
}

