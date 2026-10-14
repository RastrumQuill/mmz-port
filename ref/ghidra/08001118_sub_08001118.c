// sub_08001118 at 0x08001118 (thumb)

undefined8 sub_08001118(byte param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((param_1 < 6) && (DAT_02004ce0 == '\0')) &&
      (iVar1 = sub_08001018(param_1,param_3), iVar1 != 0)) && (param_3 < 0xabb)) {
    DAT_02004cfe = 0;
    DAT_02004ce0 = '\x01';
    DAT_02004ce2 = 2;
    uVar2 = 0;
    DAT_02004ce1 = param_1;
    DAT_02004ce8 = param_2;
    DAT_02004cf4 = param_3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar2);
}

