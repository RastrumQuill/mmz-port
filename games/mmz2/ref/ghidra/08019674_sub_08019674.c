// sub_08019674 at 0x08019674 (thumb)

longlong sub_08019674(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar3 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832d414);
      sub_08014D0C(1);
      *pcVar3 = '\x01';
    }
    else if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832d49c);
      *pcVar3 = '\x01';
    }
    else if (DAT_0202ec32 == 2) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832d4f4);
      *pcVar3 = '\x02';
    }
  }
  else if (cVar1 == '\x01') {
    if ((0x11bfff < *(int *)(iVar2 + 0x54)) && (DAT_0202ed98 != 0xffffffff)) {
      sub_08003274(DAT_0202ed98 & 0xffff);
      DAT_0202ed98 = 0xffffffff;
    }
    if (0x11dfff < *(int *)(iVar2 + 0x54)) {
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
  else if ((cVar1 == '\x02') && (0x12bfff < *(int *)(iVar2 + 0x54))) {
    DAT_030032e1 = 0;
    sub_0801B454(&DAT_0202ec40,&DAT_0832d54c);
    *pcVar3 = '\x03';
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x03') && ((DAT_0202ec38 & 0x20) != 0)) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_0801B454(&DAT_0202ec40,&DAT_0832d5c4);
    DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
    DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 4;
  }
  return (ulonglong)in_lr << 0x20;
}

