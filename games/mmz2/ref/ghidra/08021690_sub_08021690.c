// sub_08021690 at 0x08021690 (thumb)

ulonglong sub_08021690(int *param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_4 == 0) {
    param_4 = *param_1 - *param_2;
  }
  uVar1 = 0xffffffff;
  if (0 < param_4) {
    uVar1 = 1;
  }
  uVar1 = sub_08021830(param_1,param_2,param_3,uVar1,param_5);
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

