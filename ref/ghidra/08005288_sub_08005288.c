// sub_08005288 at 0x08005288 (thumb)

undefined4
sub_08005288(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 in_lr;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return in_lr;
}

