// sub_0804C1F4 at 0x0804C1F4 (thumb)

void sub_0804C1F4(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 0xb;
  }
  return;
}

