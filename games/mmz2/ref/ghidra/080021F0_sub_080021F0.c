// sub_080021F0 at 0x080021F0 (thumb)

undefined8 sub_080021F0(byte param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((param_1 < 6) && (DAT_02000d40 == '\0')) &&
      (iVar1 = sub_080020F0(param_1,param_3), iVar1 != 0)) && (param_3 < 0xabb)) {
    DAT_02000d5e = 0;
    DAT_02000d40 = '\x01';
    DAT_02000d42 = 2;
    uVar2 = 0;
    DAT_02000d41 = param_1;
    DAT_02000d48 = param_2;
    DAT_02000d54 = param_3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar2);
}

