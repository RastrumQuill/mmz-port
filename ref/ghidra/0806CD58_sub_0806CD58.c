// sub_0806CD58 at 0x0806CD58 (thumb)

void sub_0806CD58(int param_1)

{
  if ((*(ushort *)(param_1 + 0x1a) & 0x41) == 0x41) {
    *(bool *)(*(int *)(param_1 + 0x40) + 0xc4) =
         *(int *)(*(int *)(param_1 + 0x40) + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  }
  return;
}

