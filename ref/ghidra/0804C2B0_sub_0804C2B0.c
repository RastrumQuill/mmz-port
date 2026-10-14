// sub_0804C2B0 at 0x0804C2B0 (thumb)

void sub_0804C2B0(int param_1)

{
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  return;
}

