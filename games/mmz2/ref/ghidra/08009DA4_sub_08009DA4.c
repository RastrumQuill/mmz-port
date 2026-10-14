// sub_08009DA4 at 0x08009DA4 (thumb)

undefined8 sub_08009DA4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_1 < 0x800) {
    iVar1 = (param_2 - 0x1000) + param_1 * 2;
    if (iVar1 < 1) {
      param_2 = 0;
    }
    else {
      param_2 = -iVar1;
    }
  }
  else {
    param_2 = ~param_2;
  }
  return CONCAT44(in_lr,param_2);
}

