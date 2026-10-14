// sub_080B5F50 at 0x080B5F50 (thumb)

void sub_080B5F50(int param_1)

{
  *(undefined *)(param_1 + 0xf) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return;
}

