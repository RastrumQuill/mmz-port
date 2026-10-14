// sub_08009E78 at 0x08009E78 (thumb)

undefined8 sub_08009E78(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (0x7ff < param_1) {
    if (0xbff < param_1) {
      param_2 = ~param_2;
      goto LAB_08009eb2;
    }
    iVar1 = (param_2 - 0x1000) + (param_1 + -0x800) * 4;
    if (0 < iVar1) {
      param_2 = -iVar1;
      goto LAB_08009eb2;
    }
  }
  param_2 = 0;
LAB_08009eb2:
  return CONCAT44(in_lr,param_2);
}

