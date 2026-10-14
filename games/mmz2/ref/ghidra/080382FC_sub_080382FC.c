// sub_080382FC at 0x080382FC (thumb)

void sub_080382FC(int param_1)

{
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(ushort *)(param_1 + 0xe) = (ushort)*(byte *)(param_1 + 0xf) << 8 | 2;
  return;
}

