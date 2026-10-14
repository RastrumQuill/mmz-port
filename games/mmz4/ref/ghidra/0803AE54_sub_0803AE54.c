// sub_0803AE54 at 0x0803AE54 (thumb)

undefined4 sub_0803AE54(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  param_2[1] = *(int *)(param_1 + 0x58) + -0x700;
  return 1;
}

