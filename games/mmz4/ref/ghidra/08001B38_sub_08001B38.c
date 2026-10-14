// sub_08001B38 at 0x08001B38 (thumb)

undefined8 sub_08001B38(short param_1,int param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = param_3 * 0x10000;
  sVar1 = 1;
  param_3 = param_3 & 0xffff;
  while (0 < (int)uVar3) {
    sVar2 = 3;
    do {
      sVar1 = sub_081285C4(param_1,&DAT_02000018);
      sVar2 = sVar2 + -1;
      if (sVar2 == 0) break;
    } while (sVar1 != 0);
    if (sVar1 != 0) break;
    sub_08000B30(&DAT_02000018,param_2,8);
    param_1 = param_1 + 1;
    param_2 = param_2 + 8;
    uVar3 = param_3 * 0x10000 - 0x80000;
    param_3 = uVar3 >> 0x10;
  }
  return CONCAT44(in_lr,(int)sVar1);
}

