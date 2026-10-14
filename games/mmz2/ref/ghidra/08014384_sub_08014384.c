// sub_08014384 at 0x08014384 (thumb)

undefined4 sub_08014384(void)

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
  byte *local_64;
  undefined *local_60;
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
  char *local_24;
  
  iVar4 = DAT_0202ebf0;
  cVar1 = *(char *)(DAT_0202ebf0 + 1);
  if (DAT_0202ec07 < 0x13) {
    if (DAT_0202ec07 == 0) {
      uVar5 = 2;
LAB_08014436:
      *(undefined *)(iVar4 + 4) = uVar5;
      goto LAB_0801443a;
    }
    if (DAT_0202ec08 == '\x0f') {
      iVar7 = *(int *)(&DAT_08325e04 + (uint)DAT_0202ebf4 * 4);
      uVar6 = sub_080EF150(DAT_0202ebfc,DAT_0202ec04 + 1);
      iVar7 = sub_080EF150(iVar7 * 10,uVar6);
      if (iVar7 < 6) {
        uVar5 = 3;
        goto LAB_08014436;
      }
    }
    if (DAT_0202ec09 < 0xe) {
      if (DAT_0202ec09 < 6) {
        uVar5 = 5;
        goto LAB_08014436;
      }
      if (DAT_0202ec0a == '\x0f') {
        uVar5 = 6;
      }
      else {
        if (DAT_0202ec06 == '\x14') {
          *(undefined *)(iVar4 + 4) = 7;
          goto LAB_0801443a;
        }
        if (DAT_0202ec06 != '\0') {
          uVar5 = 0;
          goto LAB_08014436;
        }
        uVar5 = 8;
      }
    }
    else {
      uVar5 = 4;
    }
  }
  else {
    uVar5 = 1;
  }
  *(undefined *)(iVar4 + 4) = uVar5;
LAB_0801443a:
  if (cVar1 == '\x06') {
    sVar14 = 0;
    *(undefined *)(iVar4 + 4) = 0;
  }
  else {
    uVar13 = (uint)DAT_0202ec0c;
    uVar8 = (uint)DAT_0202ec0e;
    uVar9 = (uint)DAT_0202ec10;
    uVar16 = (uint)DAT_0202ec12;
    iVar7 = sub_080EF150((uVar8 + uVar13 + uVar9 + uVar16) * 7,10);
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
  local_60 = (undefined *)(iVar4 + 0x20);
  iVar7 = iVar4 + 0x3c;
  local_5c = (char *)(iVar4 + 0x22);
  local_58 = (char *)(iVar4 + 0x23);
  local_54 = (char *)(iVar4 + 0x24);
  local_50 = (char *)(iVar4 + 0x25);
  local_4c = (char *)(iVar4 + 0x26);
  local_48 = (char *)(iVar4 + 0x27);
  local_44 = (char *)(iVar4 + 0x28);
  local_40 = (char *)(iVar4 + 0x29);
  local_3c = (char *)(iVar4 + 0x2a);
  local_38 = (char *)(iVar4 + 0x2b);
  local_34 = (char *)(iVar4 + 0x2c);
  local_30 = (char *)(iVar4 + 0x2d);
  local_2c = (char *)(iVar4 + 0x2e);
  local_28 = (char *)(iVar4 + 0x2f);
  local_24 = (char *)(iVar4 + 0x30);
  local_64 = local_6c;
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
  *(undefined1 *)(iVar4 + 2) = (&DAT_08325e64)[sVar14 * 8 + (uint)*(byte *)(iVar10 + sVar14)];
  local_60[*(byte *)(iVar4 + 2)] = local_60[*(byte *)(iVar4 + 2)] + '\x01';
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
  local_6f = *local_60;
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
      if (local_60[(byte)(&DAT_08325e64)[(short)uVar13]] != '\0') {
        *(undefined1 *)(iVar4 + 8) = (&DAT_08325e64)[(short)uVar13];
      }
      uVar8 = (int)(short)uVar13 + 1;
      uVar13 = uVar8 & 0xffff;
    } while ((int)(uVar8 * 0x10000) >> 0x10 < 8);
  }
  else if ((*(byte *)(iVar4 + 7) & 0xf0) == 0) {
    if (DAT_0202ec0b < -0x1e) {
      *(undefined *)(iVar4 + 9) = 9;
      *(undefined *)(iVar4 + 8) = 0x11;
    }
    else if ((*(byte *)(iVar4 + 7) & 0xf) == 0) {
      if (*(char *)(iVar4 + 6) == '\0') {
        *(undefined1 *)(iVar4 + 8) = (&DAT_08325e64)[(uint)local_6c[0] * 8];
        uVar13 = 0;
        do {
          if (local_60[(byte)(&DAT_08325e64)[(int)(short)uVar13 + (uint)local_6c[0] * 8]] != '\0') {
            *(undefined1 *)(iVar4 + 8) = (&DAT_08325e64)[(int)(short)uVar13 + (uint)local_6c[0] * 8]
            ;
          }
          uVar8 = (int)(short)uVar13 + 1;
          uVar13 = uVar8 & 0xffff;
        } while ((int)(uVar8 * 0x10000) >> 0x10 < 8);
      }
      else {
        *(undefined *)(iVar4 + 9) = 9;
        *(undefined *)(iVar4 + 8) = 0x12;
      }
    }
    else {
      *(undefined *)(iVar4 + 9) = 9;
      *(undefined *)(iVar4 + 8) = 0x13;
    }
  }
  else {
    *(undefined *)(iVar4 + 9) = 9;
    *(undefined *)(iVar4 + 8) = 0x14;
  }
  return in_lr;
}

