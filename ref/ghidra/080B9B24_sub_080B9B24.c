// sub_080B9B24 at 0x080B9B24 (thumb)

void sub_080B9B24(int param_1)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(*(int *)(param_1 + 0x20) + 8);
  return;
}

