// sub_080066DC at 0x080066DC (thumb)

undefined4 sub_080066DC(int param_1,int param_2,int *param_3)

{
  undefined4 in_lr;
  
  *param_3 = (param_1 >> 0xc) * 0x1000 - param_1;
  param_3[1] = (((param_2 >> 0xc) + 1) * 0x1000 - param_2) + -1;
  return in_lr;
}

