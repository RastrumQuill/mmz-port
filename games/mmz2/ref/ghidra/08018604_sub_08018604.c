// sub_08018604 at 0x08018604 (thumb)

longlong sub_08018604(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  uint in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  pcVar4 = (char *)(param_1 + 0x17c);
  if (*pcVar4 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832b63c);
      sub_08014D0C(1);
      *pcVar4 = '\x01';
      goto LAB_08018974;
    }
    if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832b7d4);
      *pcVar4 = '\x01';
      goto LAB_08018974;
    }
    if (DAT_0202ec32 == 2) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832b8a4);
LAB_080187c8:
      uVar2 = 5;
    }
    else {
      if (DAT_0202ec32 != 3) goto LAB_08018974;
      sub_0801B454(&DAT_0202ec40,&DAT_0832b8fc);
      uVar2 = 7;
    }
  }
  else if ((*pcVar4 == '\x01') && (0x12bfff < *(int *)(iVar5 + 0x54))) {
    DAT_030032e1 = DAT_030032e1 | 2;
    uVar2 = 2;
  }
  else {
    pcVar4 = (char *)(param_1 + 0x17c);
    if (*pcVar4 == '\x02') {
      DAT_030032e1 = 0;
      DAT_0202d00c = 0x12c000;
      DAT_0202d014 = 0x135e00;
      sub_0801B454(&DAT_0202ec40,&DAT_0832b82c);
      *pcVar4 = '\x03';
      goto LAB_08018974;
    }
    if ((*pcVar4 == '\x03') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_0202d00c = 0;
      DAT_0202d010 = 0;
      DAT_0202d014 = 0x3c0000;
      DAT_0202d018 = 0x280000;
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_0832b87c);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      *pcVar4 = '\x04';
      goto LAB_08018974;
    }
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x04') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      sub_08014D0C(2);
      goto LAB_080187c8;
    }
    if (cVar1 == '\x05') {
      if ((0x1edfff < *(int *)(iVar5 + 0x54)) && (DAT_0202ed98 != 0xffffffff)) {
        sub_08003274(DAT_0202ed98 & 0xffff);
        DAT_0202ed98 = 0xffffffff;
      }
      if (0x1effff < *(int *)(iVar5 + 0x54)) {
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
      goto LAB_08018974;
    }
    if ((cVar1 == '\x06') && (0x1fdfff < *(int *)(iVar5 + 0x54))) {
      puVar3 = &DAT_0832b954;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\a') || (*(int *)(iVar5 + 0x54) < 0x1fe000)) {
        if ((*(char *)(param_1 + 0x17c) == '\b') && ((DAT_0202ec38 & 0x20) != 0)) {
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_0801B454(&DAT_0202ec40,&DAT_0832bb5c);
          DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
          DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 5;
          *(char *)(param_1 + 0x17c) = '\t';
        }
        else {
          cVar1 = *(char *)(param_1 + 0x17c);
          if (cVar1 == '\t') {
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_030032e1 = 0;
            *(char *)(param_1 + 0x17c) = '\n';
          }
          else if ((cVar1 == '\n') && (0x20cfff < *(int *)(iVar5 + 0x54))) {
            sub_0801B454(&DAT_0202ec40,&DAT_0832bc34);
            DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
          }
        }
        goto LAB_08018974;
      }
      puVar3 = &DAT_0832bad4;
    }
    DAT_030032e1 = 0;
    sub_0801B454(&DAT_0202ec40,puVar3);
    uVar2 = 8;
  }
  *(undefined *)(param_1 + 0x17c) = uVar2;
LAB_08018974:
  return (ulonglong)in_lr << 0x20;
}

