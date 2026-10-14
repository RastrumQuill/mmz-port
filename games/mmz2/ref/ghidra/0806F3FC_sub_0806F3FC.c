// sub_0806F3FC at 0x0806F3FC (thumb)

undefined4 sub_0806F3FC(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(*(int *)(param_1 + 0x2c) + 0xbc) =
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54) <
         *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
  }
  return in_lr;
}

