// sub_0800E9AC at 0x0800E9AC (thumb)

undefined4 sub_0800E9AC(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 - 0x14000U < 0x1e000) {
    DAT_0202e028._0_1_ = 1;
    sub_0800860C(param_1 >> 0xc,param_2 + 0x32000 >> 0xc,&DAT_0831ab20);
    DAT_0202d000 = 0;
  }
  return in_lr;
}

