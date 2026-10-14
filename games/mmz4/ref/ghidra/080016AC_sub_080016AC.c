// sub_080016AC at 0x080016AC (thumb)

undefined8 sub_080016AC(byte param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((param_1 < 6) && (DAT_02000790 == '\0')) && (param_3 < 0x299)) {
    DAT_020007ac = 0;
    DAT_02000790 = '\x02';
    DAT_02000792 = 1;
    uVar1 = 0;
    DAT_02000791 = param_1;
    DAT_02000798 = param_2;
    DAT_020007a4 = param_3;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

