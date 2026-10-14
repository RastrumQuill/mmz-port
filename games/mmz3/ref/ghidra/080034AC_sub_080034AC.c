// sub_080034AC at 0x080034AC (thumb)

undefined8 sub_080034AC(byte param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((param_1 < 6) && (DAT_02002160 == '\0')) && (param_3 < 0xabb)) {
    DAT_0200217c = 0;
    DAT_02002160 = '\x02';
    DAT_02002162 = 1;
    uVar1 = 0;
    DAT_02002161 = param_1;
    DAT_02002168 = param_2;
    DAT_02002174 = param_3;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

