// sub_08019AEC at 0x08019AEC (thumb)

undefined4 sub_08019AEC(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  undefined4 in_lr;
  byte local_74 [4];
  char local_70;
  undefined local_6f;
  byte local_6c [8];
  undefined *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  byte *local_24;
  
  iVar4 = DAT_02030160;
  cVar1 = *(char *)(DAT_02030160 + 1);
  if (DAT_02030177 < 0x14) {
    if (0x11 < DAT_02030177) {
      uVar5 = 3;
LAB_08019ba6:
      *(undefined *)(iVar4 + 4) = uVar5;
      goto LAB_08019baa;
    }
    if (DAT_02030177 == 0) {
      uVar5 = 5;
LAB_08019b8e:
      *(undefined *)(iVar4 + 4) = uVar5;
      goto LAB_08019baa;
    }
    if (DAT_02030178 == '\x0f') {
      iVar7 = *(int *)(&DAT_08349158 + (uint)DAT_02030164 * 4);
      uVar6 = FUN_080fe2f8(DAT_0203016c,DAT_02030174 + 1);
      iVar7 = FUN_080fe2f8(iVar7 * 10,uVar6);
      if (iVar7 < 6) {
        uVar5 = 6;
        goto LAB_08019ba6;
      }
    }
    if (DAT_02030179 < 0xe) {
      if (DAT_02030179 < 6) {
        uVar5 = 8;
        goto LAB_08019ba6;
      }
      if (DAT_0203017a == '\x0f') {
        uVar5 = 9;
      }
      else {
        if (DAT_02030176 == '\x14') {
          uVar5 = 1;
          goto LAB_08019b8e;
        }
        if (DAT_02030176 != '\0') {
          uVar5 = 0;
          goto LAB_08019ba6;
        }
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 7;
    }
  }
  else {
    uVar5 = 4;
  }
  *(undefined *)(iVar4 + 4) = uVar5;
LAB_08019baa:
  if (cVar1 == '\x06') {
    sVar14 = 0;
    *(undefined *)(iVar4 + 4) = 0;
  }
  else {
    uVar13 = (uint)DAT_0203017c;
    uVar8 = (uint)DAT_0203017e;
    uVar9 = (uint)DAT_02030180;
    uVar16 = (uint)DAT_02030182;
    iVar7 = FUN_080fe2f8((uVar8 + uVar13 + uVar9 + uVar16) * 7,10);
    if ((int)uVar13 < iVar7) {
      if ((int)uVar8 < iVar7) {
        if ((int)uVar9 < iVar7) {
          sVar14 = 5;
          if (iVar7 <= (int)uVar16) {
            sVar14 = 4;
          }
        }
        else {
          sVar14 = 3;
        }
      }
      else {
        sVar14 = 2;
      }
    }
    else {
      sVar14 = 1;
    }
  }
  *(undefined *)(iVar4 + 3) = *(undefined *)(iVar4 + 2);
  uVar13 = 0;
  iVar10 = iVar4 + 0x34;
  local_64 = (undefined *)(iVar4 + 0x20);
  iVar7 = iVar4 + 0x3c;
  local_60 = (char *)(iVar4 + 0x22);
  local_5c = (char *)(iVar4 + 0x23);
  local_58 = (char *)(iVar4 + 0x24);
  local_54 = (char *)(iVar4 + 0x25);
  local_50 = (char *)(iVar4 + 0x26);
  local_4c = (char *)(iVar4 + 0x27);
  local_48 = (char *)(iVar4 + 0x28);
  local_44 = (char *)(iVar4 + 0x29);
  local_40 = (char *)(iVar4 + 0x2a);
  local_3c = (char *)(iVar4 + 0x2b);
  local_38 = (char *)(iVar4 + 0x2c);
  local_34 = (char *)(iVar4 + 0x2d);
  local_30 = (char *)(iVar4 + 0x2e);
  local_2c = (char *)(iVar4 + 0x2f);
  local_28 = (char *)(iVar4 + 0x30);
  local_24 = local_6c;
  do {
    iVar12 = (int)(uVar13 * 0x10000) >> 0x10;
    if (iVar12 == sVar14) {
      bVar2 = *(byte *)(iVar10 + iVar12);
      if (bVar2 < 7) {
        *(byte *)(iVar10 + iVar12) = bVar2 + 1;
      }
    }
    else {
      *(undefined *)(iVar10 + iVar12) = 0;
    }
    uVar8 = uVar13 * 0x10000 + 0x10000;
    uVar13 = uVar8 >> 0x10;
  } while ((int)uVar8 >> 0x10 < 6);
  *(undefined1 *)(iVar4 + 2) = (&DAT_083491b8)[sVar14 * 8 + (uint)*(byte *)(iVar10 + sVar14)];
  local_64[*(byte *)(iVar4 + 2)] = local_64[*(byte *)(iVar4 + 2)] + '\x01';
  pcVar11 = (char *)((uint)*(byte *)(iVar4 + 4) + iVar7);
  *pcVar11 = *pcVar11 + '\x01';
  *(undefined *)(iVar4 + 9) = 0;
  uVar13 = 0;
  do {
    if (*(byte *)(iVar7 + (uint)*(byte *)(iVar4 + 9)) < *(byte *)(iVar7 + (short)uVar13)) {
      *(char *)(iVar4 + 9) = (char)uVar13;
    }
    uVar8 = (int)(short)uVar13 + 1;
    uVar13 = uVar8 & 0xffff;
  } while ((int)(uVar8 * 0x10000) >> 0x10 < 10);
  local_74[0] = *(char *)(iVar4 + 0x23) + *(char *)(iVar4 + 0x22) + *(char *)(iVar4 + 0x21) +
                *(char *)(iVar4 + 0x24);
  local_74[1] = *(char *)(iVar4 + 0x27) + *(char *)(iVar4 + 0x26) + *(char *)(iVar4 + 0x25);
  local_74[2] = *(char *)(iVar4 + 0x2a) + *(char *)(iVar4 + 0x29) + *(char *)(iVar4 + 0x28);
  local_74[3] = *(char *)(iVar4 + 0x2d) + *(char *)(iVar4 + 0x2c) + *(char *)(iVar4 + 0x2b);
  local_70 = *(char *)(iVar4 + 0x30) + *(char *)(iVar4 + 0x2f) + *(char *)(iVar4 + 0x2e);
  local_6f = *local_64;
  uVar13 = 0;
  do {
    local_6c[(short)uVar13] = (byte)uVar13;
    uVar8 = (int)(short)uVar13 + 1;
    uVar13 = uVar8 & 0xffff;
  } while ((int)(uVar8 * 0x10000) >> 0x10 < 6);
  uVar13 = 0;
  do {
    uVar8 = 5;
    iVar7 = (int)(uVar13 * 0x10000) >> 0x10;
    if (iVar7 < 5) {
      pbVar17 = local_6c + iVar7;
      do {
        bVar2 = *pbVar17;
        pbVar15 = local_6c + (short)uVar8;
        bVar3 = *pbVar15;
        if (local_74[bVar2] < local_74[bVar3]) {
          *pbVar17 = bVar3;
          *pbVar15 = bVar2;
        }
        uVar9 = (int)(short)uVar8 - 1;
        uVar8 = uVar9 & 0xffff;
      } while (iVar7 < (int)(uVar9 * 0x10000) >> 0x10);
    }
    uVar8 = uVar13 * 0x10000 + 0x10000;
    uVar13 = uVar8 >> 0x10;
  } while ((int)uVar8 >> 0x10 < 5);
  if (local_6c[0] == 0) {
    *(undefined *)(iVar4 + 9) = 0;
    *(undefined *)(iVar4 + 8) = 1;
    uVar13 = 0;
    do {
      if (local_64[(byte)(&DAT_083491b8)[(short)uVar13]] != '\0') {
        *(undefined1 *)(iVar4 + 8) = (&DAT_083491b8)[(short)uVar13];
      }
      uVar8 = (int)(short)uVar13 + 1;
      uVar13 = uVar8 & 0xffff;
    } while ((int)(uVar8 * 0x10000) >> 0x10 < 8);
  }
  else if ((*(byte *)(DAT_02030160 + 7) & 0xf0) == 0) {
    if (DAT_0203017b < -0x1e) {
      *(undefined *)(iVar4 + 9) = 0xb;
      *(undefined *)(iVar4 + 8) = 0x11;
    }
    else if ((*(byte *)(iVar4 + 7) & 0xf) == 0) {
      if (*(char *)(iVar4 + 6) == '\0') {
        *(undefined1 *)(iVar4 + 8) = (&DAT_083491b8)[(uint)local_6c[0] * 8];
        uVar13 = 0;
        do {
          if (local_64[(byte)(&DAT_083491b8)[(int)(short)uVar13 + (uint)local_6c[0] * 8]] != '\0') {
            *(undefined1 *)(iVar4 + 8) = (&DAT_083491b8)[(int)(short)uVar13 + (uint)local_6c[0] * 8]
            ;
          }
          uVar8 = (int)(short)uVar13 + 1;
          uVar13 = uVar8 & 0xffff;
        } while ((int)(uVar8 * 0x10000) >> 0x10 < 8);
      }
      else {
        *(undefined *)(iVar4 + 9) = 0xb;
        *(undefined *)(iVar4 + 8) = 0x12;
      }
    }
    else {
      *(undefined *)(iVar4 + 9) = 0xb;
      *(undefined *)(iVar4 + 8) = 0x13;
    }
  }
  else {
    *(undefined *)(iVar4 + 9) = 10;
    *(undefined *)(iVar4 + 8) = 0x12;
  }
  return in_lr;
}

