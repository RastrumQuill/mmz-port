// sub_080DABA0 at 0x080DABA0 (thumb)

void sub_080DABA0(int param_1)

{
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(*(int *)(param_1 + 0x28) + 8);
  return;
}

