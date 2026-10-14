// sub_080054B4 at 0x080054B4 (thumb)

void sub_080054B4(int param_1)

{
  DAT_02000024 = param_1;
  *(int *)(param_1 + 0xc) = param_1 + 0x14;
  return;
}

