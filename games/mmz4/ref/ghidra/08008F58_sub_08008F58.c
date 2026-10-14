// sub_08008F58 at 0x08008F58 (thumb)

undefined8 sub_08008F58(int param_1,int param_2)

{
  undefined4 in_lr;
  
  param_2 = param_2 - (param_1 >> 1);
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    param_2 = -param_2;
  }
  return CONCAT44(in_lr,param_2);
}

