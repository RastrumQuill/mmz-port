// sub_0800E45C at 0x0800E45C (thumb)

undefined4 sub_0800E45C(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_0202e480;
  if (param_2 < 0x50000) {
    sub_08009348(param_1 >> 0xc,param_2 + 0x64000 >> 0xc,&DAT_0833a7b2);
    DAT_0202f4ac._0_1_ = 1;
  }
  DAT_0202e480 = uVar1;
  return in_lr;
}

