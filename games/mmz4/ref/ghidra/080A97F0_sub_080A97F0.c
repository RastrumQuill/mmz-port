// sub_080A97F0 at 0x080A97F0 (thumb)

undefined8 sub_080A97F0(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x2800);
  return CONCAT44(in_lr,(uint)(sVar1 != 0));
}

