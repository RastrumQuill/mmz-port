// sub_080E2EAC at 0x080E2EAC (thumb)

undefined4
sub_080E2EAC(int *param_1,int *param_2,int *param_3,byte *param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,undefined4 param_11)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = sub_080E90EC(*param_2 - *param_1,param_2[1] - param_1[1]);
  iVar3 = *param_3;
  uVar2 = uVar1;
  if ((0 < iVar3) && (uVar2 = (uint)*param_4, ((uVar1 - uVar2) + 0x3f & 0xff) < 0x7f)) {
    uVar2 = sub_080E916C(uVar1,uVar2,param_11);
  }
  *param_4 = (byte)uVar2;
  if (((uVar1 - uVar2) + 0x3f & 0xff) < 0x7f) {
    if ((0 < param_5) && (param_6 = param_5, param_7 < param_5)) {
      param_6 = param_7;
    }
  }
  else {
    param_6 = 0;
  }
  if (iVar3 == param_6) goto LAB_080e2f46;
  if (iVar3 < param_6) {
    iVar3 = iVar3 + param_9;
    if (param_6 < iVar3) {
LAB_080e2f40:
      iVar3 = param_6;
    }
  }
  else {
    if ((0 < param_8) && (param_8 < iVar3)) {
      param_9 = param_10;
    }
    iVar3 = iVar3 - param_9;
    if (iVar3 < param_6) goto LAB_080e2f40;
  }
  *param_3 = iVar3;
LAB_080e2f46:
  if (0 < iVar3) {
    *param_1 = *param_1 +
               (*(short *)((int)&DAT_080fe64c + ((uVar2 + 0x40) * 0x1000000 >> 0x17)) * iVar3 >> 8);
    param_1[1] = param_1[1] +
                 (*(short *)((int)&DAT_080fe64c + ((uVar2 << 0x18) >> 0x17)) * iVar3 >> 8);
  }
  return in_lr;
}

