// sub_080D6E38 at 0x080D6E38 (thumb)

void sub_080D6E38(int param_1)

{
  *(undefined *)(param_1 + 0xf) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return;
}

