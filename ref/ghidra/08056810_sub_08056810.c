// sub_08056810 at 0x08056810 (thumb)

void sub_08056810(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x40) + 0xb8) =
       *(int *)(DAT_0202286c + 0x4c) - *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  return;
}

