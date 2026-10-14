// sub_08009D50 at 0x08009D50 (thumb)

undefined8 sub_08009D50(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((int)param_2 < 0xc00 - (param_1 >> 2)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}

