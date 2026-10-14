// sub_0800CA8C at 0x0800CA8C (thumb)

void sub_0800CA8C(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3c0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return;
}

