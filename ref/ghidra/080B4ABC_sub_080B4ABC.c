// sub_080B4ABC at 0x080B4ABC (thumb)

undefined8 sub_080B4ABC(undefined4 param_1,undefined param_2,uint param_3)

{
  undefined4 in_lr;
  
  param_3 = param_3 & 0xff;
  if ((DAT_02004ca8 & 0xf0) != 0) {
    if ((DAT_02004ca8 & 0xc0) == 0) {
      param_3 = sub_080B4C5C(param_1,param_2);
    }
    else {
      param_3 = sub_080B4B04(param_1);
    }
    param_3 = param_3 & 0xff;
  }
  return CONCAT44(in_lr,param_3);
}

