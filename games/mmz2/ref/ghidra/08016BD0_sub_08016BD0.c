// sub_08016BD0 at 0x08016BD0 (thumb)

longlong sub_08016BD0(int param_1)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  pcVar2 = (char *)(param_1 + 0x17c);
  if (*pcVar2 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    *(undefined2 *)(param_1 + 0x16e) = 0x501;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_083290fc);
      sub_08014D0C(1);
      *pcVar2 = '\x01';
      goto LAB_08016e6c;
    }
    if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832918c);
      *pcVar2 = '\x01';
      goto LAB_08016e6c;
    }
    if (DAT_0202ec32 == 2) {
      puVar1 = &DAT_083292dc;
    }
    else {
      if (DAT_0202ec32 != 3) goto LAB_08016e6c;
      puVar1 = &DAT_08329334;
    }
    sub_0801B454(&DAT_0202ec40,puVar1);
  }
  else {
    if ((*pcVar2 == '\x01') && (0x185fff < *(int *)(iVar3 + 0x54))) {
      DAT_030032e1 = DAT_030032e1 | 2;
      *pcVar2 = '\x02';
      goto LAB_08016e6c;
    }
    pcVar2 = (char *)(param_1 + 0x17c);
    if (*pcVar2 == '\x02') {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_083291e4);
      *pcVar2 = '\x03';
      goto LAB_08016e6c;
    }
    if ((*pcVar2 == '\x03') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_08329274);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      *pcVar2 = '\x04';
      goto LAB_08016e6c;
    }
    if (*(char *)(param_1 + 0x17c) != '\x04') {
      if ((*(char *)(param_1 + 0x17c) == '\x05') && (*(int *)(iVar3 + 0x58) < 0x1e000)) {
        if ((0x238fff < *(int *)(iVar3 + 0x54)) && (DAT_0202ed98 != 0xffffffff)) {
          sub_08003274(DAT_0202ed98 & 0xffff);
          DAT_0202ed98 = 0xffffffff;
        }
        if (0x23afff < *(int *)(iVar3 + 0x54)) {
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
      }
      else if ((*(char *)(param_1 + 0x17c) == '\x06') && (0x248fff < *(int *)(iVar3 + 0x54))) {
        DAT_030032e1 = 0;
        sub_0801B454(&DAT_0202ec40,&DAT_08329394);
        *(char *)(param_1 + 0x17c) = '\a';
      }
      else if ((*(char *)(param_1 + 0x17c) == '\a') && ((DAT_0202ec38 & 0x20) != 0)) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_0801B454(&DAT_0202ec40,&DAT_0832945c);
        DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
        DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 4;
        *(char *)(param_1 + 0x17c) = '\b';
      }
      goto LAB_08016e6c;
    }
    sub_08014D0C(2);
    DAT_030032e0 = DAT_030032e0 & 0x7f;
    DAT_030032e1 = 0;
  }
  *(undefined *)(param_1 + 0x17c) = 5;
LAB_08016e6c:
  return (ulonglong)in_lr << 0x20;
}

