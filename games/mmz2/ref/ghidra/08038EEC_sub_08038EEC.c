// sub_08038EEC at 0x08038EEC (thumb)

undefined8 sub_08038EEC(uint param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((uint)(param_3 * 2) < ((param_1 - param_2) + param_3 & 0xff)) {
    iVar1 = -1;
    if ((param_1 - param_2 & 0xff) < 0x80) {
      iVar1 = 1;
    }
    param_1 = param_2 + param_3 * iVar1 & 0xff;
  }
  return CONCAT44(in_lr,param_1);
}

