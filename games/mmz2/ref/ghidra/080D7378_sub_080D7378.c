// sub_080D7378 at 0x080D7378 (thumb)

void sub_080D7378(int param_1)

{
  *(undefined *)(param_1 + 0xf) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return;
}

