// sub_0801C294 at 0x0801C294 (thumb)

longlong sub_0801C294(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  char *pcVar4;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    DAT_02030104 = DAT_02030104 & 0xfb;
    if (DAT_020301a2 == '\0') {
      DAT_02030109 = DAT_02030109 & 0xe1;
      sub_08021D7C(&DAT_020301b0,&DAT_0834c8c4);
      sub_0801A4CC(1);
      *(char *)(param_1 + 0x17c) = '\x01';
      goto LAB_0801c53e;
    }
    if (DAT_020301a2 == '\x02') {
      DAT_02030109 = DAT_02030109 & 0xf9;
      sub_08021D7C(&DAT_020301b0,&DAT_0834c01c);
      uVar2 = 4;
    }
    else if (DAT_020301a2 == '\x05') {
      sub_08021D7C(&DAT_020301b0,&DAT_0834c28c);
      uVar2 = 6;
    }
    else if (DAT_020301a2 == '\x06') {
      sub_08021D7C(&DAT_020301b0,&DAT_0834c4a4);
      DAT_02030104 = DAT_02030104 | 4;
      uVar2 = 7;
    }
    else {
      if (DAT_020301a2 != '\a') goto LAB_0801c53e;
      sub_08021D7C(&DAT_020301b0,&DAT_0834c554);
      DAT_02030109 = DAT_02030109 & 0xe7;
      uVar2 = 0xb;
    }
  }
  else if (cVar1 == '\x01') {
    sub_0801A4CC(2);
    uVar2 = 4;
  }
  else {
    if (cVar1 == '\x04') {
      if ((DAT_02030104 & 0x10) == 0) {
        DAT_020302e8 = 0x3c0000;
      }
      else {
        DAT_020302e8 = 0x188800;
      }
      if (0x194fff < *(int *)(iVar3 + 0x54)) {
        *(undefined *)(param_1 + 0x17c) = 6;
      }
      goto LAB_0801c53e;
    }
    if ((cVar1 == '\x06') && (0x1a4fff < *(int *)(iVar3 + 0x54))) {
      sub_08021D7C(&DAT_020301b0,&DAT_0834c43c);
      sub_0801A4CC(6);
      DAT_02030104 = DAT_02030104 | 4;
      uVar2 = 7;
    }
    else if (*(char *)(param_1 + 0x17c) == '\a') {
      sub_0801A4CC(5);
      uVar2 = 8;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\b') && ((DAT_020301a8 & 0x10) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_08021D7C(&DAT_020301b0,&DAT_0834c4fc);
      DAT_020301b2 = DAT_020301b2 & 0xfd;
      DAT_02030104 = DAT_02030104 & 0xfb;
      DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
      uVar2 = 9;
    }
    else {
      pcVar4 = (char *)(param_1 + 0x17c);
      if (*pcVar4 == '\t') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        *pcVar4 = '\n';
        goto LAB_0801c53e;
      }
      if ((*pcVar4 == '\n') && (0x1b3fff < *(int *)(iVar3 + 0x54))) {
        sub_0801A4CC(7);
        DAT_02030104 = DAT_02030104 | 4;
        *pcVar4 = '\v';
        goto LAB_0801c53e;
      }
      if (*(char *)(param_1 + 0x17c) == '\v') {
        if (*(int *)(iVar3 + 0x54) < 0x2b1000) goto LAB_0801c53e;
        DAT_030032e1 = DAT_030032e1 | 2;
        uVar2 = 0xc;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\f') || (*(int *)(iVar3 + 0x54) < 0x2c1000))
        goto LAB_0801c53e;
        DAT_030032e1 = 0;
        sub_08021D7C(&DAT_020301b0,&DAT_0834c93c);
        DAT_020301a8 = DAT_020301a8 & 0xfffe;
        uVar2 = 0xd;
      }
    }
  }
  *(undefined *)(param_1 + 0x17c) = uVar2;
LAB_0801c53e:
  return (ulonglong)in_lr << 0x20;
}

