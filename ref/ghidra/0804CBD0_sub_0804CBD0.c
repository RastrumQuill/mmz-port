// sub_0804CBD0 at 0x0804CBD0 (thumb)

void sub_0804CBD0(int param_1)

{
  if (*(byte *)(param_1 + 0x12) < 0x40) {
    *(undefined *)(param_1 + 0x10) = 1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffe80;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  return;
}

