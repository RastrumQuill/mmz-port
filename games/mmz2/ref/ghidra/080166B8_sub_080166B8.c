// sub_080166B8 at 0x080166B8 (thumb)

longlong sub_080166B8(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  pcVar4 = (char *)(param_1 + 0x17c);
  if (*pcVar4 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_083287b4);
      sub_08014D0C(1);
      *pcVar4 = '\x01';
      goto LAB_080169c8;
    }
    if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_083288bc);
      *pcVar4 = '\x01';
      goto LAB_080169c8;
    }
    if (DAT_0202ec32 == 2) {
      sub_0801B454(&DAT_0202ec40,&DAT_08328994);
LAB_08016834:
      cVar1 = '\x05';
    }
    else {
      if (DAT_0202ec32 != 3) goto LAB_080169c8;
      sub_0801B454(&DAT_0202ec40,&DAT_083289ec);
      cVar1 = '\b';
    }
  }
  else if ((((*pcVar4 == '\x01') && (0x28000 < *(int *)(iVar3 + 0x58))) &&
           (0x10dfff < *(int *)(iVar3 + 0x54))) && (*(int *)(iVar3 + 0x54) < 0x11d001)) {
    DAT_030032e1 = DAT_030032e1 | 2;
    cVar1 = '\x02';
  }
  else {
    pcVar4 = (char *)(param_1 + 0x17c);
    if (*pcVar4 == '\x02') {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_08328914);
      *pcVar4 = '\x03';
      goto LAB_080169c8;
    }
    if ((*pcVar4 == '\x03') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_08328964);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      *pcVar4 = '\x04';
      goto LAB_080169c8;
    }
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x04') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      sub_08014D0C(2);
      goto LAB_08016834;
    }
    if (cVar1 == '\x05') {
      if ((0x184fff < *(int *)(iVar3 + 0x54)) && (DAT_0202ed98 != 0xffffffff)) {
        sub_08003274(DAT_0202ed98 & 0xffff);
        DAT_0202ed98 = 0xffffffff;
      }
      if (0x186fff < *(int *)(iVar3 + 0x54)) {
        DAT_030032e1 = DAT_030032e1 | 2;
        if (DAT_0202ed98 != 0xba) {
          if (DAT_0202ed98 != 0xffffffff) {
            sub_08003274(DAT_0202ed98 & 0xffff);
            DAT_0202ed98 = 0xffffffff;
          }
          sub_08003264(0xba);
          DAT_0202ed98 = 0xba;
        }
        sub_08014D0C(3);
        *(undefined *)(param_1 + 0x17c) = 6;
      }
      goto LAB_080169c8;
    }
    if (((cVar1 == '\x06') || (cVar1 == '\b')) && (0x192fff < *(int *)(iVar3 + 0x54))) {
      sub_0801B51C(3,&DAT_083262b8);
      sub_08014FBC(&DAT_0202ed18,6);
      DAT_0202ed74 = 0;
      DAT_0202ed78 = 0x3c0000;
      DAT_0202ed7c = 0;
      DAT_0202ed80 = 0x1e000;
      cVar1 = *(char *)(param_1 + 0x17c) + '\x01';
    }
    else {
      if ((*(char *)(param_1 + 0x17c) == '\a') && (0x194fff < *(int *)(iVar3 + 0x54))) {
        puVar2 = &DAT_08328a44;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\t') || (*(int *)(iVar3 + 0x54) < 0x195000)) {
          if ((*(char *)(param_1 + 0x17c) == '\n') && ((DAT_0202ec38 & 0x20) != 0)) {
            DAT_030032e0 = DAT_030032e0 | 0x80;
            DAT_030032e1 = DAT_030032e1 | 2;
            sub_0801B454(&DAT_0202ec40,&DAT_08328d2c);
            DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
            DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 4;
          }
          goto LAB_080169c8;
        }
        puVar2 = &DAT_08328c14;
      }
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,puVar2);
      cVar1 = '\n';
    }
  }
  *(char *)(param_1 + 0x17c) = cVar1;
LAB_080169c8:
  return (ulonglong)in_lr << 0x20;
}

