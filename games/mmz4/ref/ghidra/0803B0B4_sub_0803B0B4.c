// sub_0803B0B4 at 0x0803B0B4 (thumb)

undefined4 sub_0803B0B4(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  param_2[1] = *(int *)(param_1 + 0x58) + -0x1000;
  return 1;
}

