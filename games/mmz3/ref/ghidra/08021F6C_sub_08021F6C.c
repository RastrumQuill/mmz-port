// sub_08021F6C at 0x08021F6C (thumb)

undefined4 sub_08021F6C(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  iVar1 = (&DAT_020301c0)[param_1 * 4];
  if (iVar1 != 0) {
    if ((DAT_020301a0 != 0) && (param_1 == 0)) {
      DAT_02030bf8 = param_1;
      sub_08025BDC(DAT_0203734c);
      sub_080324DC(DAT_0203734c,&DAT_02037300);
    }
    if (param_1 == 1) {
      DAT_02030bfc = 0;
    }
    sub_080186C4(iVar1);
    (&DAT_020301c0)[param_1 * 4] = 0;
  }
  return in_lr;
}

