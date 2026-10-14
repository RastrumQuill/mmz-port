// sub_08009D34 at 0x08009D34 (thumb)

undefined8 sub_08009D34(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((int)param_2 < 0x1000 - (param_1 >> 2)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}

