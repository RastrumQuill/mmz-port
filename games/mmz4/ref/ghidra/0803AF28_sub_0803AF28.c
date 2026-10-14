// sub_0803AF28 at 0x0803AF28 (thumb)

undefined4 sub_0803AF28(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  param_2[1] = *(int *)(param_1 + 0x58) + -0x1100;
  return 1;
}

