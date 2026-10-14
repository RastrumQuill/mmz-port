// sub_0800AC04 at 0x0800AC04 (thumb)

undefined8 sub_0800AC04(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (0x3ff < param_1) {
    if (0x7ff < param_1) {
      param_2 = ~param_2;
      goto LAB_0800ac3e;
    }
    iVar1 = (param_2 - 0x1000) + (param_1 + -0x400) * 4;
    if (0 < iVar1) {
      param_2 = -iVar1;
      goto LAB_0800ac3e;
    }
  }
  param_2 = 0;
LAB_0800ac3e:
  return CONCAT44(in_lr,param_2);
}

