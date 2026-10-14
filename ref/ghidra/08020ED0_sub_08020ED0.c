// sub_08020ED0 at 0x08020ED0 (thumb)

void sub_08020ED0(int param_1)

{
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    DAT_02022880 = 1;
  }
  return;
}

