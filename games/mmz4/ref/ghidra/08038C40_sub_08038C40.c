// sub_08038C40 at 0x08038C40 (thumb)

undefined4 sub_08038C40(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  byte *pbVar11;
  ushort *puVar12;
  byte *pbVar13;
  undefined4 in_lr;
  
  puVar12 = (ushort *)(param_1 + 0x252);
  uVar3 = *puVar12;
  bVar7 = *(byte *)(param_1 + 0xe4);
  bVar1 = *(byte *)(param_1 + 0xe5);
  sub_0802F0D0(param_1);
  *(byte *)(param_1 + 0x14a) = *(byte *)(param_1 + 0xe4);
  *(byte *)(param_1 + 0x14b) = *(byte *)(param_1 + 0xe5);
  puVar10 = (uint *)(param_1 + 600);
  uVar8 = *puVar10;
  *puVar10 = 0;
  *puVar10 = *puVar12 & 0xf0;
  uVar9 = (*(ushort *)(param_1 + 0x250) & 0xf0) << 4 | *puVar12 & 0xf0;
  *puVar10 = uVar9;
  if (((*(ushort *)(param_1 + 0x25c) & *puVar12) != 0) &&
     (*puVar10 = uVar9 | 2, (*(ushort *)(param_1 + 0x25c) & *(ushort *)(param_1 + 0x250)) != 0)) {
    *puVar10 = uVar9 | 3;
  }
  puVar12 = (ushort *)(param_1 + 0x252);
  if ((*(ushort *)(param_1 + 0x25e) & *puVar12) != 0) {
    puVar10 = (uint *)(param_1 + 600);
    uVar9 = *puVar10;
    *puVar10 = uVar9 | 8;
    if ((*(ushort *)(param_1 + 0x25e) & *(ushort *)(param_1 + 0x250)) != 0) {
      *puVar10 = uVar9 | 0xc;
    }
  }
  if ((*(ushort *)(param_1 + 0x264) & *puVar12) != 0) {
    *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x20000;
  }
  uVar4 = *puVar12;
  if ((uVar4 & 0x8000) == 0) {
    if ((uVar3 & 0x8000) != 0) {
      bVar2 = *(byte *)(param_1 + 0x153);
      goto joined_r0x08038e40;
    }
    if (*(char *)(param_1 + 0xdf) == '\0') {
      uVar5 = *(ushort *)(param_1 + 0x260);
      if ((uVar5 & *(ushort *)(param_1 + 0x250)) == 0) {
        if ((uVar5 & uVar4) != 0) {
          if ((*(ushort *)(param_1 + 0x262) & uVar4) == 0) {
            *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x2000;
          }
          else {
            *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x8000;
          }
          if ((*(byte *)(param_1 + 0x153) & 0x10) == 0) {
            cVar6 = *(char *)(param_1 + 0xe4) + '\x01';
          }
          else {
            cVar6 = '\0';
          }
          *(char *)(param_1 + 0xe4) = cVar6;
          if ((*(byte *)(param_1 + 0x153) & 0x20) == 0) {
            cVar6 = *(char *)(param_1 + 0xe5) + '\x01';
            goto LAB_08039314;
          }
          goto LAB_0803930e;
        }
        if (*(char *)(param_1 + 0xc4) == '\0') {
          if ((uVar3 & *(ushort *)(param_1 + 0x260)) != 0) {
            if ((*(ushort *)(param_1 + 0x262) & uVar4) == 0) {
              cVar6 = sub_0803A434(param_1,0);
              if (cVar6 != '\0') {
                *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
                *(undefined *)(param_1 + 0xe4) = 0;
              }
            }
            else {
              cVar6 = sub_0803A434(param_1,1);
              if (cVar6 != '\0') {
                *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
                *(undefined *)(param_1 + 0xe5) = 0;
              }
            }
          }
        }
        else {
          if ((*(ushort *)(param_1 + 0x262) & uVar4) == 0) {
LAB_080393ac:
            cVar6 = sub_0803A434(param_1,0);
            if (cVar6 == '\0') goto LAB_080393ca;
            uVar8 = *(uint *)(param_1 + 600);
            uVar9 = 0x1000;
          }
          else {
            cVar6 = sub_0803A434(param_1,1);
            if (cVar6 == '\0') goto LAB_080393ca;
            uVar8 = *(uint *)(param_1 + 600);
            uVar9 = 0x4000;
          }
LAB_080393c6:
          *(uint *)(param_1 + 600) = uVar8 | uVar9;
LAB_080393ca:
          *(undefined *)(param_1 + 0xe4) = 0;
          *(undefined *)(param_1 + 0xe5) = 0;
        }
      }
      else {
        if ((*(ushort *)(param_1 + 0x262) & uVar4) == 0) {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
          *(undefined *)(param_1 + 0xe4) = 0;
        }
        else {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
          *(undefined *)(param_1 + 0xe5) = 0;
        }
LAB_08039290:
        if (*(char *)(param_1 + 0xc4) != '\0') {
          *(undefined *)(param_1 + 0xe4) = 0;
          *(undefined *)(param_1 + 0xe5) = 0;
        }
      }
    }
    else if (*(char *)(param_1 + 0xdf) == '\x01') {
      uVar5 = *(ushort *)(param_1 + 0x260);
      if ((uVar5 & *(ushort *)(param_1 + 0x250)) == 0) {
        if ((uVar4 & uVar5) == 0) {
          if (*(char *)(param_1 + 0xc4) == '\0') {
            if (((*(ushort *)(param_1 + 0x260) & uVar3) != 0) &&
               (cVar6 = sub_0803A434(param_1,0), cVar6 != '\0')) {
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
              *(undefined *)(param_1 + 0xe4) = 0;
            }
          }
          else {
            cVar6 = sub_0803A434(param_1,0);
            if (cVar6 != '\0') {
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
            }
            *(undefined *)(param_1 + 0xe4) = 0;
          }
        }
        else {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x2000;
          if ((*(byte *)(param_1 + 0x153) & 0x10) == 0) {
            *(char *)(param_1 + 0xe4) = *(char *)(param_1 + 0xe4) + '\x01';
          }
          else {
            *(undefined *)(param_1 + 0xe4) = 0;
          }
        }
      }
      else {
        *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
        *(undefined *)(param_1 + 0xe4) = 0;
      }
      uVar4 = *(ushort *)(param_1 + 0x262);
      if ((uVar4 & *(ushort *)(param_1 + 0x250)) == 0) {
        if ((*puVar12 & uVar4) == 0) {
          if (*(char *)(param_1 + 0xc4) == '\0') {
            if (((uVar3 & *(ushort *)(param_1 + 0x262)) != 0) &&
               (cVar6 = sub_0803A434(param_1,1), cVar6 != '\0')) {
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
              *(undefined *)(param_1 + 0xe5) = 0;
            }
          }
          else {
            cVar6 = sub_0803A434(param_1,1);
            if (cVar6 != '\0') {
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
            }
            *(undefined *)(param_1 + 0xe5) = 0;
          }
        }
        else {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x8000;
          if ((*(byte *)(param_1 + 0x153) & 0x20) == 0) {
            cVar6 = *(char *)(param_1 + 0xe5) + '\x01';
            goto LAB_08039314;
          }
          *(undefined *)(param_1 + 0xe5) = 0;
        }
      }
      else {
        *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
LAB_0803930e:
        cVar6 = '\0';
LAB_08039314:
        *(char *)(param_1 + 0xe5) = cVar6;
      }
    }
    else {
      if ((*(byte *)(param_1 + 0xd) < 9) &&
         ((*(ushort *)(param_1 + 0x262) & *(ushort *)(param_1 + 0x250)) != 0)) {
        sub_08002B10(5);
        *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) ^ 1;
      }
      uVar4 = *(ushort *)(param_1 + 0x260);
      if ((uVar4 & *(ushort *)(param_1 + 0x250)) != 0) {
        if (*(char *)(param_1 + 0xe0) == '\0') {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
          *(undefined *)(param_1 + 0xe4) = 0;
        }
        else {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
          *(undefined *)(param_1 + 0xe5) = 0;
        }
        goto LAB_08039290;
      }
      if ((uVar4 & *puVar12) != 0) {
        if (*(char *)(param_1 + 0xe0) == '\0') {
          uVar8 = *(uint *)(param_1 + 600);
          uVar9 = 0x2000;
        }
        else {
          uVar8 = *(uint *)(param_1 + 600);
          uVar9 = 0x8000;
        }
        *(uint *)(param_1 + 600) = uVar8 | uVar9;
        if ((*(byte *)(param_1 + 0x153) & 0x10) == 0) {
          cVar6 = *(char *)(param_1 + 0xe4) + '\x01';
        }
        else {
          cVar6 = '\0';
        }
        *(char *)(param_1 + 0xe4) = cVar6;
        if ((*(byte *)(param_1 + 0x153) & 0x20) != 0) goto LAB_0803930e;
        cVar6 = *(char *)(param_1 + 0xe5) + '\x01';
        goto LAB_08039314;
      }
      if (*(char *)(param_1 + 0xc4) != '\0') {
        if (*(char *)(param_1 + 0xe0) == '\0') goto LAB_080393ac;
        cVar6 = sub_0803A434(param_1,1);
        if (cVar6 != '\0') {
          uVar8 = *(uint *)(param_1 + 600);
          uVar9 = 0x4000;
          goto LAB_080393c6;
        }
        goto LAB_080393ca;
      }
      if ((uVar3 & *(ushort *)(param_1 + 0x260)) != 0) {
        if (*(char *)(param_1 + 0xe0) == '\0') {
          cVar6 = sub_0803A434(param_1,0);
          if (cVar6 != '\0') {
            *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
            *(undefined *)(param_1 + 0xe4) = 0;
          }
        }
        else {
          cVar6 = sub_0803A434(param_1,1);
          if (cVar6 != '\0') {
            *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
            *(undefined *)(param_1 + 0xe5) = 0;
          }
        }
      }
    }
  }
  else {
    if ((uVar4 & 0x1000) != 0) {
      *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x9000;
    }
    if ((*puVar12 & 0x4000) != 0) {
      *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0xc;
      if (*(char *)(param_1 + 0x277) == '\0') {
        *(char *)(param_1 + 0x277) = '\x1c';
      }
    }
    if ((*puVar12 & 0x2000) != 0) {
      *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 3;
    }
    if (*(char *)(param_1 + 0xdf) == '\x01') {
      if ((*(byte *)(param_1 + 0x153) & 0x10) == 0) {
        if ((uVar8 & 0x2000) != 0) {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x2000;
          *(char *)(param_1 + 0xe4) = *(char *)(param_1 + 0xe4) + '\x01';
        }
      }
      else {
        *(undefined *)(param_1 + 0xe4) = 0;
      }
      if ((*(byte *)(param_1 + 0x153) & 0x20) != 0) goto LAB_0803930e;
      if ((uVar8 & 0x8000) != 0) {
        *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x8000;
        *(char *)(param_1 + 0xe5) = *(char *)(param_1 + 0xe5) + '\x01';
      }
      goto LAB_080393dc;
    }
    bVar2 = *(byte *)(param_1 + 0x153);
joined_r0x08038e40:
    if ((bVar2 & 0x10) == 0) {
      if ((uVar8 & 0x2000) != 0) {
        *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x2000;
        *(char *)(param_1 + 0xe5) = *(char *)(param_1 + 0xe5) + '\x01';
        *(char *)(param_1 + 0xe4) = *(char *)(param_1 + 0xe4) + '\x01';
      }
    }
    if (((*(byte *)(param_1 + 0x153) & 0x20) == 0) && ((uVar8 & 0x8000) != 0)) {
      *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x8000;
      *(char *)(param_1 + 0xe5) = *(char *)(param_1 + 0xe5) + '\x01';
      *(char *)(param_1 + 0xe4) = *(char *)(param_1 + 0xe4) + '\x01';
    }
  }
