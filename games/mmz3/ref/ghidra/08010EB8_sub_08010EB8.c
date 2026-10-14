// sub_08010EB8 at 0x08010EB8 (thumb)

undefined4 sub_08010EB8(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 - 0x14000U < 0x14000) {
    DAT_0202f4ac._0_1_ = 1;
    sub_08009348(param_1 >> 0xc,param_2 + 0x1e000 >> 0xc,&DAT_0833ca48);
    DAT_0202e480 = 0;
  }
  return in_lr;
}

