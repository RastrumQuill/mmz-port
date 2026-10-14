// sub_08018FF8 at 0x08018FF8 (thumb)

undefined4 sub_08018FF8(undefined4 param_1,undefined4 *param_2,undefined param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0801901C(param_1,param_3);
  *param_2 = uVar1;
  uVar1 = sub_08019068(param_1,param_3);
  param_2[1] = uVar1;
  return in_lr;
}

