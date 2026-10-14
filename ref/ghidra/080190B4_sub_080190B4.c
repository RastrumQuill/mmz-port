// sub_080190B4 at 0x080190B4 (thumb)

undefined4
sub_080190B4(undefined4 param_1,undefined4 *param_2,undefined param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080190EC(param_1,param_3,param_4);
  *param_2 = uVar1;
  uVar1 = sub_08019110(param_1,param_3,param_5);
  param_2[1] = uVar1;
  return in_lr;
}

