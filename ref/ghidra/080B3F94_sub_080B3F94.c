// sub_080B3F94 at 0x080B3F94 (thumb)

undefined4
sub_080B3F94(int *param_1,int *param_2,int *param_3,undefined *param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,undefined4 param_11)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((0 < param_5) && (param_6 = param_5, param_7 < param_5)) {
    param_6 = param_7;
  }
  iVar3 = *param_3;
  if (iVar3 == param_6) goto LAB_080b3fe0;
  if (iVar3 < param_6) {
    iVar3 = iVar3 + param_9;
    if (param_6 < iVar3) {
LAB_080b3fdc:
      iVar3 = param_6;
    }
  }
  else {
    if ((0 < param_8) && (param_8 < iVar3)) {
      param_9 = param_10;
    }
    iVar3 = iVar3 - param_9;
    if (iVar3 < param_6) goto LAB_080b3fdc;
  }
  *param_3 = iVar3;
LAB_080b3fe0:
  uVar1 = sub_08025930(*param_2 - *param_1,param_2[1] - param_1[1]);
  iVar2 = sub_080259D8(uVar1,*param_4,param_11);
  *param_4 = (char)iVar2;
  if (0 < iVar3) {
    *param_1 = *param_1 + ((short)(&DAT_080c8e24)[iVar2 + 0x40] * iVar3 >> 8);
    param_1[1] = param_1[1] + ((short)(&DAT_080c8e24)[iVar2] * iVar3 >> 8);
  }
  return in_lr;
}

