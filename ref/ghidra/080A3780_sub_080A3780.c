// sub_080A3780 at 0x080A3780 (thumb)

void sub_080A3780(int param_1)

{
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
  return;
}

