// sub_080B5120 at 0x080B5120 (thumb)

undefined4
sub_080B5120(undefined4 param_1,int *param_2,int *param_3,undefined param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 in_lr;
  
  sub_080190B4(param_1,param_3,param_4,param_5,param_6);
  *param_3 = *param_3 - *param_2;
  param_3[1] = param_3[1] - param_2[1];
  return in_lr;
}

