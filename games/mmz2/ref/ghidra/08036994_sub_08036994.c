// sub_08036994 at 0x08036994 (thumb)

undefined8 sub_08036994(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0801F358(param_2,param_1 + 0xd8,0);
  if ((iVar1 != 0) || (iVar1 = sub_0801F394(param_2,param_1 + 0xd8,0), iVar1 != 0)) {
    param_3 = param_3 | 0x400;
  }
  return CONCAT44(in_lr,param_3);
}

