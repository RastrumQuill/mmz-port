// sub_080090A4 at 0x080090A4 (thumb)

undefined8 sub_080090A4(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((int)param_2 < 0x1000 - (param_1 >> 1)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}

