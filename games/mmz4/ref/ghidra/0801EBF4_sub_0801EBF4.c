// sub_0801EBF4 at 0x0801EBF4 (thumb)

undefined4 sub_0801EBF4(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined4 in_lr;
  byte local_30 [4];
  byte local_2c [4];
  int local_28;
  byte *local_24;
  
  iVar4 = DAT_0202e8e0;
  cVar1 = *(char *)(DAT_0202e8e0 + 1);
  if (0x13 < DAT_0202e8f5) {
    uVar5 = 4;
    goto LAB_0801ec86;
  }
  if (0x11 < DAT_0202e8f5) {
    uVar5 = 3;
    goto LAB_0801ecc6;
  }
  if (DAT_0202e8f5 == 0) {
    uVar5 = 5;
    goto LAB_0801ecd2;
  }
  if (DAT_0202e8f6 == '\x0f') {
    iVar9 = *(int *)(&DAT_0883f2f8 + (uint)DAT_0202e8e4 * 4);
    uVar6 = FUN_081288bc(DAT_0202e8ec,DAT_0202e8f2 + 1);
    iVar9 = FUN_081288bc(iVar9 * 10,uVar6);
    if (iVar9 < 6) {
      uVar5 = 6;
      goto LAB_0801ecc6;
    }
  }
  if (DAT_0202e8f7 < 0x13) {
    if (DAT_0202e8f7 < 6) {
      uVar5 = 8;
      goto LAB_0801ecc6;
    }
    if (DAT_0202e8f8 != '\x0f') {
      if (DAT_0202e8fa == '\0') {
        if (DAT_0202e8f4 == '\x14') {
          uVar5 = 1;
LAB_0801ecc6:
          *(undefined *)(iVar4 + 4) = uVar5;
          goto LAB_0801ecd6;
        }
        if (DAT_0202e8f4 == '\0') {
          uVar5 = 2;
        }
        else {
          if (DAT_0202e8f9 != '\0') {
            uVar5 = 0xb;
            goto LAB_0801ecc6;
          }
          uVar5 = 0xc;
        }
      }
      else {
        uVar5 = 10;
      }
LAB_0801ecd2:
      *(undefined *)(iVar4 + 4) = uVar5;
      goto LAB_0801ecd6;
    }
    uVar5 = 9;
  }
  else {
    uVar5 = 7;
  }
LAB_0801ec86:
  *(undefined *)(iVar4 + 4) = uVar5;
LAB_0801ecd6:
  if (cVar1 == '\x06') {
    sVar14 = 0;
    *(undefined *)(iVar4 + 4) = 0;
  }
  else {
    uVar13 = (uint)DAT_0202e8fc;
    uVar7 = (uint)DAT_0202e8fe;
    uVar8 = (uint)DAT_0202e900;
    iVar9 = FUN_081288bc((uVar7 + uVar13 + uVar8) * 7,10);
    if (iVar9 < (int)uVar13) {
      sVar14 = 1;
    }
    else if (iVar9 < (int)uVar7) {
      sVar14 = 2;
    }
    else {
      sVar14 = 4;
      if (iVar9 < (int)uVar8) {
        sVar14 = 3;
      }
    }
  }
  *(undefined *)(iVar4 + 3) = *(undefined *)(iVar4 + 2);
  uVar13 = 0;
  iVar9 = iVar4 + 0x2a;
  local_28 = iVar4 + 0x16;
  iVar11 = iVar4 + 0x32;
  local_24 = local_2c;
  do {
    iVar12 = (int)(uVar13 * 0x10000) >> 0x10;
    if (iVar12 == sVar14) {
      bVar2 = *(byte *)(iVar9 + iVar12);
      if (bVar2 < 7) {
        *(byte *)(iVar9 + iVar12) = bVar2 + 1;
      }
    }
    else {
      *(undefined *)(iVar9 + iVar12) = 0;
    }
    uVar7 = uVar13 * 0x10000 + 0x10000;
    uVar13 = uVar7 >> 0x10;
  } while ((int)uVar7 >> 0x10 < 6);
  *(undefined1 *)(iVar4 + 2) = (&DAT_0883f358)[sVar14 * 8 + (uint)*(byte *)(iVar9 + sVar14)];
  pcVar10 = (char *)(local_28 + (uint)*(byte *)(iVar4 + 2));
  *pcVar10 = *pcVar10 + '\x01';
  pcVar10 = (char *)((uint)*(byte *)(iVar4 + 4) + iVar11);
  *pcVar10 = *pcVar10 + '\x01';
  *(undefined *)(iVar4 + 7) = 0;
  uVar13 = 0;
  do {
    if (*(byte *)(iVar11 + (uint)*(byte *)(iVar4 + 7)) < *(byte *)(iVar11 + (short)uVar13)) {
      *(char *)(iVar4 + 7) = (char)uVar13;
    }
    uVar7 = (int)(short)uVar13 + 1;
    uVar13 = uVar7 & 0xffff;
  } while ((int)(uVar7 * 0x10000) >> 0x10 < 10);
  local_30[0] = *(char *)(iVar4 + 0x19) + *(char *)(iVar4 + 0x18) + *(char *)(iVar4 + 0x17) +
                *(char *)(iVar4 + 0x1a);
  local_30[1] = *(char *)(iVar4 + 0x1d) + *(char *)(iVar4 + 0x1c) + *(char *)(iVar4 + 0x1b);
  local_30[2] = *(char *)(iVar4 + 0x20) + *(char *)(iVar4 + 0x1f) + *(char *)(iVar4 + 0x1e);
  local_30[3] = *(undefined *)(iVar4 + 0x16);
  uVar13 = 0;
  do {
    local_2c[(short)uVar13] = (byte)uVar13;
    uVar7 = (int)(short)uVar13 + 1;
    uVar13 = uVar7 & 0xffff;
  } while ((int)(uVar7 * 0x10000) >> 0x10 < 4);
  uVar13 = 0;
  do {
    uVar7 = 3;
    iVar9 = (int)(uVar13 * 0x10000) >> 0x10;
    if (iVar9 < 3) {
      pbVar16 = local_2c + iVar9;
      do {
        bVar2 = *pbVar16;
        pbVar15 = local_2c + (short)uVar7;
        bVar3 = *pbVar15;
        if (local_30[bVar2] < local_30[bVar3]) {
          *pbVar16 = bVar3;
          *pbVar15 = bVar2;
        }
        uVar8 = (int)(short)uVar7 - 1;
        uVar7 = uVar8 & 0xffff;
      } while (iVar9 < (int)(uVar8 * 0x10000) >> 0x10);
    }
    uVar7 = uVar13 * 0x10000 + 0x10000;
    uVar13 = uVar7 >> 0x10;
  } while ((int)uVar7 >> 0x10 < 3);
  if (local_2c[0] == 0) {
    *(undefined *)(iVar4 + 7) = 0;
    *(undefined *)(iVar4 + 6) = 1;
    uVar13 = 0;
    do {
      if (*(char *)(local_28 + (uint)(byte)(&DAT_0883f358)[(short)uVar13]) != '\0') {
        *(undefined1 *)(iVar4 + 6) = (&DAT_0883f358)[(short)uVar13];
      }
      uVar7 = (int)(short)uVar13 + 1;
      uVar13 = uVar7 & 0xffff;
    } while ((int)(uVar7 * 0x10000) >> 0x10 < 8);
  }
  else {
    *(undefined1 *)(iVar4 + 6) = (&DAT_0883f358)[(uint)local_2c[0] * 8];
    if (*(short *)(DAT_0202e8e0 + 0xe) == 0) {
      uVar13 = 0;
      do {
        if (*(char *)(local_28 +
                     (uint)(byte)(&DAT_0883f358)[(int)(short)uVar13 + (uint)local_2c[0] * 8]) !=
            '\0') {
          *(undefined1 *)(iVar4 + 6) = (&DAT_0883f358)[(int)(short)uVar13 + (uint)local_2c[0] * 8];
        }
        uVar7 = (int)(short)uVar13 + 1;
        uVar13 = uVar7 & 0xffff;
      } while ((int)(uVar7 * 0x10000) >> 0x10 < 8);
    }
    else {
      *(undefined *)(iVar4 + 6) = 0xe;
      *(undefined *)(iVar4 + 7) = 0;
    }
  }
  return in_lr;
}

