// sub_0800931C at 0x0800931C (thumb)

undefined8 sub_0800931C(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((param_1 < 0x400) ||
     ((param_1 < 0x800 &&
      ((int)(param_2 + (param_1 + -0x400) * -4) < 0 == SBORROW4(param_2,(param_1 + -0x400) * 4)))))
  {
    param_2 = 0;
  }
  else {
    param_2 = ~param_2;
  }
  return CONCAT44(in_lr,param_2);
}

