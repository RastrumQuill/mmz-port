// sub_0801AF04 at 0x0801AF04 (thumb)

undefined8 sub_0801AF04(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0801A28C(param_1,param_2,param_3 >> 0x1f);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar1 = iVar1 + -1;
    if (param_4 < iVar1) {
      iVar1 = -iVar1;
    }
  }
  return CONCAT44(in_lr,iVar1);
}

