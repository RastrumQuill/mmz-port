// sub_080A763C at 0x080A763C (thumb)

void sub_080A763C(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x40) + 0xc4) =
       *(int *)(DAT_0202286c + 0x4c) - *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  return;
}

