// sub_08068E74 at 0x08068E74 (thumb)

void sub_08068E74(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x40) + 0xb8) =
       *(int *)(DAT_0202286c + 0x4c) - *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  return;
}

