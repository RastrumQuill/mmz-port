// sub_08032F48 at 0x08032F48 (thumb)

ulonglong sub_08032F48(undefined4 param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar3 = (int)(param_5 + 0x4000U) >> 8;
  iVar5 = param_4 * (short)(&DAT_080ef450)[uVar3 + 0x40 & 0xff] >> 8;
  *param_2 = iVar5;
  iVar6 = param_4 * (short)(&DAT_080ef450)[uVar3 & 0xff] >> 8;
  param_2[1] = iVar6;
  uVar4 = param_5 + 0x4000U & 0xff;
  if (uVar4 != 0) {
    uVar2 = uVar3 + 1 & 0xff;
    iVar1 = uVar4 * ((param_4 * (short)(&DAT_080ef450)[uVar2 + 0x40 & 0xff] >> 8) - iVar5);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *param_2 = iVar5 + (iVar1 >> 8);
    iVar5 = uVar4 * ((param_4 * (short)(&DAT_080ef450)[uVar2] >> 8) - iVar6);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    param_2[1] = iVar6 + (iVar5 >> 8);
  }
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_2[1] + param_3[1];
  return CONCAT44(in_lr,uVar3 + 0x80) & 0xffffffff000000ff;
}

