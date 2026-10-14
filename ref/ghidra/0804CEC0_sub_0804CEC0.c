// sub_0804CEC0 at 0x0804CEC0 (thumb)

void sub_0804CEC0(int param_1)

{
  if (*(byte *)(param_1 + 0x12) < 0x40) {
    *(undefined *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x180;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x45) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x1f) = 0;
  }
  return;
}

