// sub_080C4C24 at 0x080C4C24 (thumb)

undefined4 sub_080C4C24(undefined4 param_1,uint param_2)

{
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  if (param_2 - 1 < 0x4e) {
    sub_080B51BC(param_2);
    sub_080B51F8(param_1,param_2);
  }
  return in_lr;
}

