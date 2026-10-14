// sub_0801E4A4 at 0x0801E4A4 (thumb)

longlong sub_0801E4A4(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  uint in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  pcVar4 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar4;
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    DAT_02030104 = DAT_02030104 & 0xfb;
    if (DAT_020301a2 == '\0') {
      sub_08021D7C(&DAT_020301b0,&DAT_08351c08);
      DAT_02030154 = DAT_02030154 & 0xc0;
      sub_0801A4CC(1);
      *pcVar4 = '\x01';
      goto LAB_0801ea34;
    }
    if (DAT_020301a2 == '\x01') {
      sub_08021D7C(&DAT_020301b0,&DAT_08351cc8);
      DAT_02030154 = DAT_02030154 & 0xc0;
      sub_0801A4CC(2);
      uVar2 = 2;
    }
    else {
      if (DAT_020301a2 == '\x02') {
        sub_08021D7C(&DAT_020301b0,&DAT_08351d28);
        DAT_02030154 = DAT_02030154 & 0xc0;
        *pcVar4 = '\x02';
        goto LAB_0801ea34;
      }
      if (DAT_020301a2 == '\x03') {
        sub_08021D7C(&DAT_020301b0,&DAT_08351e00);
        uVar2 = 6;
      }
      else if (DAT_020301a2 == '\x04') {
        sub_08021D7C(&DAT_020301b0,&DAT_08351ef8);
        uVar2 = 10;
      }
      else if (DAT_020301a2 == '\x05') {
        sub_08021D7C(&DAT_020301b0,&DAT_08351fd0);
        uVar2 = 0x10;
      }
      else {
        if (DAT_020301a2 != '\x06') goto LAB_0801ea34;
        sub_08021D7C(&DAT_020301b0,&DAT_083521b8);
        uVar2 = 0x11;
      }
    }
  }
  else if (cVar1 == '\x01') {
    sub_0801A4CC(2);
    uVar2 = 2;
  }
  else if ((cVar1 == '\x02') && (0xe13ff < *(int *)(iVar5 + 0x54))) {
    sub_08021D7C(&DAT_020301b0,&DAT_08351d80);
    DAT_02030104 = DAT_02030104 | 4;
    uVar2 = 3;
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x03') && ((DAT_020301a8 & 0x10) != 0)) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_08021D7C(&DAT_020301b0,&DAT_08351dd8);
    DAT_020301b2 = DAT_020301b2 & 0xfd;
    DAT_02030104 = DAT_02030104 & 0xfb;
    DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
    uVar2 = 4;
  }
  else {
    pcVar4 = (char *)(param_1 + 0x17c);
    if (*pcVar4 == '\x04') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      *pcVar4 = '\x05';
      goto LAB_0801ea34;
    }
    if ((*pcVar4 == '\x05') && (0xf77ff < DAT_020302c0)) {
      DAT_02030104 = DAT_02030104 | 4;
      sub_08021F6C(1);
      *pcVar4 = '\x06';
      goto LAB_0801ea34;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x06') && (0x1593ff < *(int *)(iVar5 + 0x54))) {
      sub_08021D7C(&DAT_020301b0,&DAT_08351e58);
      sub_0801A4CC(3);
      DAT_02030104 = DAT_02030104 | 4;
      *(char *)(param_1 + 0x17c) = '\a';
      goto LAB_0801ea34;
    }
    if ((*(char *)(param_1 + 0x17c) == '\a') && ((DAT_020301a8 & 0x10) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_08021D7C(&DAT_020301b0,&DAT_08351ec8);
      DAT_020301b2 = DAT_020301b2 & 0xfd;
      DAT_02030104 = DAT_02030104 & 0xfb;
      DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
      uVar2 = 8;
    }
    else {
      pcVar4 = (char *)(param_1 + 0x17c);
      if (*pcVar4 == '\b') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        *pcVar4 = '\t';
        goto LAB_0801ea34;
      }
      if ((*pcVar4 == '\t') && (0x16f7ff < DAT_020302c0)) {
        sub_0801A4CC(4);
        DAT_02030104 = DAT_02030104 | 4;
        sub_08021F6C(1);
        *pcVar4 = '\n';
        goto LAB_0801ea34;
      }
      if ((*(char *)(param_1 + 0x17c) == '\n') && (0x20d3ff < *(int *)(iVar5 + 0x54))) {
        sub_08021D7C(&DAT_020301b0,&DAT_08351f50);
        DAT_02030104 = DAT_02030104 | 4;
        *(char *)(param_1 + 0x17c) = '\v';
        goto LAB_0801ea34;
      }
      if ((*(char *)(param_1 + 0x17c) != '\v') || ((DAT_020301a8 & 0x10) == 0)) {
        pcVar4 = (char *)(param_1 + 0x17c);
        if (*pcVar4 == '\f') {
          DAT_030032e0 = DAT_030032e0 & 0x7f;
          DAT_030032e1 = 0;
          *pcVar4 = '\r';
          goto LAB_0801ea34;
        }
        if ((*pcVar4 == '\r') && (0x2237ff < DAT_020302c0)) {
          DAT_02030104 = DAT_02030104 | 4;
          sub_08021F6C(1);
          *pcVar4 = '\x0e';
          goto LAB_0801ea34;
        }
        if (*(char *)(param_1 + 0x17c) == '\x0e') {
          if ((0x2b0fff < *(int *)(iVar5 + 0x54)) && (DAT_02030308 != 0xffffffff)) {
            sub_080046A4(DAT_02030308 & 0xffff);
            DAT_02030308 = 0xffffffff;
          }
          if (0x2b2fff < *(int *)(iVar5 + 0x54)) {
            DAT_030032e1 = DAT_030032e1 | 2;
            if (DAT_02030308 != 0xa1) {
              if (DAT_02030308 != 0xffffffff) {
                sub_080046A4(DAT_02030308 & 0xffff);
                DAT_02030308 = 0xffffffff;
              }
              sub_08004694(0xa1);
              DAT_02030308 = 0xa1;
            }
            *(undefined *)(param_1 + 0x17c) = 0xf;
          }
          goto LAB_0801ea34;
        }
        if ((*(char *)(param_1 + 0x17c) == '\x0f') && (0x2c0fff < *(int *)(iVar5 + 0x54))) {
          DAT_030032e1 = 0;
          puVar3 = &DAT_08352028;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\x10') || (*(int *)(iVar5 + 0x54) < 0x2c1000)) {
            if (*(char *)(param_1 + 0x17c) == '\x11') {
              sub_0801A4CC(5);
              uVar2 = 0x12;
            }
            else {
              if ((*(char *)(param_1 + 0x17c) != '\x12') || ((DAT_020301a8 & 0x10) == 0))
              goto LAB_0801ea34;
              DAT_030032e0 = DAT_030032e0 | 0x80;
              DAT_030032e1 = DAT_030032e1 | 2;
              sub_08021D7C(&DAT_020301b0,&DAT_08352238);
              DAT_020301b2 = DAT_020301b2 & 0xfd;
              uVar2 = 4;
              DAT_020301a8 = DAT_020301a8 & 0xffef | 4;
            }
            goto LAB_0801ea32;
          }
          puVar3 = &DAT_08352138;
        }
        sub_08021D7C(&DAT_020301b0,puVar3);
        sub_0801A4CC(6);
        *(undefined *)(param_1 + 0x17c) = 0x11;
        goto LAB_0801ea34;
      }
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_08021D7C(&DAT_020301b0,&DAT_08351fa8);
      DAT_020301b2 = DAT_020301b2 & 0xfd;
      DAT_02030104 = DAT_02030104 & 0xfb;
      DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
      uVar2 = 0xc;
    }
  }
LAB_0801ea32:
  *(undefined *)(param_1 + 0x17c) = uVar2;
LAB_0801ea34:
  return (ulonglong)in_lr << 0x20;
}

