// sub_080C9B84 at 0x080C9B84 (thumb)

void sub_080C9B84(int param_1)

{
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0xb5) = 1;
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 0;
  return;
}

