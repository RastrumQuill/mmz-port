// sub_0804C540 at 0x0804C540 (thumb)

void sub_0804C540(int param_1)

{
  if (-1 < *(char *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x45) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x1f) = 0;
  }
  return;
}

