// sub_080034F4 at 0x080034F4 (thumb)

undefined8 sub_080034F4(byte param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((param_1 < 6) && (DAT_02002160 == '\0')) &&
      (iVar1 = sub_08003274(param_1,param_3), iVar1 != 0)) && (param_3 < 0xabb)) {
    DAT_0200217e = 0;
    DAT_02002160 = '\x01';
    DAT_02002162 = 2;
    uVar2 = 0;
    DAT_02002161 = param_1;
    DAT_02002168 = param_2;
    DAT_02002174 = param_3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar2);
}

