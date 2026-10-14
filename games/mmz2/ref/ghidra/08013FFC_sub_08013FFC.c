// sub_08013FFC at 0x08013FFC (thumb)

undefined4 sub_08013FFC(ushort param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  DAT_0202ebb0 = param_1;
  sub_080EEF68(param_2,&DAT_0202ebb4,8);
  sub_080EEF6C(param_2 + 0x20,&DAT_0202ebd4,&DAT_04000006);
  if ((param_1 == 1) && ((DAT_0202ebb4 & 0x10) == 0)) {
    DAT_0202ebb4 = DAT_0202ebb4 | 2;
  }
  else {
    DAT_0202ebb4 = DAT_0202ebb4 & 0xfd;
  }
  if (((DAT_0202ebbd & 0x10) == 0) ||
     (((1 < (param_1 - 2 & 0xff) && (param_1 != 5)) && (param_1 != 6)))) {
    DAT_0202ebbd = DAT_0202ebbd & 0xdf;
  }
  else {
    DAT_0202ebbd = DAT_0202ebbd | 0x20;
  }
  DAT_0202ebbb = DAT_0202ebbb & 0xc0;
  if (param_1 != 0x11) {
    DAT_0202ebc1 = 0;
    DAT_0202ebc0 = 0;
  }
  if ((DAT_0202ebb4 & 0x10) != 0) {
    uVar2 = 0xd;
    do {
      (&DAT_0202ebc0)[(short)uVar2] = 0;
      uVar1 = (int)(short)uVar2 + 1;
      uVar2 = uVar1 & 0xffff;
    } while ((int)(uVar1 * 0x10000) >> 0x10 < 0x2c);
  }
  return in_lr;
}

