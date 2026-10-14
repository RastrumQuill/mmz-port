// sub_080182D8 at 0x080182D8 (thumb)

longlong sub_080182D8(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  uint in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar5 = (char *)(param_1 + 0x17c);
  if (*pcVar5 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    *(undefined2 *)(param_1 + 0x16e) = 0x801;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832af00);
      sub_08014D0C(1);
      *pcVar5 = '\x01';
      goto LAB_08018540;
    }
    if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832af90);
      *pcVar5 = '\x01';
      goto LAB_08018540;
    }
    if (DAT_0202ec32 == 2) {
      puVar3 = &DAT_0832b090;
    }
    else {
      if (DAT_0202ec32 != 3) goto LAB_08018540;
      puVar3 = &DAT_0832b0e8;
    }
    sub_0801B454(&DAT_0202ec40,puVar3);
LAB_0801836c:
    *(undefined *)(param_1 + 0x17c) = 6;
  }
  else {
    if ((*pcVar5 == '\x01') && (0x1e9fff < *(int *)(iVar4 + 0x54))) {
      DAT_030032e1 = DAT_030032e1 | 2;
      *pcVar5 = '\x02';
      goto LAB_08018540;
    }
    if (*(char *)(param_1 + 0x17c) == '\x02') {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_0832afe8);
      uVar2 = 3;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x03') &&
            ((*(int *)(param_1 + 0x30) == 0 || (1 < *(byte *)(*(int *)(param_1 + 0x30) + 0xc))))) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_0832b060);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      uVar2 = 4;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x17c);
      if (cVar1 == '\x04') {
        sub_08014D0C(2);
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        *(char *)(param_1 + 0x17c) = '\x05';
        goto LAB_08018540;
      }
      if ((cVar1 == '\x05') && (0x1f6fff < *(int *)(iVar4 + 0x54))) {
        DAT_0202ed74 = 0x1f6000;
        goto LAB_0801836c;
      }
      if ((*(char *)(param_1 + 0x17c) == '\x06') && (0x26afff < *(int *)(iVar4 + 0x54))) {
        if (DAT_0202ed98 != 0xffffffff) {
          sub_08003274(DAT_0202ed98 & 0xffff);
          DAT_0202ed98 = 0xffffffff;
        }
        DAT_030032e1 = DAT_030032e1 | 2;
        *(char *)(param_1 + 0x17c) = '\a';
        goto LAB_08018540;
      }
      if (*(char *)(param_1 + 0x17c) == '\a') {
        sub_08014D0C(3);
        DAT_030032e1 = 0;
        sub_0801B454(&DAT_0202ec40,&DAT_0832b148);
        uVar2 = 8;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\b') || ((DAT_0202ec38 & 0x20) == 0)) goto LAB_08018540;
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_0801B454(&DAT_0202ec40,&DAT_0832b270);
        DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
        DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 4;
        uVar2 = 9;
      }
    }
    *(undefined *)(param_1 + 0x17c) = uVar2;
  }
LAB_08018540:
  return (ulonglong)in_lr << 0x20;
}

