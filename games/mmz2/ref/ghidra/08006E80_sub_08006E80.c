// sub_08006E80 at 0x08006E80 (thumb)

void sub_08006E80(undefined4 *param_1,undefined4 param_2,undefined param_3)

{
  *param_1 = param_2;
  *(undefined *)((int)param_1 + 0x3b) = param_3;
  *(undefined *)((int)param_1 + 0x36) = 0;
  return;
}

