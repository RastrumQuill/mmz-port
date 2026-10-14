// sub_080D18C8 at 0x080D18C8 (thumb)

undefined4 sub_080D18C8(int *param_1,char param_2)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (param_2 == '\0') {
    local_10 = *param_1;
    iVar2 = -0x1000;
  }
  else {
    local_10 = *param_1;
    iVar2 = 0x1000;
  }
  local_10 = local_10 + iVar2;
  local_c = param_1[1] + 0x300;
  sVar1 = sub_08007C7C(local_10);
  if (sVar1 != 0) {
    sub_080D17D8(&local_10,7,param_2);
  }
  return in_lr;
}

