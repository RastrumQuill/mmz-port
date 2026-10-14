// sub_0800A3BC at 0x0800A3BC (thumb)

void sub_0800A3BC(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 3;
  return;
}

