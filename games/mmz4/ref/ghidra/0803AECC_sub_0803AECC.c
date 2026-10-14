// sub_0803AECC at 0x0803AECC (thumb)

undefined4 sub_0803AECC(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  param_2[1] = *(int *)(param_1 + 0x58) + -0x400;
  return 1;
}

