// sub_080117C4 at 0x080117C4 (thumb)

undefined4 sub_080117C4(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (((param_1 - 0x69000U < 0xf000) && (0x3bfff < param_2)) && (param_2 < 0x46000)) {
    DAT_0202e040._0_1_ = 1;
    sub_0800860C(param_1 + 0x2d000 >> 0xc,param_2 >> 0xc,&DAT_08320e6c);
    DAT_0202d000 = 0;
  }
  return in_lr;
}

