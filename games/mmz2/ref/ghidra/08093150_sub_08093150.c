// sub_08093150 at 0x08093150 (thumb)

void sub_08093150(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x2c) + 0xbc) =
       *(int *)(DAT_0202e130 + 0x54) - *(int *)(*(int *)(param_1 + 0x2c) + 0x54);
  return;
}

