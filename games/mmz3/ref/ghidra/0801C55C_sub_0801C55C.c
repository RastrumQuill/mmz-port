// sub_0801C55C at 0x0801C55C (thumb)

longlong sub_0801C55C(int param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  uint in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar3 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    bVar2 = DAT_02030104 & 0xfb;
    if ((DAT_02030104 & 0x40) != 0) {
      DAT_02030104 = bVar2;
      sub_08021D7C(&DAT_020301b0,&DAT_0834d19c);
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      *pcVar3 = '\x14';
      goto LAB_0801caa6;
    }
    if (DAT_020301a2 == '\0') {
      DAT_02030109 = DAT_02030109 & 0x1f;
      DAT_0203010a = DAT_0203010a & 0xfe;
      if ((DAT_02030104 & 0x20) == 0) {
        DAT_02030104 = bVar2;
        sub_08021D7C(&DAT_020301b0,&DAT_0834cafc);
      }
      else {
        DAT_02030104 = bVar2;
        sub_08021D7C(&DAT_020301b0,&DAT_0834d1dc);
      }
      sub_0801A4CC(1);
      *(undefined *)(param_1 + 0x17c) = 1;
      goto LAB_0801caa6;
    }
    if (DAT_020301a2 == '\x01') {
      DAT_02030104 = bVar2;
      sub_08021D7C(&DAT_020301b0,&DAT_0834cbbc);
      goto LAB_0801c6c0;
    }
    if (DAT_020301a2 == '\x02') {
      DAT_02030104 = bVar2;
      sub_08021D7C(&DAT_020301b0,&DAT_0834cc1c);
      *pcVar3 = '\x02';
      goto LAB_0801caa6;
    }
    if (DAT_020301a2 != '\x03') {
      if (DAT_020301a2 == '\x04') {
        DAT_02030104 = bVar2;
        sub_08021D7C(&DAT_020301b0,&DAT_0834cd8c);
        *pcVar3 = '\x06';
      }
      else if (DAT_020301a2 == '\x05') {
        DAT_02030104 = bVar2;
        sub_08021D7C(&DAT_020301b0,&DAT_0834cde4);
        *pcVar3 = '\b';
      }
      else {
        DAT_02030104 = bVar2;
        if (DAT_020301a2 == '\x06') {
          sub_08021D7C(&DAT_020301b0,&DAT_0834d03c);
          *pcVar3 = '\t';
        }
      }
      goto LAB_0801caa6;
    }
    DAT_02030104 = bVar2;
    sub_08021D7C(&DAT_020301b0,&DAT_0834cc74);
  }
  else {
    if (cVar1 != '\x01') {
      if ((cVar1 == '\x02') && (0xf0fff < *(int *)(iVar4 + 0x54))) {
        sub_08021D7C(&DAT_020301b0,&DAT_0834cccc);
        sub_0801A4CC(3);
        DAT_02030104 = DAT_02030104 | 4;
        *pcVar3 = '\x03';
        goto LAB_0801caa6;
      }
      if ((*(char *)(param_1 + 0x17c) == '\x03') && ((DAT_020301a8 & 0x10) != 0)) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_08021D7C(&DAT_020301b0,&DAT_0834cd44);
        DAT_020301b2 = DAT_020301b2 & 0xfd;
        DAT_02030104 = DAT_02030104 & 0xfb;
        DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
        *(char *)(param_1 + 0x17c) = '\x04';
        goto LAB_0801caa6;
      }
      pcVar3 = (char *)(param_1 + 0x17c);
      if (*pcVar3 == '\x04') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        *pcVar3 = '\x05';
        goto LAB_0801caa6;
      }
      if ((*pcVar3 == '\x05') && (0xfffff < *(int *)(iVar4 + 0x54))) {
        sub_0801A4CC(4);
        DAT_02030104 = DAT_02030104 | 4;
        *pcVar3 = '\x06';
        goto LAB_0801caa6;
      }
      cVar1 = *(char *)(param_1 + 0x17c);
      if (cVar1 == '\x06') {
        if (0x1a2fff < *(int *)(iVar4 + 0x54)) {
          if ((DAT_02030104 & 0x20) == 0) {
            if (DAT_02030308 != 0xffffffff) {
              sub_080046A4(DAT_02030308 & 0xffff);
              DAT_02030308 = 0xffffffff;
            }
          }
          else {
            DAT_030032e1 = DAT_030032e1 | 2;
            *(char *)(param_1 + 0x17c) = '\a';
          }
        }
        if (0x1a4fff < *(int *)(iVar4 + 0x54)) {
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
        }
        goto LAB_0801caa6;
      }
      if ((cVar1 == '\a') && (0x1b2fff < *(int *)(iVar4 + 0x54))) {
        DAT_030032e1 = 0;
        if ((DAT_02030104 & 0x20) == 0) {
          sub_08021D7C(&DAT_020301b0,&DAT_0834ce3c);
        }
        else {
          sub_08021D7C(&DAT_020301b0,&DAT_0834d254);
          DAT_020301a8 = DAT_020301a8 & 0xfffe;
        }
        sub_0801A4CC(6);
      }
      else {
        if ((*(char *)(param_1 + 0x17c) == '\b') && (0x1b2fff < *(int *)(iVar4 + 0x54))) {
          DAT_030032e1 = 0;
          sub_08021D7C(&DAT_020301b0,&DAT_0834cf64);
          sub_0801A4CC(6);
          *(char *)(param_1 + 0x17c) = '\t';
          goto LAB_0801caa6;
        }
        cVar1 = *(char *)(param_1 + 0x17c);
        if (cVar1 == '\t') {
          sub_0801A4CC(5);
          *(char *)(param_1 + 0x17c) = '\n';
          goto LAB_0801caa6;
        }
        if ((cVar1 != '\n') || ((DAT_020301a8 & 0x10) == 0)) {
          cVar1 = *(char *)(param_1 + 0x17c);
          if (cVar1 == '\x14') {
            iVar4 = *(int *)(param_1 + 0x180);
            if (iVar4 != 0) {
              *(int *)(param_1 + 0x180) = iVar4 + -1;
              goto LAB_0801caa6;
            }
            if (DAT_02030308 != 0xffffffff) {
              sub_080046A4(DAT_02030308 & 0xffff);
              DAT_02030308 = 0xffffffff;
            }
            DAT_020302f4 = 2;
            cVar1 = '\x15';
          }
          else {
            if ((cVar1 != '\x15') || (DAT_020302f4 != 0)) goto LAB_0801caa6;
            DAT_020301a8 = DAT_020301a8 & 0xfffe | 4;
            cVar1 = '\x16';
          }
          *(char *)(param_1 + 0x17c) = cVar1;
          goto LAB_0801caa6;
        }
        iVar4 = (~(((uint)DAT_02030109 << 0x18) >> 0x1d) & 1) +
                (~(((uint)DAT_02030109 << 0x18) >> 0x1e) & 1);
        if ((DAT_02030109 & 0x80) == 0) {
          if (0 < (int)((int)DAT_02030167 + (iVar4 + (~(uint)DAT_0203010a & 1) + 1) * -5))
          goto LAB_0801c9b4;
LAB_0801c9ec:
          DAT_02030167 = '\0';
        }
        else {
          if ((int)((int)DAT_02030167 + (iVar4 + (~(uint)DAT_0203010a & 1)) * -5) < 1)
          goto LAB_0801c9ec;
LAB_0801c9b4:
          bVar2 = ~DAT_0203010a & 1;
          if ((DAT_02030109 & 0x80) == 0) {
            bVar2 = bVar2 + 1;
          }
          DAT_02030167 = DAT_02030167 +
                         ((~(DAT_02030109 >> 5) & 1) + (~(DAT_02030109 >> 6) & 1) + bVar2) * -5;
        }
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_08021D7C(&DAT_020301b0,&DAT_0834d0dc);
        DAT_020301b2 = DAT_020301b2 & 0xfd;
        DAT_020301a8 = DAT_020301a8 & 0xffef | 4;
      }
      *(undefined *)(param_1 + 0x17c) = 9;
      goto LAB_0801caa6;
    }
LAB_0801c6c0:
    sub_0801A4CC(2);
  }
  *pcVar3 = '\x02';
LAB_0801caa6:
  return (ulonglong)in_lr << 0x20;
}

