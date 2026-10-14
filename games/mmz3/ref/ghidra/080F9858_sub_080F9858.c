// sub_080F9858 at 0x080F9858 (thumb)

undefined8 sub_080F9858(int param_1)

{
  undefined uVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  short *psVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  ushort *puVar12;
  undefined4 in_lr;
  
  piVar10 = (int *)(param_1 + 0xdcc);
  iVar3 = *(ushort *)(param_1 + 0xdd2) + 0x80;
  *(short *)(param_1 + 0xdd2) = (short)iVar3;
  bVar6 = (byte)((uint)(iVar3 * 0x10000) >> 0x18);
  DAT_020023d4._0_2_ = (ushort)bVar6;
  DAT_020023d4._2_2_ = -(ushort)bVar6;
  sub_080041E4(0xd6);
  if (*(byte *)(param_1 + 0xdd0) < 3) {
    bVar6 = *(byte *)(param_1 + 0xe17) + 1;
    *(byte *)(param_1 + 0xe17) = bVar6;
    if ((bVar6 & 0x1f) < 0x10) {
      *(undefined *)(*piVar10 + 0x13) = 1;
    }
    else {
      *(undefined *)(*piVar10 + 0x13) = 0;
    }
  }
  else {
    *(undefined *)(*piVar10 + 0x13) = 1;
    if (*(uint *)(param_1 + 0xdd8) < *(uint *)(param_1 + 0xdd4)) {
      uVar9 = *(uint *)(param_1 + 0xdd8) + 1;
      *(uint *)(param_1 + 0xdd8) = uVar9;
      pcVar7 = (char *)(param_1 + 0xe16);
      if ((*pcVar7 == '\0') && (DAT_02002458 < uVar9)) {
        sub_0800471C(0x138);
        *pcVar7 = *pcVar7 + '\x01';
      }
      if (((*(uint *)(param_1 + 0xdd8) & 3) == 0) && (iVar3 = sub_080047C0(0x138), iVar3 == 0)) {
        sub_0800471C(0x137);
      }
    }
  }
  switch(*(undefined *)(param_1 + 0xdd0)) {
  case 0:
    sub_08004694(0x136);
    *(undefined *)(param_1 + 0xe15) = 0;
    *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
    goto LAB_080f9dd4;
  case 1:
    pbVar4 = (byte *)(param_1 + 0xe15);
    bVar6 = *pbVar4;
    *pbVar4 = bVar6 + 1;
    if (0x20 < bVar6) {
      sub_080B5144(0);
      *pbVar4 = 0;
      *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
    }
    goto LAB_080f9dd4;
  case 2:
    bVar6 = *(byte *)(param_1 + 0xe15);
    *(byte *)(param_1 + 0xe15) = bVar6 + 1;
    if (0x78 < bVar6) {
      *(undefined4 *)(param_1 + 0xdd8) = 0;
      *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
    }
    goto LAB_080f9dd4;
  case 3:
    if (2 < *(byte *)(param_1 + 0xe13)) {
      sub_080B5144(4);
      sub_080046A4(0x136);
      *(undefined *)(param_1 + 0xe15) = 0;
      *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
    }
    break;
  case 4:
    bVar6 = *(byte *)(param_1 + 0xe15);
    *(byte *)(param_1 + 0xe15) = bVar6 + 1;
    if (0xa0 < bVar6) {
      DAT_02030ea4 = 0x40;
      *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
    }
    break;
  case 5:
    if (DAT_02030ea4 == 0x20) {
      uVar5 = 0;
      goto LAB_080f9dd6;
    }
  }
  uVar2 = *(short *)(param_1 + 0xddc) + 1;
  *(ushort *)(param_1 + 0xddc) = uVar2;
  if (*(ushort *)(param_1 + 0xdde) < uVar2) {
    *(ushort *)(param_1 + 0xddc) = *(ushort *)(param_1 + 0xdde);
  }
  if ((((*(short *)(DAT_020305e8 + 10) != 0) &&
       (pbVar4 = (byte *)(param_1 + 0xe0f), (short)(ushort)*pbVar4 <= *(short *)(DAT_020305e8 + 10))
       ) && (*(char *)(param_1 + 0xe12) != '\0')) &&
     (*(short *)(param_1 + 0xddc) == *(short *)(param_1 + 0xdde))) {
    DAT_0203710c = DAT_0203710c * 0x41c64e6d + 0x3039;
    uVar9 = sub_080FE4D8(DAT_0203710c >> 0x10,5);
    uVar11 = 0;
    do {
      iVar3 = sub_080FE390(uVar11 + (uVar9 & 0xff),5);
      pcVar7 = (char *)(param_1 + 0xde4 + iVar3);
      if (*pcVar7 == -1) {
        *pcVar7 = *(char *)(param_1 + 0xde0);
        *(undefined *)(param_1 + 0xde0) = *(undefined *)(param_1 + 0xde1);
        *(undefined *)(param_1 + 0xde1) = *(undefined *)(param_1 + 0xde2);
        *(undefined *)(param_1 + 0xde2) = *(undefined *)(param_1 + 0xde3);
        DAT_0203710c = DAT_0203710c * 0x41c64e6d + 0x3039;
        uVar1 = sub_080FE4D8(DAT_0203710c >> 0x10,5);
        *(undefined *)(param_1 + 0xde3) = uVar1;
        *(undefined2 *)(param_1 + 0xddc) = 0;
        if ((uint)*(byte *)(param_1 + 0xe0e) == (uint)*pbVar4) {
          puVar12 = (ushort *)(param_1 + 0xe10);
          if (*puVar12 < 0x180) {
            *puVar12 = *puVar12 + 0x14;
          }
          else if (*(byte *)(param_1 + 0xdd0) < 4) {
            sub_0800471C(6);
            *puVar12 = 0x40;
            *pbVar4 = *pbVar4 - 1;
          }
        }
        else if ((uint)*(byte *)(param_1 + 0xe0e) - (uint)*pbVar4 == 1) {
          uVar2 = *(ushort *)(param_1 + 0xe10);
          if (uVar2 < 0x400) {
            *(ushort *)(param_1 + 0xe10) = uVar2 + 0x14;
          }
        }
        *(char *)(param_1 + 0xe12) = '\0';
        break;
      }
      uVar11 = uVar11 + 1 & 0xff;
    } while (uVar11 < 5);
  }
  if (*(byte *)(param_1 + 0xdd0) < 4) {
    if ((DAT_02002134 & 3) == 0) {
      iVar3 = 0xff;
      if ((DAT_02002136 & 0x20) == 0) {
        if ((DAT_02002136 & 0x10) == 0) {
          if ((DAT_02002136 & 0x40) == 0) {
            if ((DAT_02002136 & 0x80) != 0) {
              iVar3 = 3;
            }
          }
          else {
            iVar3 = 2;
          }
        }
        else {
          iVar3 = 1;
        }
      }
      else {
        iVar3 = 0;
      }
      if ((iVar3 != 0xff) &&
         (uVar9 = (uint)*(byte *)(param_1 + 0xdee), bVar6 = (&DAT_0838c25c)[iVar3 + uVar9 * 4],
         *(byte *)(param_1 + 0xdee) = bVar6, uVar9 != bVar6)) {
        sub_0800471C(1);
      }
    }
    else if (*(char *)(param_1 + 0xe04 + (uint)*(byte *)(param_1 + 0xdee)) == '\0') {
      psVar8 = (short *)(param_1 + 0xdf0 + (uint)*(byte *)(param_1 + 0xdee) * 2);
      if (*psVar8 == 0xff) {
        *psVar8 = 0;
      }
      else {
        *psVar8 = 0xff;
      }
      sub_0800471C(5);
    }
  }
  bVar6 = *(byte *)(param_1 + 0xe13);
  if (bVar6 != *(byte *)(param_1 + 0xe14)) {
    *(byte *)(param_1 + 0xe14) = bVar6;
    sub_0800471C(4);
    bVar6 = *(byte *)(param_1 + 0xe13);
    if (bVar6 == 2) {
      *(undefined2 *)(param_1 + 0x1106) = 0x3092;
      *(undefined2 *)(param_1 + 0x1108) = 0x3093;
      *(undefined2 *)(param_1 + 0x1146) = 0x3098;
      *(undefined2 *)(param_1 + 0x1148) = 0x3099;
      *(undefined2 *)(param_1 + 0x110a) = 0x3094;
      *(undefined2 *)(param_1 + 0x110c) = 0x3095;
      *(undefined2 *)(param_1 + 0x114a) = 0x3098;
      iVar3 = 0x114c;
LAB_080f9db8:
      *(undefined2 *)(param_1 + iVar3) = 0x3099;
    }
    else if (bVar6 < 3) {
      if (bVar6 == 1) {
        *(undefined2 *)(param_1 + 0x1106) = 0x3092;
        *(undefined2 *)(param_1 + 0x1108) = 0x3093;
        *(undefined2 *)(param_1 + 0x1146) = 0x3098;
        *(undefined2 *)(param_1 + 0x1148) = 0x3099;
      }
    }
    else if (bVar6 == 3) {
      *(undefined2 *)(param_1 + 0x1106) = 0x3092;
      *(undefined2 *)(param_1 + 0x1108) = 0x3093;
      *(undefined2 *)(param_1 + 0x1146) = 0x3098;
      *(undefined2 *)(param_1 + 0x1148) = 0x3099;
      *(undefined2 *)(param_1 + 0x110a) = 0x3094;
      *(undefined2 *)(param_1 + 0x110c) = 0x3095;
      *(undefined2 *)(param_1 + 0x114a) = 0x3098;
      *(undefined2 *)(param_1 + 0x114c) = 0x3099;
      *(undefined2 *)(param_1 + 0x110e) = 0x3096;
      *(undefined2 *)(param_1 + 0x1110) = 0x3097;
      *(undefined2 *)(param_1 + 0x114e) = 0x3098;
      iVar3 = 0x1150;
      goto LAB_080f9db8;
    }
    sub_08003B28(param_1 + 0xed8,(DAT_020023c6 & 0x1f00) << 3,0x1000);
  }
LAB_080f9dd4:
  uVar5 = 1;
LAB_080f9dd6:
  return CONCAT44(in_lr,uVar5);
}

