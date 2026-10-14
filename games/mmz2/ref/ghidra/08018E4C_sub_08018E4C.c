// sub_08018E4C at 0x08018E4C (thumb)

longlong sub_08018E4C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar4 = (char *)(param_1 + 0x17c);
  if (*pcVar4 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    DAT_0202ebb4 = DAT_0202ebb4 & 0xfb;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832c5b8);
      sub_08014D0C(1);
      *(undefined2 *)(param_1 + 10) = 0;
      cVar1 = '\x01';
    }
    else {
      if (DAT_0202ec32 == 1) {
        sub_0801B454(&DAT_0202ec40,&DAT_0832c648);
        *pcVar4 = '\x01';
        goto LAB_080190d4;
      }
      if (DAT_0202ec32 == 2) {
        sub_0801B454(&DAT_0202ec40,&DAT_0832c6a0);
        *pcVar4 = '\x02';
        goto LAB_080190d4;
      }
      if (DAT_0202ec32 != 3) goto LAB_080190d4;
      sub_0801B454(&DAT_0202ec40,&DAT_0832c780);
      cVar1 = '\x05';
    }
    *pcVar4 = cVar1;
    goto LAB_080190d4;
  }
  if (*pcVar4 == '\n') {
LAB_08018f4e:
    if ((DAT_0202ec38 & 0x20) != 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832c728);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 1;
      *(undefined *)(param_1 + 0x17c) = 1;
      goto LAB_080190d4;
    }
  }
  else {
    if (((((*(ushort *)(param_1 + 10) & 1) == 0) && (0x3b000 < *(int *)(iVar2 + 0x54))) &&
        (*(int *)(iVar2 + 0x54) < 0x5a000)) &&
       ((0x82000 < *(int *)(iVar2 + 0x58) && (*(int *)(iVar2 + 0x58) < 0x8c000)))) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832c6f8);
      *pcVar4 = '\n';
    }
    if (*(char *)(param_1 + 0x17c) == '\n') goto LAB_08018f4e;
  }
  if ((*(char *)(param_1 + 0x17c) == '\x01') && (0x95fff < *(int *)(iVar2 + 0x58))) {
    sub_08014D0C(2);
    *(char *)(param_1 + 0x17c) = '\x02';
  }
  if ((*(char *)(param_1 + 0x17c) == '\x02') && (0xe0fff < *(int *)(iVar2 + 0x54))) {
    sub_0801B454(&DAT_0202ec40,&DAT_0832cd90);
    *(char *)(param_1 + 0x17c) = '\x03';
    goto LAB_080190d4;
  }
  pcVar4 = (char *)(param_1 + 0x17c);
  if (((*pcVar4 == '\x03') || (*pcVar4 == '\x05')) && (0x1c97ff < *(int *)(iVar2 + 0x54))) {
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_08014D0C(3);
    *pcVar4 = *pcVar4 + '\x01';
    goto LAB_080190d4;
  }
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\x04') {
    puVar3 = &DAT_0832c7d8;
LAB_08019056:
    DAT_030032e1 = 0;
    sub_0801B454(&DAT_0202ec40,puVar3);
    cVar1 = '\a';
  }
  else {
    if (cVar1 == '\x06') {
      puVar3 = &DAT_0832c9a0;
      goto LAB_08019056;
    }
    if ((cVar1 != '\a') || ((DAT_0202ec38 & 0x20) == 0)) goto LAB_080190d4;
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_0801B454(&DAT_0202ec40,&DAT_0832ca68);
    DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
    DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 4;
    cVar1 = '\b';
  }
  *(char *)(param_1 + 0x17c) = cVar1;
LAB_080190d4:
  return (ulonglong)in_lr << 0x20;
}

