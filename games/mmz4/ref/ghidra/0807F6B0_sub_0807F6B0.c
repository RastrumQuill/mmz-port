// sub_0807F6B0 at 0x0807F6B0 (thumb)

undefined4 sub_0807F6B0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    sub_08006984(0x4c);
    *(bool *)(*(int *)(param_1 + 0x2c) + 0xd2) =
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54) <
         *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
  }
  return in_lr;
}

