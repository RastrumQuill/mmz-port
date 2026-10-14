// sub_0803AEB8 at 0x0803AEB8 (thumb)

undefined4 sub_0803AEB8(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  param_2[1] = *(int *)(param_1 + 0x58) + -0x400;
  return 1;
}

