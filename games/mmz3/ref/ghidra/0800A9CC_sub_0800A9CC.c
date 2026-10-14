// sub_0800A9CC at 0x0800A9CC (thumb)

undefined8 sub_0800A9CC(int param_1,int param_2)

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

