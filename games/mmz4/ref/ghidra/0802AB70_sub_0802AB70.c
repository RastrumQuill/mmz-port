// sub_0802AB70 at 0x0802AB70 (thumb)

undefined8 sub_0802AB70(undefined4 param_1,char param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  if ((param_2 == -1) || (0x1f < (uVar1 * 2 >> 0x11 & 0xff))) {
    uVar1 = sub_0802AAD4(param_1,param_3);
    uVar1 = uVar1 & 0xff;
  }
  else {
    sub_081082C0(param_2,param_3,0);
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

