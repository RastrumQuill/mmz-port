// sub_0805024C at 0x0805024C (thumb)

void sub_0805024C(int param_1)

{
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    *(int *)(*(int *)(param_1 + 0x40) + 0xbc) =
         *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 0x4c) -
         *(int *)(*(int *)(param_1 + 0x40) + 0x4c);
  }
  return;
}

