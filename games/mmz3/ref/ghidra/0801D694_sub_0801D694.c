// sub_0801D694 at 0x0801D694 (thumb)

longlong sub_0801D694(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    if (DAT_020301a2 == '\0') {
      if ((DAT_02030104 & 0x20) == 0) {
        sub_08021D7C(&DAT_020301b0,&DAT_0834fb04);
      }
      else {
        sub_08021D7C(&DAT_020301b0,&DAT_0835011c);
      }
      sub_0801A4CC(1);
      *(undefined *)(param_1 + 0x17c) = 1;
      goto LAB_0801d9e2;
    }
    if (DAT_020301a2 == '\x01') {
      sub_08021D7C(&DAT_020301b0,&DAT_0834fb8c);
      sub_0801A4CC(2);
      uVar2 = 2;
    }
    else {
      if (DAT_020301a2 == '\x02') {
        sub_08021D7C(&DAT_020301b0,&DAT_0834fbec);
        *(char *)(param_1 + 0x17c) = '\x02';
        goto LAB_0801d9e2;
      }
      if (DAT_020301a2 == '\x03') {
        sub_08021D7C(&DAT_020301b0,&DAT_0834fd34);
        uVar2 = 6;
      }
      else if (DAT_020301a2 == '\x04') {
        sub_08021D7C(&DAT_020301b0,&DAT_0834fd8c);
        uVar2 = 8;
      }
      else {
        if (DAT_020301a2 != '\x05') goto LAB_0801d9e2;
        sub_08021D7C(&DAT_020301b0,&DAT_0834ffdc);
        uVar2 = 10;
      }
    }
  }
  else if (cVar1 == '\x01') {
    sub_0801A4CC(2);
    uVar2 = 2;
  }
  else if ((cVar1 == '\x02') && (0x10ffff < *(int *)(iVar3 + 0x54))) {
    DAT_030032e1 = DAT_030032e1 | 2;
    uVar2 = 3;
  }
  else if (*(char *)(param_1 + 0x17c) == '\x03') {
    DAT_030032e1 = 0;
    sub_08021D7C(&DAT_020301b0,&DAT_0834fc44);
    uVar2 = 4;
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x04') && ((DAT_020301a8 & 0x10) != 0)) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_08021D7C(&DAT_020301b0,&DAT_0834fcd4);
    DAT_020301b2 = DAT_020301b2 & 0xfd;
    DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
    uVar2 = 5;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x05') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      sub_0801A4CC(3);
      uVar2 = 6;
    }
    else if (cVar1 == '\x06') {
      if (*(int *)(iVar3 + 0x54) < 0x21c000) goto LAB_0801d9e2;
      if (DAT_02030308 != 0xffffffff) {
        sub_080046A4(DAT_02030308 & 0xffff);
        DAT_02030308 = 0xffffffff;
      }
      DAT_030032e1 = DAT_030032e1 | 2;
      uVar2 = 7;
    }
    else if (cVar1 == '\a') {
      DAT_030032e1 = 0;
      if ((DAT_02030104 & 0x20) == 0) {
        sub_08021D7C(&DAT_020301b0,&DAT_0834fde4);
        sub_0801A4CC(5);
        uVar2 = 10;
      }
      else {
        sub_08021D7C(&DAT_020301b0,&DAT_08350194);
        DAT_020301a8 = DAT_020301a8 & 0xfffe;
LAB_0801d9de:
        uVar2 = 0xc;
      }
    }
    else if (cVar1 == '\b') {
      if (*(int *)(iVar3 + 0x54) < 0x21c000) goto LAB_0801d9e2;
      if (DAT_02030308 != 0xffffffff) {
        sub_080046A4(DAT_02030308 & 0xffff);
        DAT_02030308 = 0xffffffff;
      }
      DAT_030032e1 = DAT_030032e1 | 2;
      uVar2 = 9;
    }
    else if (cVar1 == '\t') {
      DAT_030032e1 = 0;
      sub_08021D7C(&DAT_020301b0,&DAT_0834feec);
      sub_0801A4CC(5);
      uVar2 = 10;
    }
    else {
      if (cVar1 != '\n') {
        if ((cVar1 != '\v') || ((DAT_020301a8 & 0x10) == 0)) goto LAB_0801d9e2;
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_08021D7C(&DAT_020301b0,&DAT_08350054);
        DAT_020301b2 = DAT_020301b2 & 0xfd;
        DAT_020301a8 = DAT_020301a8 & 0xffef | 4;
        goto LAB_0801d9de;
      }
      sub_0801A4CC(4);
      uVar2 = 0xb;
    }
  }
  *(undefined *)(param_1 + 0x17c) = uVar2;
LAB_0801d9e2:
  return (ulonglong)in_lr << 0x20;
}

