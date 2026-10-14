// sub_080070C0 at 0x080070C0 (thumb)

void sub_080070C0(int param_1)

{
  DAT_020002a4 = param_1;
  *(int *)(param_1 + 0xc) = param_1 + 0x14;
  return;
}

