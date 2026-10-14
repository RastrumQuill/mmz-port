// sub_080978A0 at 0x080978A0 (thumb)

void sub_080978A0(int param_1)

{
  *(byte *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) - 1U & 0xf;
  return;
}

