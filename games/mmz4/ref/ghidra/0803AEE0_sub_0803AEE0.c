// sub_0803AEE0 at 0x0803AEE0 (thumb)

undefined4 sub_0803AEE0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  param_2[1] = *(int *)(param_1 + 0x58) + -0xe00;
  return 1;
}

