// sub_080BB850 at 0x080BB850 (thumb)

void sub_080BB850(int param_1)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(*(int *)(param_1 + 0x20) + 8);
  return;
}

