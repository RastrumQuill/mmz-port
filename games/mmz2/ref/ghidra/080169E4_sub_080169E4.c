// sub_080169E4 at 0x080169E4 (thumb)

longlong sub_080169E4(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar1 = (char *)(param_1 + 0x17c);
  if (*pcVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_08328eec);
      sub_08014D0C(1);
      *pcVar1 = '\x01';
      goto LAB_08016bac;
    }
    if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_083288bc);
      *pcVar1 = '\x01';
      goto LAB_08016bac;
    }
    if (DAT_0202ec32 != 2) goto LAB_08016bac;
    sub_0801B454(&DAT_0202ec40,&DAT_08328994);
  }
  else {
    if ((((*pcVar1 == '\x01') && (0x28000 < *(int *)(iVar2 + 0x58))) &&
        (0x10dfff < *(int *)(iVar2 + 0x54))) && (*(int *)(iVar2 + 0x54) < 0x11d001)) {
      DAT_030032e1 = DAT_030032e1 | 2;
      *pcVar1 = '\x02';
      goto LAB_08016bac;
    }
    pcVar1 = (char *)(param_1 + 0x17c);
    if (*pcVar1 == '\x02') {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_08328914);
      *pcVar1 = '\x03';
      goto LAB_08016bac;
    }
    if ((*pcVar1 == '\x03') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_08328964);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      *pcVar1 = '\x04';
      goto LAB_08016bac;
    }
    if (*(char *)(param_1 + 0x17c) != '\x04') {
      if (*(char *)(param_1 + 0x17c) == '\x05') {
        if ((0x184fff < *(int *)(iVar2 + 0x54)) &&
           (DAT_030032e1 = DAT_030032e1 | 2, DAT_0202ed98 != 0xffffffff)) {
          sub_08003274(DAT_0202ed98 & 0xffff);
          DAT_0202ed98 = 0xffffffff;
        }
        if (0x186fff < *(int *)(iVar2 + 0x54)) {
          DAT_030032e1 = 0;
          sub_0801B454(&DAT_0202ec40,&DAT_08328f64);
          DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
        }
      }
      goto LAB_08016bac;
    }
    DAT_030032e0 = DAT_030032e0 & 0x7f;
    DAT_030032e1 = 0;
    sub_08014D0C(2);
  }
  *(undefined *)(param_1 + 0x17c) = 5;
LAB_08016bac:
  return (ulonglong)in_lr << 0x20;
}

