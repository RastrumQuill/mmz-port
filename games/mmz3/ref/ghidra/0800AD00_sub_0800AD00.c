// sub_0800AD00 at 0x0800AD00 (thumb)

undefined8 sub_0800AD00(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((param_1 < 0xc00) ||
     ((int)(param_2 + (param_1 + -0xc00) * -4) < 0 == SBORROW4(param_2,(param_1 + -0xc00) * 4))) {
    param_2 = 0;
  }
  else {
    param_2 = ~param_2;
  }
  return CONCAT44(in_lr,param_2);
}

