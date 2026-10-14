// sub_080BB0C8 at 0x080BB0C8 (thumb)

void sub_080BB0C8(int param_1)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(*(int *)(param_1 + 0x20) + 8);
  return;
}

