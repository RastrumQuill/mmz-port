// sub_0800AAC8 at 0x0800AAC8 (thumb)

undefined8 sub_0800AAC8(int param_1,uint param_2)

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

