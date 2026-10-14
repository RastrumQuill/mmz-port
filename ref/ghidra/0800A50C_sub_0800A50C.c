// sub_0800A50C at 0x0800A50C (thumb)

void sub_0800A50C(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0x180;
    *(undefined4 *)(param_1 + 0x4c) = 0xfffffe98;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return;
}

