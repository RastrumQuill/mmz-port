// sub_0801E0D4 at 0x0801E0D4 (thumb)

longlong sub_0801E0D4(int param_1)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  uint in_lr;
  
  cVar2 = DAT_020301a2;
  iVar6 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    uVar4 = DAT_020301a8 | 1;
    if (DAT_020301a2 == '\0') {
      if ((DAT_02030104 & 0x20) == 0) {
        DAT_020301a8 = uVar4;
        sub_08021D7C(&DAT_020301b0,&DAT_083510e0);
      }
      else {
        DAT_020301a8 = uVar4;
        sub_08021D7C(&DAT_020301b0,&DAT_08351a08);
      }
      sub_0801A4CC(1);
      *(undefined *)(param_1 + 0x17c) = 1;
      uVar4 = DAT_020301a8;
      goto LAB_0801e47c;
    }
    if (DAT_020301a2 != '\x01') {
      if (DAT_020301a2 == '\x02') {
        puVar5 = &DAT_083511c8;
      }
      else {
        if (DAT_020301a2 != '\x03') {
          if (DAT_020301a2 == '\x04') {
            DAT_020301a8 = uVar4;
            sub_08021D7C(&DAT_020301b0,&DAT_08351278);
            uVar3 = 5;
          }
          else if (DAT_020301a2 == '\x05') {
            DAT_020301a8 = uVar4;
            sub_08021D7C(&DAT_020301b0,&DAT_083514c8);
            uVar3 = 6;
          }
          else {
            if (DAT_020301a2 != '\x06') {
              if (DAT_020301a2 != '\a') goto LAB_0801e47c;
              DAT_020301a8 = DAT_020301a8 & 0xfffe;
              goto LAB_0801e478;
            }
            DAT_020301a8 = uVar4;
            sub_08021D7C(&DAT_020301b0,&DAT_08351770);
            uVar3 = 8;
          }
          goto LAB_0801e47a;
        }
        puVar5 = &DAT_08351220;
      }
      DAT_020301a8 = uVar4;
      sub_08021D7C(&DAT_020301b0,puVar5);
      *(char *)(param_1 + 0x17c) = cVar2;
      uVar4 = DAT_020301a8;
      goto LAB_0801e47c;
    }
    DAT_020301a8 = uVar4;
    sub_08021D7C(&DAT_020301b0,&DAT_08351168);
    sub_0801A4CC(2);
    uVar3 = 2;
  }
  else if (cVar1 == '\x01') {
    sub_0801A4CC(2);
    uVar3 = 2;
  }
  else if ((cVar1 == '\x02') && (*(int *)(iVar6 + 0x58) < 0x82001)) {
    sub_0801A4CC(3);
    uVar3 = 3;
  }
  else {
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (*(int *)(iVar6 + 0x58) < 0x1e000)) {
      if (0xeefff < *(int *)(iVar6 + 0x54)) {
        if ((DAT_02030104 & 0x20) == 0) {
          if (DAT_02030308 != 0xffffffff) {
            sub_080046A4(DAT_02030308 & 0xffff);
            DAT_02030308 = 0xffffffff;
          }
        }
        else {
          sub_08018860(DAT_020300ec,0x1e000);
          DAT_030032e1 = DAT_030032e1 | 2;
          *(char *)(param_1 + 0x17c) = '\x04';
        }
      }
      uVar4 = DAT_020301a8;
      if (0xf0fff < *(int *)(iVar6 + 0x54)) {
        sub_08018860(DAT_020300ec,0x1e000);
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
        uVar4 = DAT_020301a8;
      }
      goto LAB_0801e47c;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x04') && (0xfefff < *(int *)(iVar6 + 0x54))) {
      DAT_030032e1 = 0;
      if ((DAT_02030104 & 0x20) == 0) {
        sub_08021D7C(&DAT_020301b0,&DAT_083512d8);
      }
      else {
        sub_08021D7C(&DAT_020301b0,&DAT_08351a80);
        DAT_020301a8 = DAT_020301a8 & 0xfffe;
      }
      sub_0801A4CC(5);
      *(undefined *)(param_1 + 0x17c) = 6;
      uVar4 = DAT_020301a8;
      goto LAB_0801e47c;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x05') && (0xfefff < *(int *)(iVar6 + 0x54))) {
      DAT_030032e1 = 0;
      sub_08021D7C(&DAT_020301b0,&DAT_083513d8);
      sub_0801A4CC(5);
      *(char *)(param_1 + 0x17c) = '\x06';
      uVar4 = DAT_020301a8;
      goto LAB_0801e47c;
    }
    if (*(char *)(param_1 + 0x17c) == '\x06') {
      sub_0801A4CC(4);
      uVar3 = 7;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\a') && ((DAT_020301a8 & 0x10) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_08021D7C(&DAT_020301b0,&DAT_08351588);
      DAT_020301b2 = DAT_020301b2 & 0xfd;
      DAT_020301a8 = DAT_020301a8 & 0xffef | 5;
      sub_0801A500(6);
      uVar3 = 8;
    }
    else {
      uVar4 = DAT_020301a8;
      if (*(char *)(param_1 + 0x17c) != '\b') goto LAB_0801e47c;
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      sub_08021D7C(&DAT_020301b0,&DAT_08351798);
      sub_0801A4CC(7);
      DAT_020301a8 = DAT_020301a8 & 0xfffe;
LAB_0801e478:
      uVar3 = 9;
    }
  }
LAB_0801e47a:
  *(undefined *)(param_1 + 0x17c) = uVar3;
  uVar4 = DAT_020301a8;
LAB_0801e47c:
  DAT_020301a8 = uVar4;
  return (ulonglong)in_lr << 0x20;
}

