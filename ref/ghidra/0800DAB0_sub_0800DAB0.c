// sub_0800DAB0 at 0x0800DAB0 (thumb)

void sub_0800DAB0(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x4c) = 0x1c;
    *(undefined4 *)(param_1 + 0x50) = 0xffffffb0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return;
}

