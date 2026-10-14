// sub_080375A0 at 0x080375A0 (thumb)

void sub_080375A0(int param_1)

{
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return;
}

