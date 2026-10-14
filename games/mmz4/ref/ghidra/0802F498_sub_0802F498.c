// sub_0802F498 at 0x0802F498 (thumb)

undefined4 sub_0802F498(int param_1)

{
  undefined uVar1;
  ushort uVar2;
  char cVar3;
  undefined uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  ushort *puVar14;
  byte *pbVar15;
  ushort *puVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 in_lr;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint *local_38;
  int local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  byte *local_24;
  
  local_40 = *(int *)(param_1 + 0x54);
  local_3c = *(int *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    sub_0802B7A4(param_1);
  }
  psVar9 = (short *)(param_1 + 0x10e);
  if (*psVar9 == -1) {
    iVar10 = *(int *)(param_1 + 0x58);
    iVar11 = DAT_0202cabc;
    if ((DAT_02000c80 & 0x7f) == 2) {
      iVar11 = sub_08007B84(param_1 + 0x54);
    }
    if (iVar11 < iVar10 + -0x1e00) {
      sVar8 = sub_08002B10(0x32);
LAB_0802f554:
      *psVar9 = sVar8;
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x58);
    iVar11 = DAT_0202cabc;
    if ((DAT_02000c80 & 0x7f) == 2) {
      iVar11 = sub_08007B84(param_1 + 0x54);
    }
    if (iVar10 < iVar11) {
      sub_08002B5C((int)*psVar9);
      sVar8 = -1;
      goto LAB_0802f554;
    }
  }
  pcVar18 = (char *)(param_1 + 0xfc);
  *pcVar18 = *(char *)(param_1 + 0xd);
  pcVar17 = (char *)(param_1 + 0xfd);
  *pcVar17 = *(char *)(param_1 + 0xe);
  sub_08038C40(param_1);
  local_38 = (uint *)(param_1 + 0x8c);
  local_24 = (byte *)(param_1 + 0x174);
  pbVar12 = (byte *)(param_1 + 0x142);
  local_30 = pcVar18;
  local_2c = pcVar17;
  if ((*local_38 & 0x200) == 0) {
    psVar9 = (short *)(param_1 + 0xa4);
    if (*psVar9 != 0) {
      cVar3 = sub_0802E690(param_1,&DAT_0884fe30 + (uint)*local_24 * 8);
      if (cVar3 == '\x01') {
        sub_08038994(param_1);
      }
      else if (cVar3 == '\x02') {
        *pbVar12 = *pbVar12 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
        *psVar9 = 0;
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    if (((*local_38 & 0x200) == 0) && (*psVar9 != 0)) {
      cVar3 = sub_0802CDE8(param_1,&DAT_0884fe30 + (uint)*local_24 * 8);
      if (cVar3 == '\x01') {
        *pbVar12 = *pbVar12 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
        *psVar9 = 0;
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else if (cVar3 == '\x02') {
        sub_08038994(param_1);
      }
      sub_0802CD2C(param_1);
    }
  }
  local_34 = param_1 + 0xb4;
  if ((*(char *)(param_1 + 0xd) != '\x01') && (*(char *)(param_1 + 0xd) != '\x04')) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x58);
  *(ushort *)(param_1 + 0x16c) =
       CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  *(undefined *)(param_1 + 0x16e) = *(undefined *)(param_1 + 0x71);
  *(undefined *)(param_1 + 0x16f) = *(undefined *)(param_1 + 0x72);
  *(byte *)(param_1 + 0x175) = *local_24;
  *local_24 = 0;
  if ((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x400) {
    *(undefined *)(param_1 + 0x1b9) = 0;
  }
  local_28 = (char *)(param_1 + 0x170);
  *local_28 = '\0';
  if (((((*local_38 & 0x200) == 0) && (psVar9 = (short *)(param_1 + 0xa4), *psVar9 != 0)) &&
      (1 < (byte)(*(char *)(param_1 + 0xd) - 7U))) &&
     ((*(char *)(param_1 + 0xd) != '\n' &&
      ((*(int *)(param_1 + 0x184) <
        (*(int *)(param_1 + 0x58) - (int)*(short *)(&DAT_0884fe36 + (uint)*local_24 * 8)) + -0x800
       || ((cVar3 = sub_08007098(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58)),
           cVar3 != '\0' &&
           (cVar3 = sub_08007098(*(undefined4 *)(param_1 + 0x54),
                                 (*(int *)(param_1 + 0x58) -
                                 (int)*(short *)(&DAT_0884fe36 + (uint)*local_24 * 8)) + -0x800),
           cVar3 != '\0')))))))) {
    uVar13 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1e00);
    if ((uVar13 & 0x400) == 0) {
      cVar3 = sub_08038A54(param_1);
      if (cVar3 == '\0') {
        *pbVar12 = *pbVar12 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
        *psVar9 = 0;
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *pbVar12 = *pbVar12 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
      *psVar9 = 0;
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  uVar2 = *(ushort *)(param_1 + 0x15a);
  if (uVar2 != 0) {
    uVar6 = uVar2 & 0x8000;
    if ((uVar2 & 0x8000) != 0) {
      uVar6 = uVar2 ^ 0x8000;
    }
    *(ushort *)(param_1 + 0x15a) = uVar6;
  }
  sub_08128884(param_1,*(undefined4 *)(&UNK_0884f918 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if ((*pbVar12 & 0x10) != 0) {
    if ((*(int *)(local_34 + 0x70) < *(int *)(param_1 + 0x58)) &&
       (((uVar13 = sub_08007D28(*(undefined4 *)(param_1 + 0x54)), (uVar13 & 0x8000) == 0 ||
         (uVar13 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
         (uVar13 & 0xf) == 0)) ||
        (uVar13 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
        0xe < (uVar13 & 0xf))))) {
      *pbVar12 = *pbVar12 & 0xef;
    }
    if (*(int *)(param_1 + 0x58) < *(int *)(local_34 + 0x70) + -0xe00) {
      *pbVar12 = *pbVar12 & 0xef;
    }
  }
  if (*(char *)(param_1 + 0xd) != '\x05') {
    *(undefined *)(param_1 + 0x171) = 0;
    *(undefined *)(param_1 + 0x172) = 0;
  }
  if ((*(char *)(param_1 + 0xd) != '\x04') &&
     (((*local_38 & 0x200) != 0 || (*(short *)(param_1 + 0xa4) == 0)))) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08128884(param_1,*(undefined4 *)(&UNK_0884f948 + (uint)*(byte *)(param_1 + 0xd) * 4));
  *(undefined *)(param_1 + 0x14e) = 0xff;
  *(undefined *)(param_1 + 0x14f) = 0xff;
  *(undefined *)(param_1 + 0x150) = 0xff;
  bVar5 = 0;
  pbVar15 = (byte *)(param_1 + 0x153);
  pcVar17 = (char *)(param_1 + 0x14d);
  if ((*pbVar15 & 8) != 0) {
    if (*(char *)(param_1 + 0xd) == *local_30) {
      if ((*(char *)(param_1 + 0xd) != '\0') || (*(char *)(param_1 + 0xe) == *local_2c))
      goto LAB_0802f944;
      cVar3 = *pcVar17;
    }
    else {
      cVar3 = *pcVar17;
    }
    if (cVar3 == '\0') {
      *(undefined *)(param_1 + 0x100) = 0;
    }
    else {
      bVar5 = 1;
    }
  }
LAB_0802f944:
  *pbVar15 = *pbVar15 & 0xf1;
  *pcVar17 = '\0';
  *pbVar15 = *pbVar15 & 0xfe | bVar5;
  *(undefined *)(param_1 + 0x167) = 0;
  if (*(byte *)(param_1 + 0xd) < 4) {
    sub_08128884(param_1,*(undefined4 *)(&UNK_0884f978 + (uint)*(byte *)(param_1 + 0xd) * 4));
    cVar3 = *(char *)(param_1 + 0x279);
    if ((cVar3 != '\0') && (cVar3 = cVar3 + -1, *(char *)(param_1 + 0x279) = cVar3, cVar3 == '\0'))
    {
      sub_08108CD8(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0x100) = 0;
  }
  *pbVar15 = *pbVar15 & 0xcf;
  cVar3 = sub_08038A84(param_1);
  if (cVar3 == '\0') {
    cVar3 = sub_08038AB8(param_1);
    if (cVar3 == '\0') {
      sub_08005784(param_1 + 0x74,&DAT_0884fe60 + (uint)*local_24 * 0x18);
    }
    else {
      sub_080057FC(param_1 + 0x74,&DAT_0884fe60 + (uint)*local_24 * 0x18,0x20);
    }
  }
  else {
    sub_080057FC(param_1 + 0x74,&DAT_0884fe60 + (uint)*local_24 * 0x18,0x80);
  }
  uVar4 = sub_08038928(param_1);
  sub_0802B524(param_1,uVar4);
  if (((1 < (byte)(*(char *)(param_1 + 0xd) - 7U)) && (*(char *)(param_1 + 0xd) != '\n')) &&
     (cVar3 = sub_0802CC00(param_1,&DAT_0884fe30 + (uint)*local_24 * 8,1), cVar3 != '\0')) {
    *pbVar12 = *pbVar12 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(int *)(param_1 + 0x54) = local_40;
    *(int *)(param_1 + 0x58) = local_3c;
  }
  if ((*pbVar12 & 4) == 0) {
    iVar11 = *(int *)(param_1 + 0x58);
    iVar10 = iVar11 - ((int)((uint)*(ushort *)(&DAT_0884fe36 + (uint)*local_24 * 8) << 0x10) >> 0x11
                      );
    if ((DAT_02000c80 & 0x7f) == 2) {
      iVar11 = sub_08007B84(param_1 + 0x54);
      if (iVar11 < iVar10) {
LAB_0802faf6:
        sVar8 = *(short *)(&DAT_0884fe36 + (uint)*local_24 * 8);
        iVar10 = *(int *)(param_1 + 0x58);
        iVar11 = DAT_0202cabc;
        if ((DAT_02000c80 & 0x7f) == 2) {
          iVar11 = sub_08007B84(param_1 + 0x54);
        }
        if (iVar10 - sVar8 < iVar11) {
          sub_080D374C(param_1,1);
        }
        goto LAB_0802fb7c;
      }
      iVar11 = *(int *)(param_1 + 0x58);
    }
    else if (DAT_0202cabc < iVar10) goto LAB_0802faf6;
    iVar10 = DAT_0202cabc;
    if ((DAT_02000c80 & 0x7f) == 2) {
      iVar10 = sub_08007B84(param_1 + 0x54);
    }
    if (iVar10 < iVar11) {
      sub_080D374C(param_1,0);
    }
  }
LAB_0802fb7c:
  *pbVar12 = *pbVar12 & 0xf7;
  puVar16 = (ushort *)(param_1 + 0x252);
  if ((*puVar16 & 0x8000) == 0) {
    if (*(char *)(param_1 + 0x1cf) == '\0') {
      if (((*local_38 & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) {
        iVar11 = local_40 - *(int *)(param_1 + 0x54);
        if (iVar11 < 0) {
          iVar11 = *(int *)(param_1 + 0x54) - local_40;
        }
        if (0x1000 < iVar11) {
          *pbVar12 = *pbVar12 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
          *(short *)(param_1 + 0xa4) = 0;
          *(undefined *)(param_1 + 0xd) = 4;
          *(undefined *)(param_1 + 0xe) = 0;
          *(int *)(param_1 + 0x54) = local_40;
          *(int *)(param_1 + 0x58) = local_3c;
        }
      }
      if (((*(char *)(param_1 + 0x1bb) != '\0') && ((*local_38 & 0x200) == 0)) &&
         (*(short *)(param_1 + 0xa4) != 0)) {
        iVar11 = local_3c - *(int *)(param_1 + 0x58);
        if (iVar11 < 0) {
          iVar11 = *(int *)(param_1 + 0x58) - local_3c;
        }
        if (0x1000 < iVar11) {
          *pbVar12 = *pbVar12 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
          *(short *)(param_1 + 0xa4) = 0;
          *(undefined *)(param_1 + 0xd) = 4;
          *(undefined *)(param_1 + 0xe) = 0;
          *(int *)(param_1 + 0x54) = local_40;
          *(int *)(param_1 + 0x58) = local_3c;
        }
      }
    }
    if (((*puVar16 & 0x8000) == 0) && (*(char *)(param_1 + 0xd) != '\b')) {
      if ((((*local_38 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) ||
         ((DAT_02000c80 != 7 && (DAT_02000c80 != 0x10)))) goto LAB_0802fe5c;
      puVar14 = (ushort *)(param_1 + 0x27e);
      uVar2 = *puVar14;
      local_4c = *(int *)(param_1 + 0x58) + (*(int *)(&DAT_0884fe30 + (uint)*local_24 * 8) >> 0x10);
      sVar8 = (short)*(int *)(&DAT_0884fe30 + (uint)*local_24 * 8);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_50 = *(int *)(param_1 + 0x54) + (int)sVar8;
        iVar11 = (*(int *)(&DAT_0884fe34 + (uint)*local_24 * 8) << 0x10) >> 0x11;
        local_48 = local_50 - iVar11;
        local_50 = local_50 + iVar11;
      }
      else {
        local_50 = *(int *)(param_1 + 0x54) - (int)sVar8;
        iVar11 = (*(int *)(&DAT_0884fe34 + (uint)*local_24 * 8) << 0x10) >> 0x11;
        local_48 = local_50 + iVar11;
        local_50 = local_50 - iVar11;
      }
      local_44 = local_4c;
      if (DAT_02000c80 == 7) {
        cVar3 = sub_08012948(&local_48);
        if (cVar3 != '\0') {
LAB_0802fd66:
          uVar7 = *puVar14 + (ushort)(byte)DAT_0202dadc;
          *puVar14 = uVar7;
          goto joined_r0x0802fdae;
        }
        uVar6 = sub_08012948(&local_50);
        uVar6 = uVar6 & 0xff;
        if (uVar6 != 0) goto LAB_0802fd66;
LAB_0802fdb2:
        uVar7 = *puVar14;
        *puVar14 = (ushort)(uVar7 - 0x21);
        if ((int)((uVar7 - 0x21) * 0x10000) < 0) goto LAB_0802fdbe;
      }
      else {
        cVar3 = sub_0801C574(&local_48);
        if (cVar3 == '\0') {
          uVar6 = sub_0801C574(&local_50);
          uVar6 = uVar6 & 0xff;
          if (uVar6 == 0) goto LAB_0802fdb2;
        }
        uVar7 = *puVar14 + 6;
        *puVar14 = uVar7;
joined_r0x0802fdae:
        uVar6 = 1000;
        if (1000 < (short)uVar7) {
LAB_0802fdbe:
          *puVar14 = uVar6;
        }
      }
      if (((int)(uint)uVar2 < (int)(short)*puVar14) || ((short)*puVar14 == 1000)) {
        cVar3 = *(char *)(param_1 + 0x27d);
        *(char *)(param_1 + 0x27d) = cVar3 + '\x01';
        cVar3 = sub_08128A9C(cVar3,(&DAT_0884f99b)[(byte)DAT_0202dadc]);
        if (cVar3 == '\0') {
          uVar2 = *puVar14;
          if ((short)uVar2 < 0x12d) {
            if (uVar2 != 1000) goto LAB_0802fe5c;
          }
          else if ((short)uVar2 < 0x3b7) {
            sVar8 = FUN_081288bc((int)(short)*puVar14,100);
            sub_08002B10(sVar8 + 0xa8);
            goto LAB_0802fe5c;
          }
          sub_08002B10(0xb2);
        }
      }
      goto LAB_0802fe5c;
    }
  }
  puVar14 = (ushort *)(param_1 + 0x27e);
  uVar2 = *puVar14;
  *puVar14 = (ushort)(uVar2 - 0x21);
  if ((int)((uVar2 - 0x21) * 0x10000) < 0) {
    *puVar14 = 0;
  }
LAB_0802fe5c:
  iVar11 = *(int *)(local_34 + 0x38);
  if (iVar11 != 0) {
    if (iVar11 < 1) {
      *(int *)(local_34 + 0x38) = iVar11 + 1;
    }
    else {
      *(int *)(local_34 + 0x38) = iVar11 + -1;
    }
  }
  cVar3 = *(char *)(param_1 + 0x165);
  if (cVar3 != '\0') {
    *(char *)(param_1 + 0x165) = cVar3 + -1;
  }
  cVar3 = *(char *)(param_1 + 0x166);
  if (cVar3 != '\0') {
    *(char *)(param_1 + 0x166) = cVar3 + -1;
  }
  cVar3 = *(char *)(param_1 + 0x27a);
  if (cVar3 != '\0') {
    *(char *)(param_1 + 0x27a) = cVar3 + -1;
  }
  if ((((*puVar16 & 0x8000) == 0) && ((*local_38 & 0x200) == 0)) &&
     (*(short *)(param_1 + 0xa4) != 0)) {
    if (*(char *)(local_34 + 0x10) == '\a') {
      if (((*(byte *)(local_34 + 0xc) < 3) && (*(byte *)(local_34 + 0xd) < 3)) ||
         (pbVar12 = (byte *)(param_1 + 0xe6), *pbVar12 == 0xff)) {
        *(undefined2 *)(param_1 + 0x158) = 0;
      }
      else {
        if (*(byte *)(local_34 + 0xc) < 3) {
          uVar4 = *(undefined *)(local_34 + 0xd);
          uVar1 = *(undefined *)(local_34 + 0xf);
        }
        else {
          uVar4 = *(undefined *)(local_34 + 0xc);
          uVar1 = *(undefined *)(local_34 + 0xf);
        }
        bVar5 = sub_0803A614(param_1,uVar4,uVar1);
        if (*pbVar12 < bVar5) {
          if (600 < *(ushort *)(param_1 + 0x158)) {
            sub_08002B10(0x1c);
            *pbVar12 = bVar5;
            *(ushort *)(param_1 + 0x158) = 0;
          }
        }
        else {
          *(undefined2 *)(param_1 + 0x158) = 0;
        }
      }
      *(short *)(param_1 + 0x158) = *(short *)(param_1 + 0x158) + 1;
    }
    else {
      *(undefined2 *)(param_1 + 0x158) = 0;
    }
  }
  if (*local_28 == '\0') {
    sub_0801CFF0(param_1);
  }
  sub_0803843C(param_1);
  *(undefined *)(param_1 + 0x176) = 0;
  *(int *)(local_34 + 0x6c) = *(int *)(param_1 + 0x54) - local_40;
  return in_lr;
}

