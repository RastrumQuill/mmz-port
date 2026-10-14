// sub_080D62C4 at 0x080D62C4 (thumb)

undefined4
sub_080D62C4(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 in_lr;
  
  sub_0801F020(param_1,param_3,param_4,param_5,param_6);
  *param_3 = *param_3 - *param_2;
  param_3[1] = param_3[1] - param_2[1];
  return in_lr;
}

