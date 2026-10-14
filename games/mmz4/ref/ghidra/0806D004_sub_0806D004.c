// sub_0806D004 at 0x0806D004 (thumb)

undefined4 sub_0806D004(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    sub_08006984(0x3f);
    *(bool *)(*(int *)(param_1 + 0x2c) + 0xdb) =
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54) <
         *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
  }
  return in_lr;
}

