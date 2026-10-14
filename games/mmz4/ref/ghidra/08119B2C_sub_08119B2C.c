// sub_08119B2C at 0x08119B2C (thumb)

undefined4 sub_08119B2C(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_lr;
  
  pcVar10 = (char *)(param_1 + 0xdf7);
  if (*pcVar10 == '\0') {
    sub_0800249C(0x13,0);
    DAT_02000a40 = 0x251;
    *(undefined *)(param_1 + 0xdd2) = 0x2c;
    *(undefined *)(param_1 + 0xdfa) = 0;
    *(undefined *)(param_1 + 0xdfb) = 0;
    *pcVar10 = *pcVar10 + '\x01';
  }
  pcVar10 = (char *)(param_1 + 0xdfb);
  if (*pcVar10 == '\0') {
    sub_080025D8(*(byte *)(param_1 + 0xdd0) + 0x14);
    cVar2 = sub_080025D8(0x13);
    if (cVar2 == '\x03') {
      sub_08002624(0x13);
      *pcVar10 = *pcVar10 + '\x01';
    }
  }
  pbVar4 = (byte *)(param_1 + 0xdfa);
  if (*pbVar4 < 8) {
    DAT_02000a54 = 8;
  }
  else {
    DAT_02000a54 = 0xb0f0;
  }
  DAT_02000a58 = 0x80;
  *pbVar4 = *pbVar4 + 1;
  if (*(byte *)(param_1 + 0xdd0) == 4) {
    uVar12 = 0;
    uVar11 = 0;
  }
  else {
    uVar12 = (uint)*(byte *)(param_1 + 0xdd0);
    uVar11 = (uVar12 << 0x1d) >> 0x18;
    uVar12 = (uVar12 + 1) * 0x20000000 >> 0x18;
  }
  pbVar5 = (byte *)(param_1 + 0xdf7);
  if (*pbVar5 < 3) {
    sub_0811A75C(param_1);
    bVar1 = *(byte *)(param_1 + 0xdd0);
    if (bVar1 == 1) {
      *(ushort *)(param_1 + 0xdfc) = (ushort)*pbVar4 * 0x40 + *(short *)(param_1 + 0xdfc);
      *(undefined2 *)(param_1 + 0xdfe) = 0;
      *(ushort *)(param_1 + 0xe00) = (ushort)*pbVar4 * 0x40 + *(short *)(param_1 + 0xe00);
      *(ushort *)(param_1 + 0xe02) = (ushort)*pbVar4 * 0x60 + *(short *)(param_1 + 0xe02);
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          *(undefined2 *)(param_1 + 0xdfc) = 0;
          *(ushort *)(param_1 + 0xdfe) = (ushort)*pbVar4 * 0x40 + *(short *)(param_1 + 0xdfe);
          *(ushort *)(param_1 + 0xe00) = (ushort)*pbVar4 * 0x60 + *(short *)(param_1 + 0xe00);
          sVar3 = (ushort)*pbVar4 << 7;
LAB_08119ca6:
          *(short *)(param_1 + 0xe02) = sVar3 + *(short *)(param_1 + 0xe02);
          goto LAB_08119cd8;
        }
      }
      else if (bVar1 == 2) {
        *(ushort *)(param_1 + 0xdfc) = (ushort)*pbVar4 * 0x60 + *(short *)(param_1 + 0xdfc);
        *(ushort *)(param_1 + 0xdfe) = (ushort)*pbVar4 * 0x40 + *(short *)(param_1 + 0xdfe);
        *(undefined2 *)(param_1 + 0xe00) = 0;
        sVar3 = (ushort)*pbVar4 << 6;
        goto LAB_08119ca6;
      }
      *(ushort *)(param_1 + 0xdfc) = (ushort)*pbVar4 * 0x80 + *(short *)(param_1 + 0xdfc);
      *(ushort *)(param_1 + 0xdfe) = (ushort)*pbVar4 * 0x60 + *(short *)(param_1 + 0xdfe);
      *(ushort *)(param_1 + 0xe00) = (ushort)*pbVar4 * 0x40 + *(short *)(param_1 + 0xe00);
      *(undefined2 *)(param_1 + 0xe02) = 0;
    }
  }
