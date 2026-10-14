// sub_08020284 at 0x08020284 (thumb)

void sub_08020284(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  cVar1 = DAT_020301a2;
  iVar7 = *(int *)(param_1 + 0x20);
  iVar3 = 0x17c;
  pcVar6 = (char *)(param_1 + 0x17c);
  cVar2 = *pcVar6;
  if (cVar2 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    bVar5 = DAT_02030104 & 0xfb;
    if (DAT_020301a2 == '\0') {
      if ((DAT_02030104 & 0x20) == 0) {
        DAT_02030104 = bVar5;
        sub_08021D7C(&DAT_020301b0,&DAT_083549c8);
      }
      else {
        DAT_02030104 = bVar5;
        sub_08021D7C(&DAT_020301b0,&DAT_083554e0);
      }
      sub_0801A4CC(1);
      *(undefined *)(param_1 + 0x17d) = 0;
      *(undefined *)(param_1 + 0x17c) = 1;
      return;
    }
    if (DAT_020301a2 == '\x01') {
      DAT_02030104 = bVar5;
      sub_08021D7C(&DAT_020301b0,&DAT_08354a50);
      sub_0801A4CC(2);
      *(undefined *)(param_1 + 0x17d) = 0;
      cVar2 = '\x02';
    }
    else {
      if (DAT_020301a2 == '\x02') {
        DAT_02030104 = bVar5;
        sub_08021D7C(&DAT_020301b0,&DAT_08354ab0);
        *(undefined *)(param_1 + 0x17d) = 0;
        *pcVar6 = '\x02';
        return;
      }
      if (DAT_020301a2 == '\x03') {
        DAT_02030104 = bVar5;
        sub_08021D7C(&DAT_020301b0,&DAT_08354b08);
        DAT_02030104 = DAT_02030104 | 0x10;
        sub_080EDCEC();
        *(undefined *)(param_1 + 0x17d) = 1;
        *pcVar6 = '\x02';
        return;
      }
      if (DAT_020301a2 == '\x04') {
        DAT_02030104 = bVar5;
        sub_08021D7C(&DAT_020301b0,&DAT_08354ca0);
        DAT_02030104 = DAT_02030104 | 0x10;
        sub_080EDCEC();
        *(undefined *)(param_1 + 0x17d) = 2;
        *pcVar6 = '\x03';
        return;
      }
      if (DAT_020301a2 == '\x05') {
        DAT_02030104 = bVar5;
        sub_08021D7C(&DAT_020301b0,&DAT_08354e40);
        cVar2 = '\x04';
      }
      else {
        if (DAT_020301a2 != '\x06') {
          if (DAT_020301a2 == '\a') {
            puVar4 = &DAT_08354ef0;
          }
          else {
            if (DAT_020301a2 != '\b') {
              DAT_02030104 = bVar5;
              return;
            }
            puVar4 = &DAT_083552b8;
          }
          DAT_02030104 = bVar5;
          sub_08021D7C(&DAT_020301b0,puVar4);
          *pcVar6 = cVar1;
          return;
        }
        DAT_02030104 = bVar5;
        sub_08021D7C(&DAT_020301b0,&DAT_08354e98);
        cVar2 = '\x05';
      }
    }
  }
  else if (cVar2 == '\x01') {
    sub_0801A4CC(2);
    cVar2 = '\x02';
  }
  else if (cVar2 == '\x02') {
    if (*(int *)(iVar7 + 0x54) < 0x69000) {
      if (*(int *)(iVar7 + 0x54) < 0x5a000) {
        return;
      }
      cVar2 = '\x04';
    }
    else {
      sub_0801A4CC(4);
      cVar2 = '\x03';
    }
  }
  else if (cVar2 == '\x03') {
    pcVar6 = (char *)(param_1 + 0x17d);
    cVar2 = *pcVar6;
    if (cVar2 == '\0') {
      sub_08021D7C(&DAT_020301b0,&DAT_08354b70);
      cVar2 = '\x02';
    }
    else {
      if (cVar2 != '\x01') {
        if (cVar2 == '\x02') {
          sub_0801A4CC(3);
          *pcVar6 = '\x03';
          return;
        }
        if (cVar2 == '\x03') {
          if ((DAT_020301a8 & 0x10) == 0) {
            return;
          }
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_08021D7C(&DAT_020301b0,&DAT_08354d28);
          DAT_020301b2 = DAT_020301b2 & 0xfd;
          DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
          DAT_02030106 = DAT_02030106 | 0x80;
          DAT_02030104 = DAT_02030104 | 4;
          if (DAT_02030167 + 5 < 1) {
            DAT_02030167 = '\0';
          }
          else {
            DAT_02030167 = DAT_02030167 + '\x05';
          }
          iVar3 = 0x17d;
        }
        else {
          if (cVar2 == '\x04') {
            local_28 = 0x16000;
            local_24 = 0x42000;
            sub_08024FE4(0xf,&local_28);
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_030032e1 = 0;
            cVar2 = '\x05';
            goto LAB_080207b4;
          }
          if (cVar2 != '\x05') {
            return;
          }
          if (((*(byte *)(DAT_0203df90 + 1) & 0xf) >> 1 & 1) != 0) {
            DAT_02030104 = DAT_02030104 & 0xfb;
          }
          if (*(int *)(iVar7 + 0x54) < 0x1e000) {
            return;
          }
          sub_0801A4CC(5);
          *pcVar6 = '\x06';
        }
        *(undefined *)(param_1 + iVar3) = 4;
        return;
      }
      sub_08021D7C(&DAT_020301b0,&DAT_08354c18);
      cVar2 = '\x02';
    }
  }
  else if (cVar2 == '\x04') {
    if (*(int *)(iVar7 + 0x54) < 0x5a000) {
      return;
    }
    sub_0801A4CC(6);
    cVar2 = '\x05';
  }
  else {
    if (cVar2 == '\x05') {
      if (0xd0fff < *(int *)(iVar7 + 0x54)) {
        if ((DAT_02030104 & 0x20) == 0) {
          if (DAT_02030308 != 0xffffffff) {
            sub_080046A4(DAT_02030308 & 0xffff);
            DAT_02030308 = 0xffffffff;
          }
        }
        else {
          DAT_030032e1 = DAT_030032e1 | 2;
          *pcVar6 = '\x06';
        }
      }
      if (*(int *)(iVar7 + 0x54) < 0xd3000) {
        return;
      }
      DAT_030032e1 = DAT_030032e1 | 2;
      if (DAT_02030308 != 0xa1) {
        if (DAT_02030308 != 0xffffffff) {
          sub_080046A4(DAT_02030308 & 0xffff);
          DAT_02030308 = 0xffffffff;
        }
        sub_08004694(0xa1);
        DAT_02030308 = 0xa1;
      }
      *(undefined *)(param_1 + 0x17c) = 6;
      return;
    }
    if ((cVar2 == '\x06') && (0xe0fff < *(int *)(iVar7 + 0x54))) {
      DAT_030032e1 = 0;
      if ((DAT_02030104 & 0x20) == 0) {
        sub_08021D7C(&DAT_020301b0,&DAT_08354f48);
      }
      else {
        sub_08021D7C(&DAT_020301b0,&DAT_08355558);
        DAT_020301a8 = DAT_020301a8 & 0xfffe;
      }
      sub_0801A4CC(8);
      *(undefined *)(param_1 + 0x17c) = 8;
      return;
    }
    if ((*(char *)(param_1 + 0x17c) == '\a') && (0xe0fff < *(int *)(iVar7 + 0x54))) {
      sub_08021D7C(&DAT_020301b0,&DAT_083551f8);
      sub_0801A4CC(8);
      *(char *)(param_1 + 0x17c) = '\b';
      return;
    }
    pcVar6 = (char *)(param_1 + 0x17c);
    if (*pcVar6 == '\b') {
      sub_0801A4CC(7);
      cVar2 = '\t';
    }
    else {
      if (*pcVar6 != '\t') {
        return;
      }
      if ((DAT_020301a8 & 0x10) == 0) {
        return;
      }
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_08021D7C(&DAT_020301b0,&DAT_08355338);
      DAT_020301b2 = DAT_020301b2 & 0xfd;
      DAT_020301a8 = DAT_020301a8 & 0xffef | 4;
      cVar2 = '\n';
    }
  }
LAB_080207b4:
  *pcVar6 = cVar2;
  return;
}

