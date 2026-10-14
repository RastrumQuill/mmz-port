// sub_0801F9C0 at 0x0801F9C0 (thumb)

ulonglong sub_0801F9C0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,
                      int param_6,int param_7,undefined4 param_8,undefined4 param_9,
                      undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_4 == 0) {
    param_4 = *param_3;
  }
  if (param_5 == 0) {
    param_5 = param_3[1];
  }
  if (param_6 == 0) {
    if (-1 < -param_7) {
LAB_0801f9ea:
      uVar1 = sub_0801FA30(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10,
                           param_11);
      goto LAB_0801fa24;
    }
  }
  else if (-1 < param_7) goto LAB_0801f9ea;
  uVar1 = sub_0801FC60(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10,
                       param_11);
LAB_0801fa24:
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

