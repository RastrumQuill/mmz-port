// sub_0800BB78 at 0x0800BB78 (thumb)

undefined4 sub_0800BB78(uint param_1,int param_2)

{
  undefined4 in_lr;
  
  if (((param_1 < 0xf0000) && (0x27fff < param_2)) && (param_2 < 0x3c000)) {
    DAT_0202e028._0_1_ = 1;
    sub_0800860C((int)param_1 >> 0xc,param_2 + -0x28000 >> 0xc,&DAT_08315cc4);
    DAT_0202d000 = 0;
  }
  return in_lr;
}

