// sub_080D185C at 0x080D185C (thumb)

undefined4 sub_080D185C(int *param_1,char param_2)

{
  int iVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (param_2 == '\0') {
    local_10 = *param_1;
    iVar1 = -0x2200;
  }
  else {
    local_10 = *param_1;
    iVar1 = 0x2200;
  }
  local_10 = local_10 + iVar1;
  local_c = param_1[1];
  sub_080D17D8(&local_10,3,0);
  sub_080D17D8(&local_10,3,1);
  sub_080D17D8(&local_10,4,param_2);
  sub_080D17D8(&local_10,4,param_2);
  sub_080D17D8(&local_10,5,param_2);
  sub_080D17D8(&local_10,5,param_2);
  return in_lr;
}

