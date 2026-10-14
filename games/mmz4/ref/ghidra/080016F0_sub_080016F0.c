// sub_080016F0 at 0x080016F0 (thumb)

undefined8 sub_080016F0(byte param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((param_1 < 6) && (DAT_02000790 == '\0')) &&
      (iVar1 = sub_08001594(param_1,param_3), iVar1 != 0)) && (param_3 < 0x299)) {
    DAT_020007ae = 0;
    DAT_02000790 = '\x01';
    DAT_02000792 = 2;
    uVar2 = 0;
    DAT_02000791 = param_1;
    DAT_02000798 = param_2;
    DAT_020007a4 = param_3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar2);
}

