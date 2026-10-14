// sub_080948EC at 0x080948EC (thumb)

void sub_080948EC(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x2c) + 0xb4) =
       *(int *)(DAT_0202e130 + 0x54) - *(int *)(*(int *)(param_1 + 0x2c) + 0x54);
  return;
}

