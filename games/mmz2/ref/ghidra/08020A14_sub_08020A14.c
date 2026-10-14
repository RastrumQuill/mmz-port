// sub_08020A14 at 0x08020A14 (thumb)

ulonglong sub_08020A14(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,
                      undefined4 param_5,int param_6,int param_7,undefined4 param_8,
                      undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_4 == 0) {
    param_4 = *param_3;
  }
  if (param_6 == 0) {
    if (-1 < -param_7) {
LAB_08020a38:
      uVar1 = sub_08020A78(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10)
      ;
      goto LAB_08020a6a;
    }
  }
  else if (-1 < param_7) goto LAB_08020a38;
  uVar1 = sub_08020B28(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10);
LAB_08020a6a:
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

