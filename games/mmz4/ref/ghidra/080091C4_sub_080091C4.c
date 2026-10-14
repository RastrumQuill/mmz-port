// sub_080091C4 at 0x080091C4 (thumb)

undefined8 sub_080091C4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (0x3ff < param_1) {
    if (0x7ff < param_1) {
      param_2 = ~param_2;
      goto LAB_080091fe;
    }
    iVar1 = (param_2 - 0x1000) + (param_1 + -0x400) * 4;
    if (0 < iVar1) {
      param_2 = -iVar1;
      goto LAB_080091fe;
    }
  }
  param_2 = 0;
LAB_080091fe:
  return CONCAT44(in_lr,param_2);
}

