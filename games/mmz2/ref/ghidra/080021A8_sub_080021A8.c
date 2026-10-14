// sub_080021A8 at 0x080021A8 (thumb)

undefined8 sub_080021A8(byte param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((param_1 < 6) && (DAT_02000d40 == '\0')) && (param_3 < 0xabb)) {
    DAT_02000d5c = 0;
    DAT_02000d40 = '\x02';
    DAT_02000d42 = 1;
    uVar1 = 0;
    DAT_02000d41 = param_1;
    DAT_02000d48 = param_2;
    DAT_02000d54 = param_3;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

