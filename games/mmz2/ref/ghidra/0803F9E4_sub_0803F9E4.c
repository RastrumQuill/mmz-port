// sub_0803F9E4 at 0x0803F9E4 (thumb)

undefined4 sub_0803F9E4(int param_1,undefined4 param_2,short param_3)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,param_2,param_1 + 0x54,(int)param_3);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return in_lr;
}