LAB_08119cd8:
  if (*pbVar5 == 1) {
    DAT_02000a42 = (ushort)*pbVar4 * -2 + 0x10 & 0x1f | (ushort)*pbVar4 << 9;
    if (7 < *pbVar4) {
      *pbVar5 = 2;
      *(undefined *)(param_1 + 0xdd2) = 0xff;
    }
    iVar6 = sub_08000A70(0x140);
    if (iVar6 == 0) goto LAB_08119f16;
    sub_08000AB4(0x240,iVar6,0x140);
    uVar8 = 0;
    if (uVar11 != 0) {
      do {
        *(undefined2 *)(uVar8 * 2 + iVar6) = 0x1041;
        uVar8 = uVar8 + 1 & 0xff;
      } while (uVar8 < uVar11);
    }
    for (; DAT_03001704 = iVar6, uVar12 < 0x60; uVar12 = uVar12 + 1 & 0xff) {
      *(undefined2 *)(uVar12 * 2 + iVar6) = 0x1041;
    }
  }
  else if (*pbVar5 == 2) {
    DAT_02000a42 = (*pbVar4 - 8) * -2 + 0x10 & 0x1f | (*pbVar4 - 8) * 0x200;
    if (0xf < *pbVar4) {
      *pbVar5 = 3;
    }
    iVar6 = sub_08000A70(0x140);
    if (iVar6 == 0) goto LAB_08119f16;
    sub_08000AB4(0x240,iVar6,0x140);
    uVar9 = 0;
    uVar8 = uVar12;
    uVar7 = uVar12;
    if (uVar11 != 0) {
      do {
        *(undefined2 *)(uVar9 * 2 + iVar6) = 0x1251;
        uVar9 = uVar9 + 1 & 0xff;
      } while (uVar9 < uVar11);
    }
    while (-1 < (int)(uVar7 * 0x1000000)) {
      *(undefined2 *)(uVar8 * 2 + iVar6) = 0x1251;
      uVar7 = uVar8 + 1;
      uVar8 = uVar7 & 0xff;
    }
    for (; DAT_03001704 = iVar6, uVar11 < uVar12; uVar11 = uVar11 + 1 & 0xff) {
      *(undefined2 *)(uVar11 * 2 + iVar6) = 0x1241;
    }
  }
  else {
    DAT_02000a42 = (*pbVar4 - 0x10) * -2 + 0x10 & 0x1f | (*pbVar4 - 0x10) * 0x200;
    if (0x17 < *pbVar4) {
      *(char *)(param_1 + 3) = *(char *)(param_1 + 0xdd0) + '\x03';
      *pbVar5 = 0;
      sub_08001D30(&DAT_08c4453c,(DAT_0202e0c6 - 0x380) * 0x20 + 0x10000);
      sub_08002208(&DAT_08c44548,(DAT_0202dec6 - 0xb) * 0x20 + 0x200);
      DAT_02000a40 = 0;
      return in_lr;
    }
    iVar6 = sub_08000A70(0x140);
    if (iVar6 == 0) goto LAB_08119f16;
    sub_08000AB4(0x240,iVar6,0x140);
    for (; DAT_03001704 = iVar6, uVar11 < uVar12; uVar11 = uVar11 + 1 & 0xff) {
      *(undefined2 *)(uVar11 * 2 + iVar6) = 0x250;
    }
  }
  DAT_03001708 = &DAT_04000050;
  DAT_0300170c = 0xa2600001;
LAB_08119f16:
  iVar6 = sub_08000A70(0x140);
  if (iVar6 != 0) {
    sub_08000AB4(0,iVar6,0x140);
    uVar11 = 0;
    do {
      *(short *)(uVar11 * 2 + iVar6) =
           (short)(char)((ushort)*(undefined2 *)
                                  (param_1 + 0xdfc + (((uVar11 >> 5) << 0x18) >> 0x17)) >> 8);
      uVar11 = uVar11 + 1 & 0xff;
    } while (uVar11 < 0x60);
    DAT_03001724 = &DAT_04000010;
    DAT_03001728 = 0xa2600001;
    DAT_03001720 = iVar6;
  }
  return in_lr;
}

