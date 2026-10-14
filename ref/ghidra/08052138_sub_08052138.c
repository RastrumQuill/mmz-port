// sub_08052138 at 0x08052138 (thumb)

void sub_08052138(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x40) + 0xc0) =
       *(int *)(DAT_0202286c + 0x4c) - *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  return;
}

