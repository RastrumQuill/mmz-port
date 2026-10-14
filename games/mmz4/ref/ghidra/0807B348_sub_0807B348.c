// sub_0807B348 at 0x0807B348 (thumb)

undefined4 sub_0807B348(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    sub_08006984(0x4b);
    *(bool *)(*(int *)(param_1 + 0x2c) + 0xd4) =
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54) <
         *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
  }
  return in_lr;
}

