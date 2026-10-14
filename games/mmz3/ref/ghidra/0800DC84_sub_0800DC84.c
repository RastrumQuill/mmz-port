// sub_0800DC84 at 0x0800DC84 (thumb)

undefined8 sub_0800DC84(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (((param_1 - 0x69000U < 0x1e000) && (param_2 - 0x28000U < 0x14000)) &&
     ((&DAT_02002c60)[(param_2 >> 0xc) * (uint)DAT_02002c60 + (param_1 >> 0xc) + 2] !=
      (&DAT_02002c60)
      [(uint)DAT_02002c60 * ((int)(param_2 - 0x28000U) >> 0xc) + (param_1 >> 0xc) + 2])) {
    local_1c = param_1;
    local_18 = param_2;
    if (param_1 < 0x78000) {
      sub_080093E8(7,4,0x36);
    }
    else {
      sub_080093E8(8,4,0x37);
    }
    sub_0801ACF8(8,&local_1c);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

