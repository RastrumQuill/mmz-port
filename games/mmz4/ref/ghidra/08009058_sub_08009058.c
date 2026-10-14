// sub_08009058 at 0x08009058 (thumb)

undefined8 sub_08009058(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((int)param_2 < (param_1 >> 2) + 0x800) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}

