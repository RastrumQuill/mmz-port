// sub_08015570 at 0x08015570 (thumb)

undefined4 sub_08015570(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = &DAT_0202eec4;
  if (DAT_0202eec4 != 0) {
    do {
      iVar1 = *piVar3 * 0x100;
      if (DAT_0202f060 + *piVar3 * -0x100 < 0 != SBORROW4(DAT_0202f060,iVar1)) {
        DAT_0202f060 = iVar1;
      }
      piVar3 = piVar3 + 3;
    } while (*piVar3 != 0);
  }
  if (DAT_0202f060 >> 6 == 0) {
    param_2[1] = 0;
    *param_2 = 0;
  }
  else {
    uVar2 = (uint)DAT_0202f05e;
    DAT_0202f05e = DAT_0202f05e + 1;
    iVar1 = DAT_0202f060 * (short)(&DAT_080ef450)[(uVar2 << 0x10) >> 10 & 0xff];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *param_2 = iVar1 >> 0xc;
    uVar2 = DAT_0202eec0 * 0x343fd + 0x269ec3;
    DAT_0202eec0 = uVar2 & 0x7fffffff;
    *param_2 = (int)(*param_2 * ((uVar2 * 2 >> 0x11 & 0xff) - 0x7f)) >> 7;
    param_2[1] = iVar1 >> 8;
    uVar2 = DAT_0202eec0 * 0x343fd + 0x269ec3;
    DAT_0202eec0 = uVar2 & 0x7fffffff;
    param_2[1] = (int)((iVar1 >> 8) + -3 + (uVar2 * 2 >> 0x11 & 7)) >> 1;
  }
  DAT_0202f060 = DAT_0202f060 * 0xf >> 4;
  DAT_0202f05c = 0;
  DAT_0202eec4 = 0;
  return in_lr;
}

