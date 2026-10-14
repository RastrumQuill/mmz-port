// sub_0801D034 at 0x0801D034 (thumb)

longlong sub_0801D034(int param_1)

{
  char cVar1;
  undefined uVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  uint in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar5 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar5;
  if (cVar1 == '\0') {
    uVar3 = DAT_020301a8 | 1;
    if (DAT_020301a2 == '\0') {
      DAT_020301a8 = uVar3;
      sub_08021D7C(&DAT_020301b0,&DAT_0834e784);
      sub_0801A4CC(1);
      *pcVar5 = '\x01';
      uVar3 = DAT_020301a8;
      goto LAB_0801d5d0;
    }
    if (DAT_020301a2 == '\x01') {
      DAT_020301a8 = uVar3;
      sub_08021D7C(&DAT_020301b0,&DAT_0834e844);
      sub_0801A4CC(2);
      uVar2 = 2;
    }
    else {
      if (DAT_020301a2 == '\x02') {
        DAT_020301a8 = uVar3;
        sub_08021D7C(&DAT_020301b0,&DAT_0834e8a4);
        *pcVar5 = '\x02';
        uVar3 = DAT_020301a8;
        goto LAB_0801d5d0;
      }
      if (DAT_020301a2 == '\x03') {
        DAT_020301a8 = uVar3;
        sub_08021D7C(&DAT_020301b0,&DAT_0834eae4);
        sub_0801A4CC(4);
        uVar2 = 5;
      }
      else if (DAT_020301a2 == '\x04') {
        DAT_020301a8 = uVar3;
        sub_08021D7C(&DAT_020301b0,&DAT_0834eb3c);
        uVar2 = 5;
      }
      else if (DAT_020301a2 == '\x05') {
        DAT_020301a8 = uVar3;
        sub_08021D7C(&DAT_020301b0,&DAT_0834ecac);
        uVar2 = 0x11;
      }
      else if (DAT_020301a2 == '\x06') {
        DAT_020301a8 = uVar3;
        sub_08021D7C(&DAT_020301b0,&DAT_0834ef9c);
        uVar2 = 0x12;
      }
      else if (DAT_020301a2 == '\a') {
        DAT_020301a8 = uVar3;
        sub_08021D7C(&DAT_020301b0,&DAT_0834f214);
        uVar2 = 0x14;
      }
      else {
        if (DAT_020301a2 != '\b') goto LAB_0801d5d0;
        DAT_020301a8 = DAT_020301a8 & 0xfffe;
LAB_0801d5cc:
        uVar2 = 0x15;
      }
    }
  }
  else if (cVar1 == '\x01') {
    sub_0801A4CC(2);
    uVar2 = 2;
  }
  else if (((cVar1 == '\x02') && (0x7c7ff < *(int *)(iVar4 + 0x54))) &&
          (*(int *)(iVar4 + 0x58) < 0x13000)) {
    DAT_030032e1 = DAT_030032e1 | 2;
    uVar2 = 3;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x03') {
      DAT_030032e1 = 0;
      sub_08021D7C(&DAT_020301b0,&DAT_0834e8fc);
      sub_0801A4CC(3);
      uVar2 = 4;
    }
    else if (cVar1 == '\x04') {
      sub_0801A4CC(4);
      uVar2 = 5;
    }
    else if ((cVar1 == '\x05') && (*(int *)(iVar4 + 0x54) < 0x101001)) {
      DAT_030032e1 = DAT_030032e1 | 2;
      uVar2 = 6;
    }
    else if (*(char *)(param_1 + 0x17c) == '\x06') {
      DAT_030032e1 = 0;
      sub_08021D7C(&DAT_020301b0,&DAT_0834ebcc);
      uVar2 = 7;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\a') && (0x66000 < *(int *)(iVar4 + 0x58))) {
      sub_0801A7D8(&DAT_02030288,6);
      DAT_020302a1 = 4;
      DAT_020302aa = 0;
      DAT_020302e8 = 0x3c0000;
      DAT_020302ec = 0x62000;
      uVar2 = 8;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x17c);
      uVar3 = DAT_020301a8;
      if (cVar1 == '\b') {
        if (*(int *)(iVar4 + 0x54) < 0x106800) goto LAB_0801d5d0;
        DAT_020302e4 = 0xff000;
        DAT_0202f4a5 = 0;
        uVar2 = 9;
      }
      else if (cVar1 == '\t') {
        if (*(int *)(iVar4 + 0x54) < 0x125000) goto LAB_0801d5d0;
        DAT_020302e4 = 0x11d800;
        DAT_030032e1 = DAT_030032e1 | 2;
        DAT_0202f4a5 = 1;
        uVar2 = 10;
      }
      else if (cVar1 == '\n') {
        DAT_030032e1 = 0;
        if (*(int *)(iVar4 + 0x54) < 0x133800) goto LAB_0801d5d0;
        DAT_020302e4 = 0x12c000;
        DAT_0202f4a5 = 0;
        uVar2 = 0xb;
      }
      else if (cVar1 == '\v') {
        if (*(int *)(iVar4 + 0x54) < 0x152000) goto LAB_0801d5d0;
        DAT_020302e4 = 0x14a800;
        DAT_030032e1 = DAT_030032e1 | 2;
        DAT_0202f4a5 = 2;
        uVar2 = 0xc;
      }
      else if (cVar1 == '\f') {
        DAT_030032e1 = 0;
        if (*(int *)(iVar4 + 0x54) < 0x160800) goto LAB_0801d5d0;
        DAT_020302e4 = 0x159000;
        DAT_0202f4a5 = 0;
        uVar2 = 0xd;
      }
      else if (cVar1 == '\r') {
        if (*(int *)(iVar4 + 0x54) < 0x17f000) goto LAB_0801d5d0;
        DAT_020302e4 = 0x177800;
        DAT_030032e1 = DAT_030032e1 | 2;
        DAT_0202f4a5 = 3;
        uVar2 = 0xe;
      }
      else if (cVar1 == '\x0e') {
        DAT_030032e1 = 0;
        if (*(int *)(iVar4 + 0x54) < 0x18d800) goto LAB_0801d5d0;
        DAT_020302e4 = 0x186000;
        DAT_0202f4a5 = 0;
        uVar2 = 0xf;
      }
      else {
        if (cVar1 == '\x0f') {
          if ((0x193fff < *(int *)(iVar4 + 0x54)) && (DAT_02030308 != 0xffffffff)) {
            sub_080046A4(DAT_02030308 & 0xffff);
            DAT_02030308 = 0xffffffff;
          }
          uVar3 = DAT_020301a8;
          if (0x195fff < *(int *)(iVar4 + 0x54)) {
            DAT_030032e1 = DAT_030032e1 | 2;
            if (DAT_02030308 != 0xa1) {
              if (DAT_02030308 != 0xffffffff) {
                sub_080046A4(DAT_02030308 & 0xffff);
                DAT_02030308 = 0xffffffff;
              }
              sub_08004694(0xa1);
              DAT_02030308 = 0xa1;
            }
            *(undefined *)(param_1 + 0x17c) = 0x10;
            uVar3 = DAT_020301a8;
          }
          goto LAB_0801d5d0;
        }
        if ((cVar1 == '\x10') && (0x1a3fff < *(int *)(iVar4 + 0x54))) {
          DAT_030032e1 = 0;
          sub_08021D7C(&DAT_020301b0,&DAT_0834ed04);
          sub_0801A4CC(6);
          uVar2 = 0x12;
        }
        else if ((*(char *)(param_1 + 0x17c) == '\x11') && (0x1a3fff < *(int *)(iVar4 + 0x54))) {
          DAT_030032e1 = 0;
          sub_08021D7C(&DAT_020301b0,&DAT_0834eedc);
          sub_0801A4CC(6);
          uVar2 = 0x12;
        }
        else if (*(char *)(param_1 + 0x17c) == '\x12') {
          sub_0801A4CC(5);
          uVar2 = 0x13;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\x13') || ((DAT_020301a8 & 0x10) == 0)) {
            if (*(char *)(param_1 + 0x17c) != '\x14') goto LAB_0801d5d0;
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_030032e1 = 0;
            sub_08021D7C(&DAT_020301b0,&DAT_0834f244);
            sub_0801A4CC(8);
            DAT_020301a8 = DAT_020301a8 & 0xfffe;
            goto LAB_0801d5cc;
          }
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_08021D7C(&DAT_020301b0,&DAT_0834f01c);
          DAT_020301b2 = DAT_020301b2 & 0xfd;
          DAT_020301a8 = DAT_020301a8 & 0xffef | 5;
          sub_0801A500(7);
          uVar2 = 0x14;
        }
      }
    }
  }
  *(undefined *)(param_1 + 0x17c) = uVar2;
  uVar3 = DAT_020301a8;
LAB_0801d5d0:
  DAT_020301a8 = uVar3;
  return (ulonglong)in_lr << 0x20;
}

