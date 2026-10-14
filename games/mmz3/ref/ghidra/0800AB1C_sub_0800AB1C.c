// sub_0800AB1C at 0x0800AB1C (thumb)

undefined8 sub_0800AB1C(int param_1,uint param_2)

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

