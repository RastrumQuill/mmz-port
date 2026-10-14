// sub_0801CAC8 at 0x0801CAC8 (thumb)

longlong sub_0801CAC8(int param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  ushort uVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  uint in_lr;
  
  cVar3 = DAT_020301a2;
  iVar7 = *(int *)(param_1 + 0x20);
  pcVar8 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar8;
  if (cVar1 == '\0') {
    uVar5 = DAT_020301a8 | 1;
    bVar2 = DAT_02030104 | 4;
    if ((DAT_02030104 & 0x40) != 0) {
      DAT_02030104 = bVar2;
      DAT_020301a8 = uVar5;
      sub_08021D7C(&DAT_020301b0,&DAT_0834e3d8);
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      *pcVar8 = '\x14';
      uVar5 = DAT_020301a8;
      goto LAB_0801d010;
    }
    if (DAT_020301a2 == '\0') {
      if ((DAT_02030104 & 0x20) == 0) {
        DAT_02030104 = bVar2;
        DAT_020301a8 = uVar5;
        sub_08021D7C(&DAT_020301b0,&DAT_0834d460);
      }
      else {
        DAT_02030104 = bVar2;
        DAT_020301a8 = uVar5;
        sub_08021D7C(&DAT_020301b0,&DAT_0834e418);
      }
      sub_0801A4CC(1);
      uVar4 = 1;
      goto LAB_0801d00e;
    }
    if (DAT_020301a2 == '\x01') {
      DAT_02030104 = bVar2;
      DAT_020301a8 = uVar5;
      sub_08021D7C(&DAT_020301b0,&DAT_0834d520);
      goto LAB_0801cc40;
    }
    if (DAT_020301a2 == '\x02') {
      puVar6 = &DAT_0834d580;
    }
    else {
      if (DAT_020301a2 == '\x03') {
        DAT_02030104 = bVar2;
        DAT_020301a8 = uVar5;
        sub_08021D7C(&DAT_020301b0,&DAT_0834d7f8);
        goto LAB_0801cc98;
      }
      if (DAT_020301a2 != '\x04') {
        if (DAT_020301a2 == '\x05') {
          DAT_02030104 = bVar2;
          DAT_020301a8 = uVar5;
          sub_08021D7C(&DAT_020301b0,&DAT_0834d990);
          goto LAB_0801cd6a;
        }
        if (DAT_020301a2 == '\x06') {
          DAT_02030104 = bVar2;
          DAT_020301a8 = uVar5;
          sub_08021D7C(&DAT_020301b0,&DAT_0834d9e8);
          *pcVar8 = '\t';
          uVar5 = DAT_020301a8;
          goto LAB_0801d010;
        }
        if (DAT_020301a2 != '\a') {
          DAT_02030104 = bVar2;
          if (DAT_020301a2 != '\b') goto LAB_0801d010;
          DAT_020301a8 = DAT_020301a8 & 0xfffe | 4;
          uVar4 = 0xd;
          goto LAB_0801d00e;
        }
        DAT_02030104 = bVar2;
        DAT_020301a8 = uVar5;
        sub_08021D7C(&DAT_020301b0,&DAT_0834df10);
        goto LAB_0801cec8;
      }
      puVar6 = &DAT_0834d840;
    }
    DAT_02030104 = bVar2;
    DAT_020301a8 = uVar5;
    sub_08021D7C(&DAT_020301b0,puVar6);
    *pcVar8 = cVar3;
    uVar5 = DAT_020301a8;
  }
  else {
    if (cVar1 == '\x01') {
LAB_0801cc40:
      sub_0801A4CC(2);
      *pcVar8 = '\x02';
      uVar5 = DAT_020301a8;
      goto LAB_0801d010;
    }
    if (((cVar1 == '\x02') && (0xc2fff < *(int *)(iVar7 + 0x54))) &&
       (*(int *)(iVar7 + 0x58) < 0x14000)) {
      if ((DAT_02030104 & 0x20) == 0) {
        sub_08021D7C(&DAT_020301b0,&DAT_0834d5d8);
        sub_0801A4CC(3);
        *pcVar8 = '\x03';
        uVar5 = DAT_020301a8;
        goto LAB_0801d010;
      }
LAB_0801cc98:
      sub_0801A4CC(4);
      *pcVar8 = '\x04';
      uVar5 = DAT_020301a8;
      goto LAB_0801d010;
    }
    pcVar8 = (char *)(param_1 + 0x17c);
    if (*pcVar8 == '\x03') {
      sub_0801A4CC(4);
      *pcVar8 = '\x04';
      uVar5 = DAT_020301a8;
      goto LAB_0801d010;
    }
    if ((*pcVar8 == '\x04') && (0x11dfff < *(int *)(iVar7 + 0x54))) {
      sub_08021D7C(&DAT_020301b0,&DAT_0834d898);
      *pcVar8 = '\x05';
      uVar5 = DAT_020301a8;
      goto LAB_0801d010;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x05') && ((DAT_020301a8 & 0x10) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_08021D7C(&DAT_020301b0,&DAT_0834d928);
      DAT_020301b2 = DAT_020301b2 & 0xfd;
      DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
      sub_0801A4CC(5);
      *(char *)(param_1 + 0x17c) = '\x06';
      uVar5 = DAT_020301a8;
      goto LAB_0801d010;
    }
    pcVar8 = (char *)(param_1 + 0x17c);
    cVar1 = *pcVar8;
    if (cVar1 == '\x06') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
LAB_0801cd6a:
      *(undefined *)(param_1 + 0x17c) = 7;
      uVar5 = DAT_020301a8;
      goto LAB_0801d010;
    }
    if (cVar1 == '\a') {
      if (0x1c0fff < *(int *)(iVar7 + 0x54)) {
        if ((DAT_02030104 & 0x20) == 0) {
          if (DAT_02030308 != 0xffffffff) {
            sub_080046A4(DAT_02030308 & 0xffff);
            DAT_02030308 = 0xffffffff;
          }
        }
        else {
          DAT_030032e1 = DAT_030032e1 | 2;
          DAT_02030104 = DAT_02030104 & 0xfb;
          *pcVar8 = '\b';
        }
      }
      uVar5 = DAT_020301a8;
      if (*(int *)(iVar7 + 0x54) < 0x1c3000) goto LAB_0801d010;
      DAT_030032e1 = DAT_030032e1 | 2;
      if (DAT_02030308 != 0xa1) {
        if (DAT_02030308 != 0xffffffff) {
          sub_080046A4(DAT_02030308 & 0xffff);
          DAT_02030308 = 0xffffffff;
        }
        sub_08004694(0xa1);
        DAT_02030308 = 0xa1;
      }
      uVar4 = 8;
LAB_0801d00e:
      *(undefined *)(param_1 + 0x17c) = uVar4;
      uVar5 = DAT_020301a8;
      goto LAB_0801d010;
    }
    uVar5 = DAT_020301a8;
    if (cVar1 == '\b') {
      if ((DAT_02030104 & 0x20) != 0) {
        if (0x1d0fff < *(int *)(iVar7 + 0x54)) {
          DAT_030032e1 = 0;
          sub_08021D7C(&DAT_020301b0,&DAT_0834e490);
          DAT_020301a8 = DAT_020301a8 & 0xfffe;
          *pcVar8 = '\r';
          uVar5 = DAT_020301a8;
        }
        goto LAB_0801d010;
      }
      if (*(int *)(iVar7 + 0x54) < 0x1cf000) goto LAB_0801d010;
      puVar6 = &DAT_0834da48;
      DAT_030032e1 = DAT_02030104 & 0x20;
    }
    else {
      if ((cVar1 != '\t') || (*(int *)(iVar7 + 0x54) < 0x1d1000)) {
        pcVar8 = (char *)(param_1 + 0x17c);
        if (*pcVar8 == '\n') {
          sub_0801A4CC(6);
          *pcVar8 = '\v';
          uVar5 = DAT_020301a8;
          goto LAB_0801d010;
        }
        if ((*pcVar8 == '\v') && ((DAT_020301a8 & 0x10) != 0)) {
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_08021D7C(&DAT_020301b0,&DAT_0834df98);
          DAT_020301b2 = DAT_020301b2 & 0xfd;
          DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
          *pcVar8 = '\f';
          uVar5 = DAT_020301a8;
          goto LAB_0801d010;
        }
        cVar1 = *(char *)(param_1 + 0x17c);
        if (cVar1 == '\f') {
          DAT_030032e0 = DAT_030032e0 & 0x7f;
          DAT_030032e1 = 0;
          sub_08021D7C(&DAT_020301b0,&DAT_0834e048);
          sub_0801A4CC(8);
          DAT_020301a8 = DAT_020301a8 & 0xfffe | 4;
          uVar4 = 0xd;
        }
        else if (cVar1 == '\x14') {
          iVar7 = *(int *)(param_1 + 0x180);
          if (iVar7 != 0) {
            *(int *)(param_1 + 0x180) = iVar7 + -1;
            uVar5 = DAT_020301a8;
            goto LAB_0801d010;
          }
          if (DAT_02030308 != 0xffffffff) {
            sub_080046A4(DAT_02030308 & 0xffff);
            DAT_02030308 = 0xffffffff;
          }
          DAT_020302f4 = 2;
          uVar4 = 0x15;
        }
        else {
          if ((cVar1 != '\x15') || (DAT_020302f4 != 0)) goto LAB_0801d010;
          DAT_020301a8 = DAT_020301a8 & 0xfffe | 4;
          uVar4 = 0x16;
        }
        goto LAB_0801d00e;
      }
      DAT_030032e1 = 0;
      puVar6 = &DAT_0834de80;
    }
    sub_08021D7C(&DAT_020301b0,puVar6);
    sub_0801A4CC(7);
LAB_0801cec8:
    *(undefined *)(param_1 + 0x17c) = 10;
    uVar5 = DAT_020301a8;
  }
LAB_0801d010:
  DAT_020301a8 = uVar5;
  return (ulonglong)in_lr << 0x20;
}

