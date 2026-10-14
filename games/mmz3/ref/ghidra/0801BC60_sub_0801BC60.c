// sub_0801BC60 at 0x0801BC60 (thumb)

longlong sub_0801BC60(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  char cVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint in_lr;
  
  cVar2 = DAT_020301a2;
  iVar7 = *(int *)(param_1 + 0x20);
  pcVar8 = (char *)(param_1 + 0x17c);
  cVar4 = *pcVar8;
  if (cVar4 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    bVar1 = DAT_02030104 & 0xfb;
    if ((DAT_02030104 & 0x40) == 0) {
      if (DAT_020301a2 == '\0') {
        DAT_02030109 = DAT_02030109 & 0xe1;
        DAT_02030104 = bVar1;
        sub_08021D7C(&DAT_020301b0,&DAT_0834bec4);
        sub_0801A4CC(1);
        *pcVar8 = '\x01';
        goto LAB_0801c27e;
      }
      if (DAT_020301a2 == '\x01') {
        DAT_02030104 = bVar1;
        sub_08021D7C(&DAT_020301b0,&DAT_0834bfbc);
        sub_0801A4CC(2);
        uVar3 = 2;
      }
      else {
        if (DAT_020301a2 == '\x02') {
          puVar5 = &DAT_0834c01c;
LAB_0801bd74:
          DAT_02030109 = DAT_02030109 & 0xf9;
          DAT_02030104 = bVar1;
          sub_08021D7C(&DAT_020301b0,puVar5);
          *pcVar8 = cVar2;
          goto LAB_0801c27e;
        }
        if (DAT_020301a2 == '\x03') {
          DAT_02030104 = bVar1;
          sub_08021D7C(&DAT_020301b0,&DAT_0834c1cc);
          sub_0801A4CC(4);
          uVar3 = 4;
        }
        else {
          if (DAT_020301a2 == '\x04') {
            puVar5 = &DAT_0834c224;
            goto LAB_0801bd74;
          }
          if (DAT_020301a2 == '\x05') {
            DAT_02030104 = bVar1;
            sub_08021D7C(&DAT_020301b0,&DAT_0834c28c);
            uVar3 = 6;
          }
          else if (DAT_020301a2 == '\x06') {
            DAT_02030104 = bVar1;
            sub_08021D7C(&DAT_020301b0,&DAT_0834c4a4);
            DAT_02030104 = DAT_02030104 | 4;
            uVar3 = 7;
          }
          else {
            if (DAT_020301a2 != '\a') {
              if (DAT_020301a2 == '\b') {
                DAT_02030104 = bVar1;
                sub_08021D7C(&DAT_020301b0,&DAT_0834c5bc);
                *(undefined *)(param_1 + 0x17c) = 0xd;
              }
              else {
                DAT_02030104 = bVar1;
                if (DAT_020301a2 == '\t') {
                  sub_08021D7C(&DAT_020301b0,&DAT_0834c744);
                  *(undefined *)(param_1 + 0x17c) = 0xe;
                }
              }
              goto LAB_0801c27e;
            }
            DAT_02030104 = bVar1;
            sub_08021D7C(&DAT_020301b0,&DAT_0834c554);
            DAT_02030109 = DAT_02030109 & 0xe7;
            uVar3 = 0xb;
          }
        }
      }
    }
    else {
      DAT_02030104 = bVar1;
      sub_08021D7C(&DAT_020301b0,&DAT_0834c884);
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      uVar3 = 0x14;
    }
  }
  else if (cVar4 == '\x01') {
    sub_0801A4CC(2);
    uVar3 = 2;
  }
  else {
    if ((cVar4 != '\x02') || (*(int *)(iVar7 + 0x54) < 0x3c000)) {
      cVar4 = *(char *)(param_1 + 0x17c);
      if (cVar4 == '\x03') {
        sub_0801A4CC(4);
        *(char *)(param_1 + 0x17c) = '\x04';
        goto LAB_0801c27e;
      }
      if (cVar4 == '\x04') {
        if ((DAT_02030104 & 0x10) == 0) {
          DAT_020302e8 = 0x3c0000;
        }
        else {
          DAT_020302e8 = 0x188800;
        }
        if (0x194fff < *(int *)(iVar7 + 0x54)) {
          *(undefined *)(param_1 + 0x17c) = 5;
        }
        goto LAB_0801c27e;
      }
      if ((cVar4 == '\x05') && (0x1a4fff < *(int *)(iVar7 + 0x54))) {
        puVar5 = &DAT_0834c2e4;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\x06') || (*(int *)(iVar7 + 0x54) < 0x1a5000)) {
          if (*(char *)(param_1 + 0x17c) == '\a') {
            sub_0801A4CC(5);
            uVar3 = 8;
          }
          else {
            if ((*(char *)(param_1 + 0x17c) != '\b') || ((DAT_020301a8 & 0x10) == 0)) {
              pcVar8 = (char *)(param_1 + 0x17c);
              if (*pcVar8 == '\t') {
                DAT_030032e0 = DAT_030032e0 & 0x7f;
                DAT_030032e1 = 0;
                *pcVar8 = '\n';
                goto LAB_0801c27e;
              }
              if ((*pcVar8 == '\n') && (0x1b3fff < *(int *)(iVar7 + 0x54))) {
                sub_0801A4CC(7);
                DAT_02030104 = DAT_02030104 | 4;
                *pcVar8 = '\v';
                goto LAB_0801c27e;
              }
              if (*(char *)(param_1 + 0x17c) == '\v') {
                if ((0x2b0fff < *(int *)(iVar7 + 0x54)) &&
                   (sub_08021F6C(3), DAT_02030308 != 0xffffffff)) {
                  sub_080046A4(DAT_02030308 & 0xffff);
                  DAT_02030308 = 0xffffffff;
                }
                if (0x2b2fff < *(int *)(iVar7 + 0x54)) {
                  DAT_030032e1 = DAT_030032e1 | 2;
                  if (DAT_02030308 != 0xa1) {
                    if (DAT_02030308 != 0xffffffff) {
                      sub_080046A4(DAT_02030308 & 0xffff);
                      DAT_02030308 = 0xffffffff;
                    }
                    sub_08004694(0xa1);
                    DAT_02030308 = 0xa1;
                  }
                  *(undefined *)(param_1 + 0x17c) = 0xc;
                }
                goto LAB_0801c27e;
              }
              if ((*(char *)(param_1 + 0x17c) == '\f') && (0x2c0fff < *(int *)(iVar7 + 0x54))) {
                puVar5 = &DAT_0834c614;
              }
              else {
                if ((*(char *)(param_1 + 0x17c) != '\r') || (*(int *)(iVar7 + 0x54) < 0x2c1000)) {
                  cVar4 = *(char *)(param_1 + 0x17c);
                  if (cVar4 == '\x0e') {
                    sub_0801A4CC(8);
                    *(char *)(param_1 + 0x17c) = '\x0f';
                    goto LAB_0801c27e;
                  }
                  if ((cVar4 != '\x0f') || ((DAT_020301a8 & 0x10) == 0)) {
                    if (*(char *)(param_1 + 0x17c) == '\x14') {
                      iVar7 = *(int *)(param_1 + 0x180);
                      if (iVar7 != 0) {
                        *(int *)(param_1 + 0x180) = iVar7 + -1;
                        goto LAB_0801c27e;
                      }
                      if (DAT_02030308 != 0xffffffff) {
                        sub_080046A4(DAT_02030308 & 0xffff);
                        DAT_02030308 = 0xffffffff;
                      }
                      DAT_020302f4 = 2;
                      uVar3 = 0x15;
                    }
                    else {
                      if ((*(char *)(param_1 + 0x17c) != '\x15') || (DAT_020302f4 != 0))
                      goto LAB_0801c27e;
                      DAT_020301a8 = DAT_020301a8 & 0xfffe | 4;
                      uVar3 = 0x16;
                    }
                    goto LAB_0801c27c;
                  }
                  uVar6 = (uint)DAT_02030109 << 0x18;
                  iVar7 = (~(uVar6 >> 0x19) & 1) + (~(uVar6 >> 0x1a) & 1) + (~(uVar6 >> 0x1b) & 1);
                  if ((DAT_02030109 & 0x10) == 0) {
                    if (0 < (int)DAT_02030167 + (iVar7 + 1) * -5) goto LAB_0801c182;
LAB_0801c1ba:
                    DAT_02030167 = '\0';
                  }
                  else {
                    if ((int)DAT_02030167 + iVar7 * -5 < 1) goto LAB_0801c1ba;
LAB_0801c182:
                    cVar4 = (~(DAT_02030109 >> 1) & 1) + (~(DAT_02030109 >> 2) & 1) +
                            (~(DAT_02030109 >> 3) & 1);
                    if ((DAT_02030109 & 0x10) == 0) {
                      cVar4 = cVar4 + '\x01';
                    }
                    DAT_02030167 = DAT_02030167 + cVar4 * -5;
                  }
                  DAT_030032e0 = DAT_030032e0 | 0x80;
                  DAT_030032e1 = DAT_030032e1 | 2;
                  sub_08021D7C(&DAT_020301b0,&DAT_0834c7c4);
                  DAT_020301b2 = DAT_020301b2 & 0xfd;
                  DAT_020301a8 = DAT_020301a8 & 0xffef | 4;
                  *(undefined *)(param_1 + 0x17c) = 0x10;
                  goto LAB_0801c27e;
                }
                puVar5 = &DAT_0834c6bc;
              }
              DAT_030032e1 = 0;
              sub_08021D7C(&DAT_020301b0,puVar5);
              sub_0801A4CC(9);
              *(undefined *)(param_1 + 0x17c) = 0xe;
              goto LAB_0801c27e;
            }
            DAT_030032e0 = DAT_030032e0 | 0x80;
            DAT_030032e1 = DAT_030032e1 | 2;
            sub_08021D7C(&DAT_020301b0,&DAT_0834c4fc);
            DAT_020301b2 = DAT_020301b2 & 0xfd;
            DAT_02030104 = DAT_02030104 & 0xfb;
            DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
            uVar3 = 9;
          }
          goto LAB_0801c27c;
        }
        puVar5 = &DAT_0834c43c;
      }
      sub_08021D7C(&DAT_020301b0,puVar5);
      sub_0801A4CC(6);
      DAT_02030104 = DAT_02030104 | 4;
      *(undefined *)(param_1 + 0x17c) = 7;
      goto LAB_0801c27e;
    }
    sub_08021D7C(&DAT_020301b0,&DAT_0834c074);
    sub_0801A4CC(3);
    uVar3 = 3;
  }
LAB_0801c27c:
  *(undefined *)(param_1 + 0x17c) = uVar3;
LAB_0801c27e:
  return (ulonglong)in_lr << 0x20;
}

