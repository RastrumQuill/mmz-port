// sub_080EE028 at 0x080EE028 (thumb)

undefined4 sub_080EE028(uint param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  piVar2 = DAT_03007ff0;
  if (*DAT_03007ff0 == 0x68736d53) {
    *DAT_03007ff0 = 0x68736d54;
    if ((param_1 & 0xff) != 0) {
      *(byte *)((int)piVar2 + 5) = (byte)param_1 & 0x7f;
    }
    if ((param_1 & 0xf00) != 0) {
      *(char *)((int)piVar2 + 6) = (char)((param_1 & 0xf00) >> 8);
      iVar4 = 0xc;
      piVar3 = piVar2 + 0x14;
      do {
        *(undefined *)piVar3 = 0;
        iVar4 = iVar4 + -1;
        piVar3 = piVar3 + 0x10;
      } while (iVar4 != 0);
    }
    if ((param_1 & 0xf000) != 0) {
      *(char *)((int)piVar2 + 7) = (char)((param_1 & 0xf000) >> 0xc);
    }
    if ((param_1 & 0xb00000) != 0) {
      bVar1 = DAT_04000089;
      DAT_04000089 = bVar1 & 0x3f | (byte)((param_1 & 0x300000) >> 0xe);
    }
    if ((param_1 & 0xf0000) != 0) {
      sub_080EE114();
      sub_080EDF84(param_1 & 0xf0000);
    }
    *piVar2 = 0x68736d53;
  }
  return in_lr;
}

