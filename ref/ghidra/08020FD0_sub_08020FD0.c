// sub_08020FD0 at 0x08020FD0 (thumb)

void sub_08020FD0(int param_1)

{
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 1;
  DAT_02022874 = 1;
  DAT_02004fa0 = DAT_02004fa0 | 1;
  return;
}

