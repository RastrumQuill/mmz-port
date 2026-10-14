// sub_080BBC4C at 0x080BBC4C (thumb)

void sub_080BBC4C(int param_1)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(*(int *)(param_1 + 0x20) + 8);
  return;
}

