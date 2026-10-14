// sub_0801C8A4 at 0x0801C8A4 (thumb)

void sub_0801C8A4(int param_1,char param_2)

{
  if (param_2 == '\x01') {
    *(undefined *)(param_1 + 0xc) = 2;
    *(undefined2 *)(param_1 + 4) = 0xffff;
    *(undefined *)(param_1 + 0x11) = 4;
    *(undefined *)(param_1 + 0x10) = 0xff;
  }
  else {
    *(undefined *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 0x11) = 3;
    *(undefined *)(param_1 + 0x10) = 0;
  }
  return;
}

