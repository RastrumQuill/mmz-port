// sub_08097CA0 at 0x08097CA0 (thumb)

void sub_08097CA0(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x2c) + 0xb4) =
       *(int *)(DAT_0202e130 + 0x54) - *(int *)(*(int *)(param_1 + 0x2c) + 0x54);
  return;
}

