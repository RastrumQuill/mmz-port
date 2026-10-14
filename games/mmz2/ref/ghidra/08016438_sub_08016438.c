// sub_08016438 at 0x08016438 (thumb)

longlong sub_08016438(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar1 = (char *)(param_1 + 0x17c);
  if (*pcVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832840c);
      sub_08014D0C(1);
      *pcVar1 = '\x01';
      goto LAB_0801669a;
    }
    if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_08328484);
      *pcVar1 = '\x01';
      goto LAB_0801669a;
    }
    if (DAT_0202ec32 != 2) goto LAB_0801669a;
    sub_0801B454(&DAT_0202ec40,&DAT_083277b4);
  }
  else {
    if ((*pcVar1 == '\x01') && (0xc5fff < *(int *)(iVar2 + 0x54))) {
      DAT_030032e1 = DAT_030032e1 | 2;
      *pcVar1 = '\x02';
      goto LAB_0801669a;
    }
    pcVar1 = (char *)(param_1 + 0x17c);
    if (*pcVar1 == '\x02') {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_083275e4);
      *pcVar1 = '\x03';
      goto LAB_0801669a;
    }
    if ((*pcVar1 == '\x03') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_08327644);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      *pcVar1 = '\x04';
      goto LAB_0801669a;
    }
    pcVar1 = (char *)(param_1 + 0x17c);
    if (*pcVar1 == '\x04') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      *pcVar1 = '\x05';
      goto LAB_0801669a;
    }
    if ((*pcVar1 == '\x05') && (0x101fff < *(int *)(iVar2 + 0x54))) {
      DAT_030032e1 = DAT_030032e1 | 2;
      *pcVar1 = '\x06';
      goto LAB_0801669a;
    }
    pcVar1 = (char *)(param_1 + 0x17c);
    if (*pcVar1 == '\x06') {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_083276b4);
      *pcVar1 = '\a';
      goto LAB_0801669a;
    }
    if ((*pcVar1 == '\a') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_08327714);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      *pcVar1 = '\b';
      goto LAB_0801669a;
    }
    if (*(char *)(param_1 + 0x17c) != '\b') {
      if ((*(char *)(param_1 + 0x17c) == '\t') && (0x1bffff < *(int *)(iVar2 + 0x54))) {
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_0801B454(&DAT_0202ec40,&DAT_083284dc);
        DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
      }
      goto LAB_0801669a;
    }
    sub_08014D0C(2);
    DAT_030032e0 = DAT_030032e0 & 0x7f;
    DAT_030032e1 = 0;
  }
  *(undefined *)(param_1 + 0x17c) = 9;
LAB_0801669a:
  return (ulonglong)in_lr << 0x20;
}

