// sub_08064604 at 0x08064604 (thumb)

undefined4 sub_08064604(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(*(int *)(param_1 + 0x2c) + 0xb8) =
         *(int *)(DAT_0202f5c0 + 0x54) < *(int *)(*(int *)(param_1 + 0x2c) + 0x54);
  }
  return in_lr;
}

