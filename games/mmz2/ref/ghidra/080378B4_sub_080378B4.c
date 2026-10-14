// sub_080378B4 at 0x080378B4 (thumb)

undefined4 sub_080378B4(undefined4 param_1,undefined4 *param_2,undefined param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080378D8(param_1,param_3);
  *param_2 = uVar1;
  uVar1 = sub_0803792C(param_1,param_3);
  param_2[1] = uVar1;
  return in_lr;
}

