// sub_080BCF18 at 0x080BCF18 (thumb)

undefined4 sub_080BCF18(undefined4 param_1,int param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = (int)param_3;
  sub_08005440(param_1,4,param_2,0xc4,iVar3);
  uVar2 = 0;
  if (0 < iVar3) {
    do {
      *(char *)((short)uVar2 * 0xc4 + param_2 + 0x1c) = DAT_0202dbfc + (char)uVar2;
      uVar1 = (int)(short)uVar2 + 1;
      uVar2 = uVar1 & 0xffff;
    } while ((int)(uVar1 * 0x10000) >> 0x10 < iVar3);
  }
  DAT_0202dbfc = DAT_0202dbfc + (char)param_3;
  DAT_0202ed94 = param_1;
  return in_lr;
}

