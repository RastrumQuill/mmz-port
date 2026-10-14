// sub_08068204 at 0x08068204 (thumb)

void sub_08068204(int param_1)

{
  if ((*(ushort *)(param_1 + 0x1a) & 0x41) == 0x41) {
    *(bool *)(*(int *)(param_1 + 0x40) + 0xc4) =
         0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  }
  return;
}

