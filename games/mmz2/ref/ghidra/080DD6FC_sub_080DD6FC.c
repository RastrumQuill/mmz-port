// sub_080DD6FC at 0x080DD6FC (thumb)

void sub_080DD6FC(int param_1)

{
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(*(int *)(param_1 + 0x28) + 8);
  return;
}

