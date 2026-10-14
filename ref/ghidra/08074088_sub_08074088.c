// sub_08074088 at 0x08074088 (thumb)

void sub_08074088(int param_1)

{
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    *(int *)(*(int *)(param_1 + 0x40) + 0xbc) =
         *(int *)(DAT_0202286c + 0x4c) - *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  }
  return;
}

