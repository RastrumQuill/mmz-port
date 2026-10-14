// sub_08037F70 at 0x08037F70 (thumb)

void sub_08037F70(int param_1)

{
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  return;
}

