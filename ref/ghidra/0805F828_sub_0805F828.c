// sub_0805F828 at 0x0805F828 (thumb)

void sub_0805F828(int param_1)

{
  *(byte *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) - 1U & 0xf;
  return;
}