LAB_080393dc:
  pbVar11 = (byte *)(param_1 + 0xe5);
  pbVar13 = (byte *)(param_1 + 0xe4);
  if (*(char *)(param_1 + 0xe1) == '\0') {
    sub_08039508(param_1);
  }
  else {
    *(undefined *)(param_1 + 0x277) = 0;
  }
  if (*(char *)(param_1 + 0xf3) == '\a') {
    sub_0803978C(param_1);
    sub_080398C0(param_1);
    sub_08039A80(param_1);
    sub_08039B8C(param_1);
    sub_08039CC0(param_1);
    sub_08039E2C(param_1);
  }
  if (((*puVar12 & 0x8000) == 0) && (*(char *)(param_1 + 0xc4) == '\0')) {
    if ((bVar7 == *pbVar13) && ((*(byte *)(param_1 + 0x153) & 0x10) == 0)) {
      *pbVar13 = *pbVar13 + 1;
    }
    if ((bVar1 == *pbVar11) && ((*(byte *)(param_1 + 0x153) & 0x20) == 0)) {
      *pbVar11 = *pbVar11 + 1;
    }
  }
  if (*(char *)(param_1 + 0xd) == '\t') {
    bVar7 = 0;
    *pbVar13 = 0;
  }
  else if (*(char *)(param_1 + 199) == '\x01') {
    if (*(char *)(param_1 + 0xc0) == '\0') {
      if (0x28 < *pbVar13) {
        bVar7 = 0x28;
        goto LAB_080394ac;
      }
    }
    else {
      if (*(char *)(param_1 + 0xc0) == '\x01') {
        bVar7 = 0;
      }
      else {
        if (*pbVar13 < 0xc9) goto LAB_080394ae;
        bVar7 = 200;
      }
LAB_080394ac:
      *pbVar13 = bVar7;
    }
LAB_080394ae:
    if (*(char *)(param_1 + 0xc1) == '\0') {
      if (*pbVar11 < 0x29) goto LAB_080394de;
      bVar7 = 0x28;
    }
    else {
      if (*(char *)(param_1 + 0xc1) != '\x01') goto LAB_080394d4;
      bVar7 = 0;
    }
  }
  else {
    if (200 < *pbVar13) {
      *pbVar13 = 200;
    }
LAB_080394d4:
    if (*pbVar11 < 0xc9) goto LAB_080394de;
    bVar7 = 200;
  }
  *pbVar11 = bVar7;
LAB_080394de:
  if (2 < *(byte *)(param_1 + 0xc0)) {
    *pbVar13 = 0;
  }
  if (2 < *(byte *)(param_1 + 0xc1)) {
    *pbVar11 = 0;
  }
  return in_lr;
}

