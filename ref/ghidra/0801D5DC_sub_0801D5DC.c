// sub_0801D5DC at 0x0801D5DC (thumb)

void sub_0801D5DC(int param_1)

{
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(ushort *)(param_1 + 0xe) = (ushort)*(byte *)(param_1 + 0xf) << 8 | 2;
  return;
}

