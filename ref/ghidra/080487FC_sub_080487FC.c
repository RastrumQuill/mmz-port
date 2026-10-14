// sub_080487FC at 0x080487FC (thumb)

void sub_080487FC(int param_1)

{
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    *(bool *)(*(int *)(param_1 + 0x40) + 200) =
         *(int *)(*(int *)(param_1 + 0x40) + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  }
  return;
}

