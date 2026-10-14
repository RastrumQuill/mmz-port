// sub_0804C0C4 at 0x0804C0C4 (thumb)

void sub_0804C0C4(int param_1)

{
  if (0xc0 < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x10) = 1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x180;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  return;
}

