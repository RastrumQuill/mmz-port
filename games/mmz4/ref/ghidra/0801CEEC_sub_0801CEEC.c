// sub_0801CEEC at 0x0801CEEC (thumb)

void sub_0801CEEC(int param_1)

{
  *(undefined *)(param_1 + 0x1e) = 0xff;
  *(undefined *)(param_1 + 0x1f) = 0xff;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
  return;
}

