// sub_080D1C58 at 0x080D1C58 (thumb)

void sub_080D1C58(int param_1)

{
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + (DAT_0202e030 >> 1) * -0x100;
  return;
}

