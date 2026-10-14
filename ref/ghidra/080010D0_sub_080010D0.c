// sub_080010D0 at 0x080010D0 (thumb)

undefined8 sub_080010D0(byte param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((param_1 < 6) && (DAT_02004ce0 == '\0')) && (param_3 < 0xabb)) {
    DAT_02004cfc = 0;
    DAT_02004ce0 = '\x02';
    DAT_02004ce2 = 1;
    uVar1 = 0;
    DAT_02004ce1 = param_1;
    DAT_02004ce8 = param_2;
    DAT_02004cf4 = param_3;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

