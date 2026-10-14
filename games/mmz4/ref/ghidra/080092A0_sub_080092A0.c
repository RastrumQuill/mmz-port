// sub_080092A0 at 0x080092A0 (thumb)

undefined8 sub_080092A0(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((param_1 < 0x800) && ((int)(param_2 + param_1 * -2) < 0 == SBORROW4(param_2,param_1 * 2))) {
    param_2 = 0;
  }
  else {
    param_2 = ~param_2;
  }
  return CONCAT44(in_lr,param_2);
}

