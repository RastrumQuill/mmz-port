// sub_08008F8C at 0x08008F8C (thumb)

undefined8 sub_08008F8C(int param_1,int param_2)

{
  undefined4 in_lr;
  
  param_2 = param_2 - (param_1 >> 2);
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    param_2 = -param_2;
  }
  return CONCAT44(in_lr,param_2);
}

