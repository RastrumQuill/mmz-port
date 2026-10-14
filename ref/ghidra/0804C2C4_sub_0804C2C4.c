// sub_0804C2C4 at 0x0804C2C4 (thumb)

void sub_0804C2C4(int param_1)

{
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffe80;
  *(undefined *)(param_1 + 0x44) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  return;
}

