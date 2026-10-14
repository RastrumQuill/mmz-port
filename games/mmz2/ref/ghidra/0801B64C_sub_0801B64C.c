// sub_0801B64C at 0x0801B64C (thumb)

undefined4 sub_0801B64C(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  iVar1 = *(int *)(&DAT_0202ec50 + param_1 * 0x10);
  if (iVar1 != 0) {
    if ((DAT_0202ec30 != 0) && (param_1 == 0)) {
      DAT_0202f648 = param_1;
      sub_08038958(DAT_02036e98);
      sub_0801E79C(DAT_02036e98,&DAT_02036c04);
    }
    if (param_1 == 1) {
      DAT_0202f64c = 0;
    }
    sub_080134C0(iVar1);
    *(int *)(&DAT_0202ec50 + param_1 * 0x10) = 0;
  }
  return in_lr;
}

