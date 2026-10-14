// sub_080198EC at 0x080198EC (thumb)

longlong sub_080198EC(int param_1)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  uint in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar3 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832d8c8);
      sub_08014D0C(1);
    }
    else {
      if (DAT_0202ec32 == 1) {
        puVar2 = &DAT_0832d948;
      }
      else {
        if (DAT_0202ec32 != 2) goto LAB_08019c4c;
        puVar2 = &DAT_0832d9a0;
      }
      sub_0801B454(&DAT_0202ec40,puVar2);
    }
    *pcVar3 = '\x01';
  }
  else if (cVar1 == '\x01') {
    if ((0x157fff < *(int *)(iVar4 + 0x54)) && (DAT_0202ed98 != 0xffffffff)) {
      sub_08003274(DAT_0202ed98 & 0xffff);
      DAT_0202ed98 = 0xffffffff;
    }
    if (0x159fff < *(int *)(iVar4 + 0x54)) {
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
      *(undefined *)(param_1 + 0x17c) = 2;
    }
  }
  else if ((cVar1 == '\x02') && (0x167fff < *(int *)(iVar4 + 0x54))) {
    DAT_030032e1 = 0;
    sub_0801B454(&DAT_0202ec40,&DAT_0832d9f8);
    *pcVar3 = '\x03';
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x03') && ((DAT_0202ec38 & 0x20) != 0)) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_0801B454(&DAT_0202ec40,&DAT_0832da68);
    DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
    DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
    *(char *)(param_1 + 0x17c) = '\x04';
  }
  else {
    pcVar3 = (char *)(param_1 + 0x17c);
    if (*pcVar3 == '\x04') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      *pcVar3 = '\x05';
    }
    else if ((*pcVar3 == '\x05') && (0x176fff < *(int *)(iVar4 + 0x54))) {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_0832dac8);
      *pcVar3 = '\x06';
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x06') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_0832db30);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      *(char *)(param_1 + 0x17c) = '\a';
    }
    else {
      pcVar3 = (char *)(param_1 + 0x17c);
      if (*pcVar3 == '\a') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        *pcVar3 = '\b';
      }
      else if ((*pcVar3 == '\b') && (0x185fff < *(int *)(iVar4 + 0x54))) {
        DAT_030032e1 = 0;
        sub_0801B454(&DAT_0202ec40,&DAT_0832db90);
        *pcVar3 = '\t';
      }
      else if ((*(char *)(param_1 + 0x17c) == '\t') && ((DAT_0202ec38 & 0x20) != 0)) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_0801B454(&DAT_0202ec40,&DAT_0832dc38);
        DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
        DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 5;
        *(char *)(param_1 + 0x17c) = '\n';
      }
      else {
        cVar1 = *(char *)(param_1 + 0x17c);
        if (cVar1 == '\n') {
          DAT_030032e0 = DAT_030032e0 & 0x7f;
          DAT_030032e1 = 0;
          *(char *)(param_1 + 0x17c) = '\v';
        }
        else if ((cVar1 == '\v') && (0x1b2fff < *(int *)(iVar4 + 0x54))) {
          sub_0801B454(&DAT_0202ec40,&DAT_0832dd10);
          DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
        }
      }
    }
  }
LAB_08019c4c:
  return (ulonglong)in_lr << 0x20;
}

