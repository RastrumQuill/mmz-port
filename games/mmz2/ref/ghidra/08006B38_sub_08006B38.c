// sub_08006B38 at 0x08006B38 (thumb)

void sub_08006B38(int param_1)

{
  DAT_0200001c = param_1;
  *(int *)(param_1 + 0xc) = param_1 + 0x14;
  return;
}

