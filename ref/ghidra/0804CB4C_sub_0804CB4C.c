// sub_0804CB4C at 0x0804CB4C (thumb)

void sub_0804CB4C(int param_1)

{
  if (0x3f < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x10) = 3;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffe80;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  return;
}

