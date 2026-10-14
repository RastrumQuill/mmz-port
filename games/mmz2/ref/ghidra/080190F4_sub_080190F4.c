// sub_080190F4 at 0x080190F4 (thumb)

longlong sub_080190F4(int param_1)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  pcVar1 = (char *)(param_1 + 0x17c);
  if (*pcVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    DAT_0202ebb4 = DAT_0202ebb4 & 0xfb;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832cb58);
      sub_08014D0C(1);
      *(undefined2 *)(param_1 + 10) = 0;
      *pcVar1 = '\x01';
    }
    else if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832c648);
      *pcVar1 = '\x01';
    }
    else if (DAT_0202ec32 == 2) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832c6a0);
      *pcVar1 = '\x02';
    }
    if (DAT_0202ec32 == 3) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832cc48);
      sub_08014D0C(4);
      *(undefined2 *)(param_1 + 10) = 0;
      *(undefined *)(param_1 + 0x17c) = 3;
      goto LAB_080193c2;
    }
    if (DAT_0202ec32 != 4) goto LAB_080193c2;
    sub_0801B454(&DAT_0202ec40,&DAT_0832ccc0);
LAB_080191c6:
    *(undefined *)(param_1 + 0x17c) = 3;
  }
  else {
    if (*pcVar1 == '\n') {
LAB_08019224:
      if ((DAT_0202ec38 & 0x20) != 0) {
        sub_0801B454(&DAT_0202ec40,&DAT_0832c728);
        DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
        DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 1;
        *(undefined *)(param_1 + 0x17c) = 1;
        goto LAB_080193c2;
      }
    }
    else {
      if (((((*(ushort *)(param_1 + 10) & 1) == 0) && (0x3b000 < *(int *)(iVar3 + 0x54))) &&
          (*(int *)(iVar3 + 0x54) < 0x5a000)) &&
         ((0x82000 < *(int *)(iVar3 + 0x58) && (*(int *)(iVar3 + 0x58) < 0x8c000)))) {
        sub_0801B454(&DAT_0202ec40,&DAT_0832c6f8);
        *pcVar1 = '\n';
      }
      if (*(char *)(param_1 + 0x17c) == '\n') goto LAB_08019224;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x01') && (0x95fff < *(int *)(iVar3 + 0x58))) {
      sub_08014D0C(2);
      *(char *)(param_1 + 0x17c) = '\x02';
    }
    if ((*(char *)(param_1 + 0x17c) == '\x02') && (0xe0fff < *(int *)(iVar3 + 0x54))) {
      DAT_030032e1 = DAT_030032e1 | 2;
      puVar2 = &DAT_0832cbd0;
    }
    else {
      if (*(char *)(param_1 + 0x17c) == '\x14') {
LAB_0801932e:
        if ((DAT_0202ec38 & 0x20) != 0) {
          sub_0801B454(&DAT_0202ec40,&DAT_0832ce50);
          DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
          DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
          *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 2;
          goto LAB_080191c6;
        }
      }
      else {
        if (((((*(ushort *)(param_1 + 10) & 2) == 0) && (0xff000 < *(int *)(iVar3 + 0x54))) &&
            (*(int *)(iVar3 + 0x54) < 0x10f001)) &&
           ((0x50000 < *(int *)(iVar3 + 0x58) && (*(int *)(iVar3 + 0x58) < 0x5a000)))) {
          sub_0801B454(&DAT_0202ec40,&DAT_0832ce20);
          *(char *)(param_1 + 0x17c) = '\x14';
        }
        if (*(char *)(param_1 + 0x17c) == '\x14') goto LAB_0801932e;
      }
      if (((*(char *)(param_1 + 0x17c) != '\x03') || (0x13b000 < *(int *)(iVar3 + 0x54))) ||
         (*(int *)(iVar3 + 0x58) < 0x96000)) goto LAB_080193c2;
      DAT_030032e0 = DAT_030032e0 | 0x80;
      puVar2 = &DAT_0832cd18;
    }
    sub_0801B454(&DAT_0202ec40,puVar2);
    DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
  }
LAB_080193c2:
  return (ulonglong)in_lr << 0x20;
}

