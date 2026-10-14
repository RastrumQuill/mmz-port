// sub_080D26A8 at 0x080D26A8 (thumb)

undefined8 sub_080D26A8(int param_1,short param_2,int param_3)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  return CONCAT44(in_lr,(uint)(param_2 != 0));
}

