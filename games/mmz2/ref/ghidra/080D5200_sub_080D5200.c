// sub_080D5200 at 0x080D5200 (thumb)

undefined4
sub_080D5200(int *param_1,int *param_2,int *param_3,byte *param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,undefined4 param_11)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((0 < param_5) && (param_6 = param_5, param_7 < param_5)) {
    param_6 = param_7;
  }
  iVar3 = *param_3;
  if (iVar3 == param_6) goto LAB_080d524c;
  if (iVar3 < param_6) {
    iVar3 = iVar3 + param_9;
    if (param_6 < iVar3) {
LAB_080d5248:
      iVar3 = param_6;
    }
  }
  else {
    if ((0 < param_8) && (param_8 < iVar3)) {
      param_9 = param_10;
    }
    iVar3 = iVar3 - param_9;
    if (iVar3 < param_6) goto LAB_080d5248;
  }
  *param_3 = iVar3;
LAB_080d524c:
  uVar2 = sub_08038E6C(*param_2 - *param_1,param_2[1] - param_1[1]);
  bVar1 = sub_08038EEC(uVar2,*param_4,param_11);
  *param_4 = bVar1;
  if (0 < iVar3) {
    *param_1 = *param_1 + ((short)(&DAT_080ef450)[(byte)(bVar1 + 0x40)] * iVar3 >> 8);
    param_1[1] = param_1[1] + ((short)(&DAT_080ef450)[bVar1] * iVar3 >> 8);
  }
  return in_lr;
}

