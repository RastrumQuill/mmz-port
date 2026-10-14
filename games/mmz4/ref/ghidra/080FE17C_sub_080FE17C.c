// sub_080FE17C at 0x080FE17C (thumb)

void sub_080FE17C(int param_1)

{
  *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + -0x6500;
  *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x4100;
  return;
}

