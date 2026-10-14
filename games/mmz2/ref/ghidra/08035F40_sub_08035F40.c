// sub_08035F40 at 0x08035F40 (thumb)

undefined4 sub_08035F40(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08035F60();
  *param_3 = uVar1;
  uVar1 = sub_08035F74(param_1,param_2);
  param_3[1] = uVar1;
  return in_lr;
}

