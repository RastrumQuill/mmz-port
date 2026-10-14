// sub_080EA32C at 0x080EA32C (thumb)

undefined4 sub_080EA32C(undefined2 *param_1)

{
  undefined4 in_lr;
  
  *param_1 = 0;
  param_1[1] = 1;
  *(undefined *)(param_1 + 2) = 0;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined *)((int)param_1 + 7) = 0;
  param_1[0xb] = 0;
  *(undefined *)((int)param_1 + 5) = 1;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return in_lr;
}

