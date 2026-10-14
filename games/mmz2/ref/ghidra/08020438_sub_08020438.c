// sub_08020438 at 0x08020438 (thumb)

ulonglong sub_08020438(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,
                      int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                      undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_4 == 0) {
    param_4 = *param_3;
  }
  if (param_5 == 0) {
    if (-1 < -param_6) {
LAB_0802045c:
      uVar1 = sub_08020690(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,param_10)
      ;
      goto LAB_0802048e;
    }
  }
  else if (-1 < param_6) goto LAB_0802045c;
  uVar1 = sub_080207AC(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,param_10);
LAB_0802048e:
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

