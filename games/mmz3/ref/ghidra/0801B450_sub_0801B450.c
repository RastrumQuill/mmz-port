// sub_0801B450 at 0x0801B450 (thumb)

longlong sub_0801B450(int param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  uint *puVar12;
  ushort *puVar13;
  char *pcVar14;
  uint in_lr;
  
  cVar3 = DAT_020301a2;
  iVar5 = *(int *)(param_1 + 0x20);
  pcVar14 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar14;
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    bVar2 = DAT_02030104 & 0xfb;
    if ((DAT_02030104 & 0x40) != 0) {
      DAT_02030104 = bVar2;
      sub_08021D7C(&DAT_020301b0,&DAT_0834bbc0);
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      uVar4 = 0x14;
      goto LAB_0801bba4;
    }
    if (DAT_020301a2 == '\0') {
      DAT_02030152 = 0;
      DAT_02030153 = 0;
      if ((DAT_02030104 & 0x20) == 0) {
        DAT_02030104 = bVar2;
        sub_08021D7C(&DAT_020301b0,&DAT_0834b590);
      }
      else {
        DAT_02030104 = bVar2;
        sub_08021D7C(&DAT_020301b0,&DAT_0834bc00);
      }
      sub_0801A4CC(1);
      *(undefined *)(param_1 + 0x17c) = 1;
      goto LAB_0801bba6;
    }
    if (DAT_020301a2 == '\x01') {
      DAT_02030104 = bVar2;
      sub_08021D7C(&DAT_020301b0,&DAT_0834b650);
      sub_0801A4CC(2);
      uVar4 = 2;
      goto LAB_0801bba4;
    }
    if (DAT_020301a2 == '\x02') {
      puVar10 = &DAT_0834b6b0;
LAB_0801b554:
      DAT_02030104 = bVar2;
      sub_08021D7C(&DAT_020301b0,puVar10);
      *pcVar14 = cVar3;
    }
    else {
      if (DAT_020301a2 == '\x03') {
        DAT_02030152 = 0;
        DAT_02030153 = 0;
        puVar10 = &DAT_0834b708;
        goto LAB_0801b554;
      }
      if (DAT_020301a2 == '\x04') {
        DAT_02030104 = bVar2;
        sub_08021D7C(&DAT_020301b0,&DAT_0834b760);
        uVar4 = 3;
        goto LAB_0801bba4;
      }
      if (DAT_020301a2 != '\x05') {
        if (DAT_020301a2 == '\x06') {
          DAT_02030104 = bVar2;
          sub_08021D7C(&DAT_020301b0,&DAT_0834b898);
          uVar4 = 7;
        }
        else {
          DAT_02030104 = bVar2;
          if (DAT_020301a2 != '\a') goto LAB_0801bba6;
          sub_08021D7C(&DAT_020301b0,&DAT_0834ba70);
          uVar4 = 8;
        }
        goto LAB_0801bba4;
      }
      DAT_02030104 = bVar2;
      sub_08021D7C(&DAT_020301b0,&DAT_0834b840);
      DAT_02030104 = DAT_02030104 | 4;
      *pcVar14 = '\x05';
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        if (0x1dffff < *(int *)(iVar5 + 0x54)) {
          if (*(int *)(iVar5 + 0x58) < 0x32000) {
            DAT_020302e8 = 0x20d000;
          }
          else {
            DAT_020302e8 = 0x3c0000;
          }
        }
        if (0x20dfff < *(int *)(iVar5 + 0x54)) {
          sub_0801A4CC(3);
          *(undefined *)(param_1 + 0x17c) = 3;
        }
      }
      else if (cVar1 == '\x03') {
        if (0x21cfff < *(int *)(iVar5 + 0x54)) {
          bVar2 = *(byte *)(param_1 + 0x17d);
          if (bVar2 == 1) {
            puVar12 = (uint *)(param_1 + 0x180);
            if (*puVar12 < 0x2d) {
              *puVar12 = *puVar12 + 1;
            }
            else {
              puVar13 = (ushort *)(param_1 + 0x17e);
              if (*puVar13 < 1000) {
                uVar11 = DAT_0202f608 * 0x343fd + 0x269ec3;
                uVar8 = uVar11 & 0x7fffffff;
                DAT_0202f608 = uVar8;
                iVar9 = sub_080FE4D8(uVar11 * 2 >> 0x11,0x5800);
                uVar11 = uVar8 * 0x343fd + 0x269ec3;
                DAT_0202f608 = uVar11 & 0x7fffffff;
                iVar6 = sub_080FE4D8(uVar11 * 2 >> 0x11,0x6000);
                iVar9 = sub_0807C914(iVar9 * 2 + 0x21e000,iVar6 + 0x34000,~*puVar13 & 1);
                (&DAT_02030328)[*puVar13 + 1] = iVar9;
                if (iVar9 != 0) {
                  *puVar12 = 0;
                  *puVar13 = *puVar13 + 1;
                }
              }
            }
            uVar11 = 0;
            if (*(ushort *)(param_1 + 0x17e) != 0) {
              do {
                piVar7 = (int *)((int)&DAT_0203032c + ((int)(uVar11 * 0x10000) >> 0xe));
                if (*piVar7 != 0) {
                  bVar2 = *(byte *)(*piVar7 + 0xc);
                  if (bVar2 < 3) {
                    if (1 < bVar2) {
                      *piVar7 = 0;
                      DAT_02030328._0_2_ = (ushort)DAT_02030328 + 1;
                    }
                  }
                  else {
                    *piVar7 = 0;
                  }
                }
                uVar8 = uVar11 * 0x10000 + 0x10000;
                uVar11 = uVar8 >> 0x10;
              } while ((int)uVar8 >> 0x10 < (int)(uint)*(ushort *)(param_1 + 0x17e));
            }
            iVar9 = *(int *)(param_1 + 0x184) + -1;
            *(int *)(param_1 + 0x184) = iVar9;
            if ((iVar9 < 1) || (0x18 < (ushort)DAT_02030328)) {
              DAT_030032e0 = DAT_030032e0 | 0x80;
              DAT_030032e1 = DAT_030032e1 | 2;
              if (DAT_02030308 != 0xffffffff) {
                sub_080046A4(DAT_02030308 & 0xffff);
                DAT_02030308 = 0xffffffff;
              }
              *(undefined4 *)(param_1 + 0x180) = 0x5a;
LAB_0801b8d8:
              *(char *)(param_1 + 0x17d) = *(char *)(param_1 + 0x17d) + '\x01';
            }
          }
          else if (bVar2 < 2) {
            if (bVar2 == 0) {
              sub_08021D7C(&DAT_020301b0,&DAT_0834b7b8);
              DAT_02030104 = DAT_02030104 | 4;
              sub_0800393C(&DAT_085d7e34,(DAT_0202fa96 - 0x200) * 0x20 + 0x10000);
              sub_08003E14(&DAT_085d7e40,(DAT_0202f896 - 4) * 0x20 + 0x200);
              DAT_02030328._0_2_ = 0;
              *(undefined2 *)(param_1 + 0x17e) = 0;
              *(undefined4 *)(param_1 + 0x180) = 0;
              DAT_02030c00 = (undefined4 *)(param_1 + 0x184);
              *DAT_02030c00 = 0x708;
              sub_0801A4CC(4);
              goto LAB_0801b8d8;
            }
          }
          else if (bVar2 == 2) {
            if ((*(uint *)(param_1 + 0x180) & 0xc) == 0) {
              DAT_02030c00 = (undefined4 *)0x0;
            }
            else {
              DAT_02030c00 = (undefined4 *)(param_1 + 0x184);
            }
            iVar9 = *(int *)(param_1 + 0x180);
            if (iVar9 == 0) {
              sub_08021D7C(&DAT_020301b0,&DAT_0834b810);
              DAT_02030c00 = (undefined4 *)(param_1 + 0x184);
              goto LAB_0801b8d8;
            }
LAB_0801bb50:
            *(int *)(param_1 + 0x180) = iVar9 + -1;
          }
          else if (bVar2 == 3) {
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_030032e1 = 0;
            DAT_02030104 = DAT_02030104 & 0xfb;
            DAT_02030c00 = (undefined4 *)0x0;
            *(byte *)(param_1 + 0x17d) = 0;
            uVar4 = 4;
            goto LAB_0801bba4;
          }
        }
      }
      else {
        if ((cVar1 == '\x04') && (0x22bfff < *(int *)(iVar5 + 0x54))) {
          DAT_02030104 = DAT_02030104 | 4;
          sub_0801A4CC(5);
          uVar4 = 5;
          goto LAB_0801bba4;
        }
        cVar1 = *(char *)(param_1 + 0x17c);
        if (cVar1 == '\x05') {
          DAT_020302e4 = 0x20d000;
          if (0x2bffff < *(int *)(iVar5 + 0x54)) {
            if ((DAT_02030104 & 0x20) == 0) {
              if (DAT_02030308 != 0xffffffff) {
                sub_080046A4(DAT_02030308 & 0xffff);
                DAT_02030308 = 0xffffffff;
              }
            }
            else {
              DAT_030032e1 = DAT_030032e1 | 2;
              *(char *)(param_1 + 0x17c) = '\x06';
            }
          }
          if (0x2c1fff < *(int *)(iVar5 + 0x54)) {
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
          }
        }
        else if ((cVar1 == '\x06') && (0x2cffff < *(int *)(iVar5 + 0x54))) {
          DAT_030032e1 = 0;
          if ((DAT_02030104 & 0x20) == 0) {
            sub_08021D7C(&DAT_020301b0,&DAT_0834b8f0);
          }
          else {
            sub_08021D7C(&DAT_020301b0,&DAT_0834bc78);
            DAT_020301a8 = DAT_020301a8 & 0xfffe;
          }
          sub_0801A4CC(7);
          *(undefined *)(param_1 + 0x17c) = 8;
        }
        else if ((*(char *)(param_1 + 0x17c) == '\a') && (0x2cffff < *(int *)(iVar5 + 0x54))) {
          DAT_030032e1 = 0;
          sub_08021D7C(&DAT_020301b0,&DAT_0834b9e0);
          sub_0801A4CC(7);
          *(char *)(param_1 + 0x17c) = '\b';
        }
        else {
          pcVar14 = (char *)(param_1 + 0x17c);
          if (*pcVar14 == '\b') {
            sub_0801A4CC(6);
            *pcVar14 = '\t';
          }
          else {
            if ((*pcVar14 != '\t') || ((DAT_020301a8 & 0x10) == 0)) {
              if (*(char *)(param_1 + 0x17c) == '\x14') {
                iVar9 = *(int *)(param_1 + 0x180);
                if (iVar9 != 0) goto LAB_0801bb50;
                if (DAT_02030308 != 0xffffffff) {
                  sub_080046A4(DAT_02030308 & 0xffff);
                  DAT_02030308 = 0xffffffff;
                }
                DAT_020302f4 = 2;
                uVar4 = 0x15;
              }
              else {
                if ((*(char *)(param_1 + 0x17c) != '\x15') || (DAT_020302f4 != 0))
                goto LAB_0801bba6;
                DAT_020301a8 = DAT_020301a8 & 0xfffe | 4;
                uVar4 = 0x16;
              }
              goto LAB_0801bba4;
            }
            DAT_030032e0 = DAT_030032e0 | 0x80;
            DAT_030032e1 = DAT_030032e1 | 2;
            sub_08021D7C(&DAT_020301b0,&DAT_0834baf8);
            DAT_020301b2 = DAT_020301b2 & 0xfd;
            DAT_020301a8 = DAT_020301a8 & 0xffef | 4;
            *pcVar14 = '\n';
          }
        }
      }
      goto LAB_0801bba6;
    }
    sub_0801A4CC(2);
    uVar4 = 2;
LAB_0801bba4:
    *(undefined *)(param_1 + 0x17c) = uVar4;
  }
LAB_0801bba6:
  iVar5 = *(int *)(iVar5 + 0x54);
  if (iVar5 - 0x189000U < 0x3b001) {
    if (DAT_020302d4 != 0) goto LAB_0801bc38;
    if (iVar5 < 0x1a5000) {
      DAT_020302d4 = 0x4000;
    }
    else {
LAB_0801bc0c:
      DAT_020302d4 = -0x4000;
    }
  }
  else {
    if (0x45000 < iVar5 - 0x25b000U) {
      if (DAT_020302d4 != 0) {
        DAT_020302d4 = 0;
        DAT_020302a1 = 4;
        DAT_020302aa = 0;
      }
      goto LAB_0801bc38;
    }
    if (DAT_020302d4 != 0) goto LAB_0801bc38;
    if (0x276fff < iVar5) goto LAB_0801bc0c;
    DAT_020302d4 = 0x4000;
  }
  DAT_020302a1 = 4;
  DAT_020302aa = 0;
LAB_0801bc38:
  return (ulonglong)in_lr << 0x20;
}

