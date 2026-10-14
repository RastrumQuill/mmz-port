// sub_0801DD84 at 0x0801DD84 (thumb)

longlong sub_0801DD84(int param_1)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  undefined *puVar4;
  int iVar5;
  uint in_lr;
  
  cVar2 = DAT_020301a2;
  iVar5 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    if (DAT_020301a2 == '\0') {
      if ((DAT_02030104 & 0x20) == 0) {
        sub_08021D7C(&DAT_020301b0,&DAT_083509ec);
      }
      else {
        sub_08021D7C(&DAT_020301b0,&DAT_08350eec);
      }
      sub_0801A4CC(1);
      *(undefined *)(param_1 + 0x17c) = 1;
      goto LAB_0801e0aa;
    }
    if (DAT_020301a2 != '\x01') {
      if (DAT_020301a2 == '\x02') {
        puVar4 = &DAT_08350ad4;
      }
      else {
        if (DAT_020301a2 != '\x03') {
          if (DAT_020301a2 == '\x04') {
            sub_08021D7C(&DAT_020301b0,&DAT_08350b84);
            uVar3 = 5;
          }
          else {
            if (DAT_020301a2 != '\x05') goto LAB_0801e0aa;
            sub_08021D7C(&DAT_020301b0,&DAT_08350d84);
            uVar3 = 6;
          }
          goto LAB_0801e0a8;
        }
        puVar4 = &DAT_08350b2c;
      }
      sub_08021D7C(&DAT_020301b0,puVar4);
      *(char *)(param_1 + 0x17c) = cVar2;
      goto LAB_0801e0aa;
    }
    sub_08021D7C(&DAT_020301b0,&DAT_08350a74);
    sub_0801A4CC(2);
    uVar3 = 2;
  }
  else if (cVar1 == '\x01') {
    sub_0801A4CC(2);
    uVar3 = 2;
  }
  else if ((cVar1 == '\x02') && (0x176fff < *(int *)(iVar5 + 0x54))) {
    sub_0801A4CC(3);
    uVar3 = 3;
  }
  else {
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (*(int *)(iVar5 + 0x58) < 0x1e000)) {
      if (0x1fcfff < *(int *)(iVar5 + 0x54)) {
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
      if (0x1fefff < *(int *)(iVar5 + 0x54)) {
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
      }
      goto LAB_0801e0aa;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x04') && (0x20cfff < *(int *)(iVar5 + 0x54))) {
      DAT_030032e1 = 0;
      if ((DAT_02030104 & 0x20) == 0) {
        sub_08021D7C(&DAT_020301b0,&DAT_08350be4);
      }
      else {
        sub_08021D7C(&DAT_020301b0,&DAT_08350f64);
        DAT_020301a8 = DAT_020301a8 & 0xfffe;
      }
      sub_0801A4CC(5);
      *(undefined *)(param_1 + 0x17c) = 6;
      goto LAB_0801e0aa;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x05') && (0x20cfff < *(int *)(iVar5 + 0x54))) {
      DAT_030032e1 = 0;
      sub_08021D7C(&DAT_020301b0,&DAT_08350cbc);
      sub_0801A4CC(5);
      *(char *)(param_1 + 0x17c) = '\x06';
      goto LAB_0801e0aa;
    }
    if (*(char *)(param_1 + 0x17c) == '\x06') {
      sub_0801A4CC(4);
      uVar3 = 7;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\a') || ((DAT_020301a8 & 0x10) == 0)) goto LAB_0801e0aa;
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_08021D7C(&DAT_020301b0,&DAT_08350e2c);
      DAT_020301b2 = DAT_020301b2 & 0xfd;
      DAT_020301a8 = DAT_020301a8 & 0xffef | 4;
      uVar3 = 8;
    }
  }
LAB_0801e0a8:
  *(undefined *)(param_1 + 0x17c) = uVar3;
LAB_0801e0aa:
  return (ulonglong)in_lr << 0x20;
}

