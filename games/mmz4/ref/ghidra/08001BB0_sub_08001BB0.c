// sub_08001BB0 at 0x08001BB0 (thumb)

undefined8 sub_08001BB0(int param_1,short param_2,uint param_3)

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
      sVar1 = sub_08128840(param_2,param_1);
      sVar2 = sVar2 + -1;
      if (sVar2 == 0) break;
    } while (sVar1 != 0);
    if (sVar1 != 0) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 8;
    uVar3 = param_3 * 0x10000 - 0x80000;
    param_3 = uVar3 >> 0x10;
  }
  return CONCAT44(in_lr,(int)sVar1);
}

