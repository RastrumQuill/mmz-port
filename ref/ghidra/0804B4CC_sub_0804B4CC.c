// sub_0804B4CC at 0x0804B4CC (thumb)

void sub_0804B4CC(int param_1)

{
  if ((*(ushort *)(param_1 + 0x1a) & 0x41) == 0x41) {
    *(int *)(*(int *)(param_1 + 0x40) + 0xc0) =
         *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 0x4c) -
         *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  }
  return;
}

