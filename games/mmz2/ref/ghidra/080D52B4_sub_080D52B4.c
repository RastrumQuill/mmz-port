// sub_080D52B4 at 0x080D52B4 (thumb)

undefined4
sub_080D52B4(int *param_1,int *param_2,int *param_3,byte *param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,undefined4 param_11)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = sub_08038E6C(*param_2 - *param_1,param_2[1] - param_1[1]);
  iVar2 = *param_3;
  uVar3 = uVar1;
  if ((0 < iVar2) && (uVar3 = (uint)*param_4, ((uVar1 - uVar3) + 0x3f & 0xff) < 0x7f)) {
    uVar3 = sub_08038EEC(uVar1,uVar3,param_11);
  }
  *param_4 = (byte)uVar3;
  if (((uVar1 - uVar3) + 0x3f & 0xff) < 0x7f) {
    if ((0 < param_5) && (param_6 = param_5, param_7 < param_5)) {
      param_6 = param_7;
    }
  }
  else {
    param_6 = 0;
  }
  if (iVar2 == param_6) goto LAB_080d5354;
  if (iVar2 < param_6) {
    iVar2 = iVar2 + param_9;
    if (param_6 < iVar2) {
LAB_080d534e:
      iVar2 = param_6;
    }
  }
  else {
    if ((0 < param_8) && (param_8 < iVar2)) {
      param_9 = param_10;
    }
    iVar2 = iVar2 - param_9;
    if (iVar2 < param_6) goto LAB_080d534e;
  }
  *param_3 = iVar2;
LAB_080d5354:
  if (0 < iVar2) {
    *param_1 = *param_1 + ((short)(&DAT_080ef450)[uVar3 + 0x40 & 0xff] * iVar2 >> 8);
    param_1[1] = param_1[1] + ((short)(&DAT_080ef450)[uVar3 & 0xff] * iVar2 >> 8);
  }
  return in_lr;
}

