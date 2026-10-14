// sub_0801898C at 0x0801898C (thumb)

longlong sub_0801898C(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar1 = (char *)(param_1 + 0x17c);
  if (*pcVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832be1c);
      sub_08014D0C(1);
      *pcVar1 = '\x01';
      goto LAB_08018b9c;
    }
    if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832b7d4);
      *pcVar1 = '\x01';
      goto LAB_08018b9c;
    }
    if (DAT_0202ec32 != 2) goto LAB_08018b9c;
    sub_0801B454(&DAT_0202ec40,&DAT_0832b8a4);
  }
  else {
    if ((*pcVar1 == '\x01') && (0x12bfff < *(int *)(iVar2 + 0x54))) {
      DAT_030032e1 = DAT_030032e1 | 2;
      *pcVar1 = '\x02';
      goto LAB_08018b9c;
    }
    pcVar1 = (char *)(param_1 + 0x17c);
    if (*pcVar1 == '\x02') {
      DAT_030032e1 = 0;
      DAT_0202d00c = 0x12c000;
      DAT_0202d014 = 0x135e00;
      sub_0801B454(&DAT_0202ec40,&DAT_0832b82c);
      *pcVar1 = '\x03';
      goto LAB_08018b9c;
    }
    if ((*pcVar1 == '\x03') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_0202d00c = 0;
      DAT_0202d010 = 0;
      DAT_0202d014 = 0x3c0000;
      DAT_0202d018 = 0x280000;
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_0832b87c);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      *pcVar1 = '\x04';
      goto LAB_08018b9c;
    }
    if (*(char *)(param_1 + 0x17c) != '\x04') {
      if (*(char *)(param_1 + 0x17c) == '\x05') {
        if ((0x1edfff < *(int *)(iVar2 + 0x54)) &&
           (DAT_030032e1 = DAT_030032e1 | 2, DAT_0202ed98 != 0xffffffff)) {
          sub_08003274(DAT_0202ed98 & 0xffff);
          DAT_0202ed98 = 0xffffffff;
        }
        if (0x1effff < *(int *)(iVar2 + 0x54)) {
          DAT_030032e1 = 0;
          sub_0801B454(&DAT_0202ec40,&DAT_0832be94);
          DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
        }
      }
      goto LAB_08018b9c;
    }
    DAT_030032e0 = DAT_030032e0 & 0x7f;
    DAT_030032e1 = 0;
    sub_08014D0C(2);
  }
  *(undefined *)(param_1 + 0x17c) = 5;
LAB_08018b9c:
  return (ulonglong)in_lr << 0x20;
}

