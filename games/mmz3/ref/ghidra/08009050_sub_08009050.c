// sub_08009050 at 0x08009050 (thumb)

undefined4 sub_08009050(int param_1,int param_2,int *param_3)

{
  undefined4 in_lr;
  
  *param_3 = (param_1 >> 0xc) * 0x1000 - param_1;
  param_3[1] = (param_2 >> 0xc) * 0x1000 - param_2;
  return in_lr;
}

