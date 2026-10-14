// sub_080973A4 at 0x080973A4 (thumb)

void sub_080973A4(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x2c) + 0xb4) =
       *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(*(int *)(param_1 + 0x2c) + 0x54);
  return;
}

