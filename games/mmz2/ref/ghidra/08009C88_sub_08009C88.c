// sub_08009C88 at 0x08009C88 (thumb)

undefined8 sub_08009C88(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((int)param_2 < (param_1 >> 1) + 0x800) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}

