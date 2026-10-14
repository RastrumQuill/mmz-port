// sub_0801DA0C at 0x0801DA0C (thumb)

longlong sub_0801DA0C(int param_1)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  uint in_lr;
  
  cVar2 = DAT_020301a2;
  iVar5 = *(int *)(param_1 + 0x20);
  pcVar6 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar6;
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    if (DAT_020301a2 == '\0') {
      sub_08021D7C(&DAT_020301b0,&DAT_08350300);
      sub_0801A4CC(1);
      *pcVar6 = '\x01';
      goto LAB_0801dc62;
    }
    if (DAT_020301a2 != '\x01') {
      if (DAT_020301a2 == '\x02') {
        puVar4 = &DAT_083503e8;
      }
      else {
        if (DAT_020301a2 != '\x03') {
          if (DAT_020301a2 == '\x04') {
            sub_08021D7C(&DAT_020301b0,&DAT_08350498);
            uVar3 = 5;
          }
          else {
            if (DAT_020301a2 != '\x05') goto LAB_0801dc62;
            sub_08021D7C(&DAT_020301b0,&DAT_083506b0);
            uVar3 = 6;
          }
          goto LAB_0801dc60;
        }
        puVar4 = &DAT_08350440;
      }
      sub_08021D7C(&DAT_020301b0,puVar4);
      *pcVar6 = cVar2;
      goto LAB_0801dc62;
    }
    sub_08021D7C(&DAT_020301b0,&DAT_08350388);
    sub_0801A4CC(2);
    uVar3 = 2;
  }
  else if (cVar1 == '\x01') {
    sub_0801A4CC(2);
    uVar3 = 2;
  }
  else if ((cVar1 == '\x02') && (0xa4fff < *(int *)(iVar5 + 0x54))) {
    sub_0801A4CC(3);
    uVar3 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x17c) == '\x03') {
      if ((0x1c0fff < *(int *)(iVar5 + 0x54)) && (DAT_02030308 != 0xffffffff)) {
        sub_080046A4(DAT_02030308 & 0xffff);
        DAT_02030308 = 0xffffffff;
      }
      if (0x1c2fff < *(int *)(iVar5 + 0x54)) {
        DAT_030032e1 = DAT_030032e1 | 2;
        if (DAT_02030308 != 0xa1) {
          if (DAT_02030308 != 0xffffffff) {
            sub_080046A4(DAT_02030308 & 0xffff);
            DAT_02030308 = 0xffffffff;
          }
          sub_08004694(0xa1);
          DAT_02030308 = 0xa1;
        }
        *(undefined *)(param_1 + 0x17c) = 4;
      }
      goto LAB_0801dc62;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x04') && (0x1d0fff < *(int *)(iVar5 + 0x54))) {
      DAT_030032e1 = 0;
      sub_08021D7C(&DAT_020301b0,&DAT_083504f0);
      sub_0801A4CC(5);
      uVar3 = 6;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x05') && (0x1d0fff < *(int *)(iVar5 + 0x54))) {
      DAT_030032e1 = 0;
      sub_08021D7C(&DAT_020301b0,&DAT_083505d8);
      sub_0801A4CC(5);
      uVar3 = 6;
    }
    else if (*(char *)(param_1 + 0x17c) == '\x06') {
      sub_0801A4CC(4);
      uVar3 = 7;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\a') || ((DAT_020301a8 & 0x10) == 0)) goto LAB_0801dc62;
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_08021D7C(&DAT_020301b0,&DAT_08350758);
      DAT_020301b2 = DAT_020301b2 & 0xfd;
      DAT_020301a8 = DAT_020301a8 & 0xffef | 4;
      uVar3 = 8;
    }
  }
LAB_0801dc60:
  *(undefined *)(param_1 + 0x17c) = uVar3;
LAB_0801dc62:
  return (ulonglong)in_lr << 0x20;
}

