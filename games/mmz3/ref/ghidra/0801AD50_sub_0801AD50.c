// sub_0801AD50 at 0x0801AD50 (thumb)

undefined4 sub_0801AD50(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = &DAT_02030434;
  if (DAT_02030434 != 0) {
    do {
      iVar1 = *piVar3 * 0x100;
      if (DAT_020305d0 + *piVar3 * -0x100 < 0 != SBORROW4(DAT_020305d0,iVar1)) {
        DAT_020305d0 = iVar1;
      }
      piVar3 = piVar3 + 3;
    } while (*piVar3 != 0);
  }
  if (DAT_020305d0 >> 6 == 0) {
    param_2[1] = 0;
    *param_2 = 0;
  }
  else {
    uVar2 = (uint)DAT_020305ce;
    DAT_020305ce = DAT_020305ce + 1;
    iVar1 = DAT_020305d0 * *(short *)((int)&DAT_080fe64c + ((uVar2 << 0x1e) >> 0x17));
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *param_2 = iVar1 >> 0xc;
    uVar2 = DAT_02030430 * 0x343fd + 0x269ec3;
    DAT_02030430 = uVar2 & 0x7fffffff;
    *param_2 = (int)(*param_2 * ((uVar2 * 2 >> 0x11 & 0xff) - 0x7f)) >> 7;
    param_2[1] = iVar1 >> 8;
    uVar2 = DAT_02030430 * 0x343fd + 0x269ec3;
    DAT_02030430 = uVar2 & 0x7fffffff;
    param_2[1] = (int)((iVar1 >> 8) + -3 + (uVar2 * 2 >> 0x11 & 7)) >> 1;
  }
  DAT_020305d0 = DAT_020305d0 * 0xf >> 4;
  DAT_020305cc = 0;
  DAT_02030434 = 0;
  return in_lr;
}

