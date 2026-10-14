// sub_0802E9DC at 0x0802E9DC (thumb)

void sub_0802E9DC(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x40) + 0xb8) =
       *(int *)(DAT_0202286c + 0x4c) - *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  return;
}

