// sub_0801A3CC at 0x0801A3CC (thumb)

longlong sub_0801A3CC(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  pcVar4 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar4;
  if (cVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832efdc);
      sub_08014D0C(1);
      *pcVar4 = '\x01';
    }
    else if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832f05c);
      *pcVar4 = '\x01';
    }
    else if (DAT_0202ec32 == 2) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832f0b4);
      *pcVar4 = '\x03';
    }
  }
  else if (cVar1 == '\x01') {
    if (*(int *)(iVar3 + 0x58) < 0x1a001) {
      if ((0x85fff < *(int *)(iVar3 + 0x54)) && (DAT_0202ed98 != 0xffffffff)) {
        sub_08003274(DAT_0202ed98 & 0xffff);
        DAT_0202ed98 = 0xffffffff;
      }
      if ((*(int *)(iVar3 + 0x58) < 0x1a001) && (0x87fff < *(int *)(iVar3 + 0x54))) {
        DAT_030032e1 = DAT_030032e1 | 2;
        if (DAT_0202ed98 != 0xba) {
          if (DAT_0202ed98 != 0xffffffff) {
            sub_08003274(DAT_0202ed98 & 0xffff);
            DAT_0202ed98 = 0xffffffff;
          }
          sub_08003264(0xba);
          DAT_0202ed98 = 0xba;
        }
        sub_08014D0C(2);
        DAT_0202ed80 = 0x1b000;
        *(undefined *)(param_1 + 0x17c) = 2;
      }
    }
  }
  else {
    if ((cVar1 == '\x02') && (0x95fff < *(int *)(iVar3 + 0x54))) {
      puVar2 = &DAT_0832f10c;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\x03') || (*(int *)(iVar3 + 0x54) < 0x96000)) {
        if ((*(char *)(param_1 + 0x17c) == '\x04') && ((DAT_0202ec38 & 0x20) != 0)) {
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_0801B454(&DAT_0202ec40,&DAT_0832f634);
          DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
          DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 4;
        }
        goto LAB_0801a5ac;
      }
      puVar2 = &DAT_0832f544;
    }
    DAT_030032e1 = 0;
    sub_0801B454(&DAT_0202ec40,puVar2);
    *(undefined *)(param_1 + 0x17c) = 4;
  }
LAB_0801a5ac:
  return (ulonglong)in_lr << 0x20;
}

