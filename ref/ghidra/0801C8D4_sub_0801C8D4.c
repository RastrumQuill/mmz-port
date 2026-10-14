// sub_0801C8D4 at 0x0801C8D4 (thumb)

void sub_0801C8D4(int param_1,char param_2)

{
  if (param_2 == '\x01') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined2 *)(param_1 + 6) = 0xffff;
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0x13) = 0xff;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  return;
}

