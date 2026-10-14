// sub_0804E14C at 0x0804E14C (thumb)

void sub_0804E14C(int param_1)

{
  if ((*(ushort *)(param_1 + 0x1a) & 0x41) == 0x41) {
    *(int *)(*(int *)(param_1 + 0x40) + 0xbc) =
         *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 0x4c) -
         *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  }
  return;
}

