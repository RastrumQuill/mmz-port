// sub_08009EEC at 0x08009EEC (thumb)

undefined8 sub_08009EEC(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((param_1 < 0x800) ||
     ((int)(param_2 + (param_1 + -0x800) * -2) < 0 == SBORROW4(param_2,(param_1 + -0x800) * 2))) {
    param_2 = 0;
  }
  else {
    param_2 = ~param_2;
  }
  return CONCAT44(in_lr,param_2);
}

