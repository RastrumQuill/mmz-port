// sub_0801F020 at 0x0801F020 (thumb)

undefined4
sub_0801F020(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0801F054(param_1,param_3,param_4);
  *param_2 = uVar1;
  uVar1 = sub_0801F07C(param_1,param_3,param_5);
  param_2[1] = uVar1;
  return in_lr;
}

