// sub_0804F12C at 0x0804F12C (thumb)

void sub_0804F12C(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x2c) + 0xb4) =
       *(int *)(DAT_0202e130 + 0x54) - *(int *)(*(int *)(param_1 + 0x2c) + 0x54);
  return;
}

