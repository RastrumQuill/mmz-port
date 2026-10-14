// sub_080B648C at 0x080B648C (thumb)

void sub_080B648C(int param_1)

{
  *(undefined *)(param_1 + 0xf) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return;
}

