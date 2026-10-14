// sub_080B4040 at 0x080B4040 (thumb)

undefined4
sub_080B4040(int *param_1,int *param_2,int *param_3,byte *param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,undefined4 param_11)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar1 = sub_08025930(*param_2 - *param_1,param_2[1] - param_1[1]);
  iVar6 = *param_3;
  uVar5 = uVar1;
  if (0 < iVar6) {
    uVar5 = (uint)*param_4;
    iVar3 = (uVar1 - uVar5) + 0x3f;
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = (uVar1 - uVar5) + 0x13e;
    }
    iVar3 = iVar3 + (iVar2 >> 8) * -0x100;
    iVar4 = iVar3 + 0x100;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = iVar3 + 0x1ff;
    }
    if (iVar4 + (iVar2 >> 8) * -0x100 < 0x7f) {
      uVar5 = sub_080259D8(uVar1,uVar5,param_11);
    }
  }
  *param_4 = (byte)uVar5;
  iVar3 = (uVar1 - uVar5) + 0x3f;
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = (uVar1 - uVar5) + 0x13e;
  }
  iVar3 = iVar3 + (iVar2 >> 8) * -0x100;
  iVar4 = iVar3 + 0x100;
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = iVar3 + 0x1ff;
  }
  if (iVar4 + (iVar2 >> 8) * -0x100 < 0x7f) {
    if ((0 < param_5) && (param_6 = param_5, param_7 < param_5)) {
      param_6 = param_7;
    }
  }
  else {
    param_6 = 0;
  }
  if (iVar6 == param_6) goto LAB_080b412e;
  if (iVar6 < param_6) {
    iVar6 = iVar6 + param_9;
    if (param_6 < iVar6) {
LAB_080b4128:
      iVar6 = param_6;
    }
  }
  else {
    if ((0 < param_8) && (param_8 < iVar6)) {
      param_9 = param_10;
    }
    iVar6 = iVar6 - param_9;
    if (iVar6 < param_6) goto LAB_080b4128;
  }
  *param_3 = iVar6;
LAB_080b412e:
  if (0 < iVar6) {
    *param_1 = *param_1 + ((short)(&DAT_080c8e24)[uVar5 + 0x40] * iVar6 >> 8);
    param_1[1] = param_1[1] + ((short)(&DAT_080c8e24)[uVar5] * iVar6 >> 8);
  }
  return in_lr;
}

