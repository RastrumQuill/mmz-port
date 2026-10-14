// sub_08013C0C at 0x08013C0C (thumb)

void sub_08013C0C(int param_1,int param_2)

{
  *(char *)(param_1 + 0x18) = (char)param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(&DAT_0829ff8c + param_2 * 4);
  return;
}

