// sub_08033154 at 0x08033154 (thumb)

undefined8 sub_08033154(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 + 0x2000U < 0x4001) {
    if (param_2 < 0) {
      param_2 = -param_2;
    }
  }
  else {
    param_2 = 0x2000;
  }
  *(short *)(param_1 + 0x2ea) = (short)param_2;
  return CONCAT44(in_lr,param_2);
}

