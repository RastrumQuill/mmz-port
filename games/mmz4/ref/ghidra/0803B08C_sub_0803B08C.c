// sub_0803B08C at 0x0803B08C (thumb)

undefined4 sub_0803B08C(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  param_2[1] = *(int *)(param_1 + 0x58) + -0xb00;
  return 1;
}

