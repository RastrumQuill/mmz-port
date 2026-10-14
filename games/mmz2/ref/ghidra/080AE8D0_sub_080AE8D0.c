// sub_080AE8D0 at 0x080AE8D0 (thumb)

undefined4 sub_080AE8D0(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (param_3 == '\0') {
    iVar1 = -0x2000;
  }
  else {
    iVar1 = 0x2000;
  }
  param_1 = param_1 + iVar1;
  local_18 = sub_080093C4(param_1,param_2);
  param_2 = local_18 - param_2;
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  if (param_2 < 0xf01) {
    local_1c = param_1 + 0x1400;
    sub_080AD578(&local_1c,0,0x1100);
    local_1c = param_1 + -0x1400;
    sub_080AD578(&local_1c,1,0x1100);
    local_1c = param_1;
    sub_080AD5D8(&local_1c,param_3,2);
    sub_080AD5D8(&local_1c,param_3,2);
    sub_080AD5D8(&local_1c,param_3,3);
    sub_080AD5D8(&local_1c,param_3,3);
  }
  return in_lr;
}

