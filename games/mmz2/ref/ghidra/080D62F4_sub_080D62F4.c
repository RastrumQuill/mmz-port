// sub_080D62F4 at 0x080D62F4 (thumb)

undefined8 sub_080D62F4(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((*param_1 - *param_2) + 0x2000U < 0x4001) && ((param_1[1] - param_2[1]) + 0x2000U < 0x4001))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

