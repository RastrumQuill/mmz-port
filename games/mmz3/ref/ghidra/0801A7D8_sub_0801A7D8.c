// sub_0801A7D8 at 0x0801A7D8 (thumb)

void sub_0801A7D8(int param_1,int param_2)

{
  *(char *)(param_1 + 0x18) = (char)param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(&DAT_08349570 + param_2 * 4);
  return;
}

