// sub_0801EE94 at 0x0801EE94 (thumb)

longlong sub_0801EE94(int param_1)

{
  char cVar1;
  undefined uVar2;
  ushort uVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  uint in_lr;
  
  iVar6 = *(int *)(param_1 + 0x20);
  pcVar5 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar5;
  if (cVar1 == '\0') {
    uVar3 = DAT_020301a8 | 1;
    if (DAT_020301a2 == '\0') {
      DAT_020301a8 = uVar3;
      sub_08021D7C(&DAT_020301b0,&DAT_0835256c);
      sub_0801A4CC(1);
      *pcVar5 = '\x01';
      uVar3 = DAT_020301a8;
      goto LAB_0801f200;
    }
    if (DAT_020301a2 == '\x01') {
      DAT_020301a8 = uVar3;
      sub_08021D7C(&DAT_020301b0,&DAT_0835266c);
      sub_0801A4CC(2);
      uVar2 = 2;
    }
    else {
      if (DAT_020301a2 == '\x02') {
        DAT_020301a8 = uVar3;
        sub_08021D7C(&DAT_020301b0,&DAT_083526dc);
        *pcVar5 = '\x02';
        uVar3 = DAT_020301a8;
        goto LAB_0801f200;
      }
      if (DAT_020301a2 == '\x03') {
        DAT_020301a8 = uVar3;
        sub_08021D7C(&DAT_020301b0,&DAT_08352814);
        uVar2 = 6;
      }
      else if (DAT_020301a2 == '\x04') {
        DAT_020301a8 = uVar3;
        sub_08021D7C(&DAT_020301b0,&DAT_0835286c);
        uVar2 = 8;
      }
      else if (DAT_020301a2 == '\x05') {
        DAT_020301a8 = uVar3;
        sub_08021D7C(&DAT_020301b0,&DAT_08352ae4);
        uVar2 = 9;
      }
      else {
        if (DAT_020301a2 != '\x06') goto LAB_0801f200;
        DAT_020301a8 = (DAT_020301a8 | 5) & 0xfffe;
LAB_0801f1fc:
        uVar2 = 0xc;
      }
    }
  }
  else if (cVar1 == '\x01') {
    sub_0801A4CC(2);
    uVar2 = 2;
  }
  else if ((cVar1 == '\x02') && (0x1fffff < *(int *)(iVar6 + 0x54))) {
    DAT_030032e1 = DAT_030032e1 | 2;
    uVar2 = 3;
  }
  else if (*(char *)(param_1 + 0x17c) == '\x03') {
    DAT_030032e1 = 0;
    sub_08021D7C(&DAT_020301b0,&DAT_08352734);
    uVar2 = 4;
  }
  else {
    if ((*(char *)(param_1 + 0x17c) != '\x04') || ((DAT_020301a8 & 0x10) == 0)) {
      cVar1 = *(char *)(param_1 + 0x17c);
      if (cVar1 == '\x05') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        sub_0801A4CC(3);
        *(char *)(param_1 + 0x17c) = '\x06';
        uVar3 = DAT_020301a8;
        goto LAB_0801f200;
      }
      if (cVar1 == '\x06') {
        if ((0x337fff < *(int *)(iVar6 + 0x54)) && (DAT_02030308 != 0xffffffff)) {
          sub_080046A4(DAT_02030308 & 0xffff);
          DAT_02030308 = 0xffffffff;
        }
        uVar3 = DAT_020301a8;
        if (0x339fff < *(int *)(iVar6 + 0x54)) {
          DAT_030032e1 = DAT_030032e1 | 2;
          if (DAT_02030308 != 0xa1) {
            if (DAT_02030308 != 0xffffffff) {
              sub_080046A4(DAT_02030308 & 0xffff);
              DAT_02030308 = 0xffffffff;
            }
            sub_08004694(0xa1);
            DAT_02030308 = 0xa1;
          }
          *(undefined *)(param_1 + 0x17c) = 7;
          uVar3 = DAT_020301a8;
        }
        goto LAB_0801f200;
      }
      if ((cVar1 == '\a') && (0x347fff < *(int *)(iVar6 + 0x54))) {
        DAT_030032e1 = 0;
        puVar4 = &DAT_083528c4;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\b') || (*(int *)(iVar6 + 0x54) < 0x348000)) {
          if (*(char *)(param_1 + 0x17c) == '\t') {
            sub_0801A4CC(4);
            uVar2 = 10;
          }
          else {
            if ((*(char *)(param_1 + 0x17c) != '\n') || ((DAT_020301a8 & 0x10) == 0)) {
              uVar3 = DAT_020301a8;
              if (*(char *)(param_1 + 0x17c) != '\v') goto LAB_0801f200;
              DAT_030032e0 = DAT_030032e0 & 0x7f;
              DAT_030032e1 = 0;
              sub_08021D7C(&DAT_020301b0,&DAT_08352c3c);
              sub_0801A4CC(6);
              DAT_020301a8 = DAT_020301a8 & 0xfffe | 4;
              goto LAB_0801f1fc;
            }
            DAT_030032e0 = DAT_030032e0 | 0x80;
            DAT_030032e1 = DAT_030032e1 | 2;
            sub_08021D7C(&DAT_020301b0,&DAT_08352b84);
            DAT_020301b2 = DAT_020301b2 & 0xfd;
            DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
            uVar2 = 0xb;
          }
          goto LAB_0801f1fe;
        }
        puVar4 = &DAT_08352a14;
      }
      sub_08021D7C(&DAT_020301b0,puVar4);
      sub_0801A4CC(5);
      *(undefined *)(param_1 + 0x17c) = 9;
      uVar3 = DAT_020301a8;
      goto LAB_0801f200;
    }
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_08021D7C(&DAT_020301b0,&DAT_083527c4);
    DAT_020301b2 = DAT_020301b2 & 0xfd;
    DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
    uVar2 = 5;
  }
LAB_0801f1fe:
  *(undefined *)(param_1 + 0x17c) = uVar2;
  uVar3 = DAT_020301a8;
LAB_0801f200:
  DAT_020301a8 = uVar3;
  return (ulonglong)in_lr << 0x20;
}

