// sub_08070C28 at 0x08070C28 (thumb)

void sub_08070C28(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x40) + 0xb8) =
       *(int *)(DAT_0202286c + 0x4c) - *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  return;
}

