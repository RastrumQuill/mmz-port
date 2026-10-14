// sub_0800DA94 at 0x0800DA94 (thumb)

void sub_0800DA94(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x4c) = 0x14a;
    *(undefined4 *)(param_1 + 0x50) = 0xffffff30;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return;
}

