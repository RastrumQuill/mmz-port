// sub_0801AED0 at 0x0801AED0 (thumb)

/* WARNING: Restarted to delay deadcode elimination for space: ram */

longlong sub_0801AED0(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  uint in_lr;
  
  iVar7 = *(int *)(param_1 + 0x20);
  if (((byte)(*(char *)(param_1 + 0x17c) - 6U) < 3) &&
     (uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3, DAT_0202f608 = uVar4 & 0x7fffffff,
     (uVar4 * 2 >> 0x11 & 0x7f) == 0)) {
    iVar5 = sub_080047C0(0x13f);
    if (iVar5 == 0) {
      sub_0800471C(0x13f);
    }
    sub_0801ACF8(4,iVar7 + 0x54);
  }
  pcVar8 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar8;
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    bVar2 = DAT_02030104 | 4;
    if ((DAT_02030104 & 0x40) != 0) {
      DAT_02030104 = bVar2;
      sub_08021D7C(&DAT_020301b0,&DAT_08349d68);
      *pcVar8 = '\x14';
      goto LAB_0801b2f4;
    }
    if (DAT_020301a2 == '\0') {
      DAT_02030104 = bVar2;
      sub_08021D7C(&DAT_020301b0,&DAT_08349d68);
      sub_0801A4CC(1);
      *pcVar8 = '\x01';
      goto LAB_0801b2f4;
    }
    DAT_02030104 = bVar2;
    if (DAT_020301a2 != '\x01') {
      if (DAT_020301a2 != '\x02') {
        if (DAT_020301a2 == '\x03') {
          sub_08021D7C(&DAT_020301b0,&DAT_0834a1c8);
          *pcVar8 = '\x03';
        }
        else if (DAT_020301a2 == '\x04') {
          sub_08021D7C(&DAT_020301b0,&DAT_0834a748);
          *pcVar8 = '\x05';
        }
        else if (DAT_020301a2 == '\x05') {
          sub_08021D7C(&DAT_020301b0,&DAT_0834a790);
          *pcVar8 = '\x06';
        }
        else if (DAT_020301a2 == '\x06') {
          sub_08021D7C(&DAT_020301b0,&DAT_0834ad78);
          *pcVar8 = '\b';
        }
        else if (DAT_020301a2 == '\a') {
          sub_08021D7C(&DAT_020301b0,&DAT_0834a7e8);
          DAT_02030104 = DAT_02030104 & 0xfb;
          *pcVar8 = '\t';
        }
        else if (DAT_020301a2 == '\b') {
          sub_08021D7C(&DAT_020301b0,&DAT_0834b378);
          DAT_020301a8 = DAT_020301a8 & 0xfffe | 4;
          *(undefined *)(param_1 + 0x17c) = 0xb;
        }
        goto LAB_0801b2f4;
      }
      goto LAB_0801b0b2;
    }
  }
  else if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      if ((cVar1 == '\x03') && (0xc6fff < *(int *)(iVar7 + 0x54))) {
        DAT_030032e1 = DAT_030032e1 | 2;
        DAT_030032e0 = DAT_030032e0 | 0x80;
        *pcVar8 = '\x04';
      }
      else {
        pcVar8 = (char *)(param_1 + 0x17c);
        cVar1 = *pcVar8;
        if (cVar1 == '\x04') {
          DAT_030032e1 = 0;
          sub_08021D7C(&DAT_020301b0,&DAT_0834a220);
          sub_0801A4CC(4);
          *pcVar8 = '\x05';
        }
        else if (cVar1 == '\x05') {
          DAT_030032e0 = DAT_030032e0 & 0x7f;
          sub_0801A4CC(5);
          *pcVar8 = '\x06';
        }
        else if ((cVar1 == '\x06') && (*(int *)(iVar7 + 0x58) < 0x14000)) {
          if ((0xdffff < *(int *)(iVar7 + 0x54)) && (DAT_02030308 != 0xffffffff)) {
            sub_080046A4(DAT_02030308 & 0xffff);
            DAT_02030308 = 0xffffffff;
          }
          if (0xe1fff < *(int *)(iVar7 + 0x54)) {
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
        }
        else {
          if ((*(char *)(param_1 + 0x17c) == '\a') && (0xedfff < *(int *)(iVar7 + 0x54))) {
            DAT_030032e1 = 0;
            puVar6 = &DAT_0834a840;
          }
          else {
            cVar1 = *(char *)(param_1 + 0x17c);
            if (cVar1 == '\b') {
              sub_0801A4CC(7);
              *(char *)(param_1 + 0x17c) = '\n';
              goto LAB_0801b2f4;
            }
            if ((cVar1 != '\t') || (*(int *)(iVar7 + 0x54) < 0xf0000)) {
              if ((*(char *)(param_1 + 0x17c) == '\n') && ((DAT_020301a8 & 0x10) != 0)) {
                DAT_030032e0 = DAT_030032e0 | 0x80;
                DAT_030032e1 = DAT_030032e1 | 2;
                sub_08021D7C(&DAT_020301b0,&DAT_0834ae00);
                DAT_020301b2 = DAT_020301b2 & 0xfd;
                DAT_020301a8 = DAT_020301a8 & 0xffef | 4;
                sub_0801A500(8);
                uVar3 = 0xb;
              }
              else {
                if (*(char *)(param_1 + 0x17c) != '\x14') goto LAB_0801b2f4;
                sub_08021D7C(&DAT_020301b0,&DAT_08349de0);
                DAT_020301a8 = DAT_020301a8 & 0xfffe | 4;
                uVar3 = 0x15;
              }
              *(undefined *)(param_1 + 0x17c) = uVar3;
              goto LAB_0801b2f4;
            }
            puVar6 = &DAT_0834acb0;
          }
          sub_08021D7C(&DAT_020301b0,puVar6);
          sub_0801A4CC(6);
          *(undefined *)(param_1 + 0x17c) = 8;
        }
      }
      goto LAB_0801b2f4;
    }
LAB_0801b0b2:
    sub_08021D7C(&DAT_020301b0,&DAT_0834a150);
    sub_0801A4CC(3);
    *pcVar8 = '\x03';
    goto LAB_0801b2f4;
  }
  sub_08021D7C(&DAT_020301b0,&DAT_08349de0);
  sub_0801A4CC(2);
  *pcVar8 = '\x02';
LAB_0801b2f4:
  return (ulonglong)in_lr << 0x20;
}

