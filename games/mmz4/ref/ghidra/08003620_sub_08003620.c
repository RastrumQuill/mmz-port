// sub_08003620 at 0x08003620 (thumb)

undefined4 sub_08003620(uint *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  ushort *puVar16;
  byte *pbVar17;
  undefined4 in_lr;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  
  bVar2 = false;
  uVar11 = *param_2;
  if ((uVar11 & 0x10) == (*param_1 & 0x10)) {
    bVar2 = true;
    uVar11 = param_2[1];
  }
  else if ((int)*param_1 < (int)uVar11) {
    local_54 = uVar11 + 0x110;
    uVar11 = param_2[1];
    local_50 = uVar11 - 0x10;
  }
  else {
    local_54 = uVar11 - 0x20;
    uVar11 = param_2[1];
    local_50 = uVar11 - 0x10;
  }
  bVar3 = false;
  if ((uVar11 & 0x10) == (param_1[1] & 0x10)) {
    bVar3 = true;
  }
  else if ((int)param_1[1] < (int)uVar11) {
    local_4c = *param_2 - 0x20;
    local_48 = uVar11 + 0xb0;
  }
  else {
    local_4c = *param_2 - 0x20;
    local_48 = uVar11 - 0x10;
  }
  if ((int)local_54 < 0) {
    local_54 = 0;
  }
  if ((int)local_50 < 0) {
    local_50 = 0;
  }
  if ((int)local_4c < 0) {
    local_4c = 0;
  }
  if ((int)local_48 < 0) {
    local_48 = 0;
  }
  if (!bVar2) {
    iVar5 = FUN_081288bc(local_54,0xf0);
    pbVar17 = (byte *)param_1[5];
    iVar6 = FUN_081288bc(local_50,0xa0);
    pbVar15 = pbVar17 + (uint)*pbVar17 * iVar6 + iVar5 + 4;
    iVar5 = sub_08128954(local_54,0xf0);
    iVar6 = sub_08128954(local_50,0xa0);
    uVar11 = param_1[4];
    iVar4 = (iVar6 << 0xc) >> 0x10;
    puVar16 = (ushort *)
              (uVar11 + (uint)*pbVar15 * 300 + ((int)(iVar5 << 0xc & 0xffff0000U) >> 0xf) +
              iVar4 * 0x1e);
    uVar13 = 0;
    iVar4 = 10 - iVar4;
    uVar12 = (int)local_54 >> 3;
    if (0 < iVar4) {
      uVar9 = param_1[3];
      do {
        puVar14 = (undefined4 *)((uint)*puVar16 * 8 + uVar9);
        puVar7 = (undefined4 *)
                 ((((int)(((local_50 & 0xffff) + (short)uVar13 * 0x10) * 0x10000) >> 0xe & 0x3c0U) +
                  (uVar12 & 0x1e)) * 2 + param_3 + (local_54 & 0x100) * 8);
        *puVar7 = *puVar14;
        puVar7[0x10] = puVar14[1];
        puVar16 = puVar16 + 0xf;
        uVar8 = (int)(short)uVar13 + 1;
        uVar13 = uVar8 & 0xffff;
      } while ((int)(uVar8 * 0x10000) >> 0x10 < iVar4);
    }
    bVar1 = *pbVar17;
    iVar5 = (int)(iVar5 << 0xc & 0xffff0000U) >> 0xf;
    puVar16 = (ushort *)(uVar11 + (uint)pbVar15[bVar1] * 300 + iVar5);
    iVar4 = uVar13 << 0x10;
    if ((iVar4 >> 0x10 < 0xd) &&
       (iVar6 = (int)(short)((uint)(iVar6 << 0xc) >> 0x10), (iVar4 >> 0x10) + -10 + iVar6 < 10)) {
      do {
        puVar14 = (undefined4 *)(param_1[3] + (uint)*puVar16 * 8);
        puVar7 = (undefined4 *)
                 ((((int)(((iVar4 >> 0x10) * 0x10 + (local_50 & 0xffff)) * 0x10000) >> 0xe & 0x3c0U)
                  + (uVar12 & 0x1e)) * 2 + param_3 + (local_54 & 0x100) * 8);
        *puVar7 = *puVar14;
        puVar7[0x10] = puVar14[1];
        puVar16 = puVar16 + 0xf;
        uVar13 = (iVar4 >> 0x10) + 1U & 0xffff;
        iVar4 = uVar13 << 0x10;
        if (0xc < iVar4 >> 0x10) break;
      } while ((iVar4 >> 0x10) + -10 + iVar6 < 10);
    }
    puVar16 = (ushort *)(uVar11 + (uint)(pbVar15 + bVar1)[*pbVar17] * 300 + iVar5);
    iVar5 = uVar13 << 0x10;
    if (iVar5 >> 0x10 < 0xd) {
      uVar11 = param_1[3];
      do {
        puVar14 = (undefined4 *)(uVar11 + (uint)*puVar16 * 8);
        puVar7 = (undefined4 *)
                 ((local_54 & 0x100) * 8 +
                 (((int)(((iVar5 >> 0x10) * 0x10 + (local_50 & 0xffff)) * 0x10000) >> 0xe & 0x3c0U)
                 + (uVar12 & 0x1e)) * 2 + param_3);
        *puVar7 = *puVar14;
        puVar7[0x10] = puVar14[1];
        puVar16 = puVar16 + 0xf;
        iVar5 = ((iVar5 >> 0x10) + 1) * 0x10000;
      } while (iVar5 >> 0x10 < 0xd);
    }
  }
  if (!bVar3) {
    iVar5 = FUN_081288bc(local_4c,0xf0);
    pbVar15 = (byte *)param_1[5];
    iVar6 = FUN_081288bc(local_48,0xa0);
    pbVar15 = pbVar15 + (uint)*pbVar15 * iVar6 + iVar5 + 4;
    iVar5 = sub_08128954(local_4c,0xf0);
    iVar6 = sub_08128954(local_48,0xa0);
    uVar11 = param_1[4];
    sVar10 = (short)((uint)(iVar5 << 0xc) >> 0x10);
    iVar5 = (iVar6 << 0xc) >> 0x10;
    puVar16 = (ushort *)(uVar11 + (uint)*pbVar15 * 300 + sVar10 * 2 + iVar5 * 0x1e);
    uVar12 = 0;
    iVar6 = 0xf - sVar10;
    if (0 < iVar6) {
      uVar13 = param_1[3];
      do {
        puVar14 = (undefined4 *)((uint)*puVar16 * 8 + uVar13);
        uVar9 = ((local_4c & 0xffff) + (short)uVar12 * 0x10) * 0x10000;
        puVar7 = (undefined4 *)
                 (((int)(uVar9 & 0x1000000) >> 0x10) * 8 +
                 ((local_48 & 0xf0) * 4 + ((int)uVar9 >> 0x13 & 0x1eU)) * 2 + param_3);
        *puVar7 = *puVar14;
        puVar7[0x10] = puVar14[1];
        puVar16 = puVar16 + 1;
        uVar9 = (int)(short)uVar12 + 1;
        uVar12 = uVar9 & 0xffff;
      } while ((int)(uVar9 * 0x10000) >> 0x10 < iVar6);
    }
    puVar16 = (ushort *)(uVar11 + (uint)pbVar15[1] * 300 + iVar5 * 0x1e);
    iVar6 = uVar12 << 0x10;
    if ((iVar6 >> 0x10 < 0x14) && ((iVar6 >> 0x10) + -0xf + (int)sVar10 < 0xf)) {
      do {
        puVar14 = (undefined4 *)(param_1[3] + (uint)*puVar16 * 8);
        uVar12 = ((iVar6 >> 0x10) * 0x10 + (local_4c & 0xffff)) * 0x10000;
        puVar7 = (undefined4 *)
                 (((int)(uVar12 & 0x1000000) >> 0x10) * 8 +
                 ((local_48 & 0xf0) * 4 + ((int)uVar12 >> 0x13 & 0x1eU)) * 2 + param_3);
        *puVar7 = *puVar14;
        puVar7[0x10] = puVar14[1];
        puVar16 = puVar16 + 1;
        uVar12 = (iVar6 >> 0x10) + 1U & 0xffff;
        iVar6 = uVar12 << 0x10;
        if (0x13 < iVar6 >> 0x10) break;
      } while ((iVar6 >> 0x10) + -0xf + (int)sVar10 < 0xf);
    }
    puVar16 = (ushort *)(uVar11 + (uint)pbVar15[2] * 300 + iVar5 * 0x1e);
    iVar5 = uVar12 << 0x10;
    if (iVar5 >> 0x10 < 0x14) {
      uVar11 = param_1[3];
      do {
        puVar14 = (undefined4 *)((uint)*puVar16 * 8 + uVar11);
        uVar12 = ((iVar5 >> 0x10) * 0x10 + (local_4c & 0xffff)) * 0x10000;
        puVar7 = (undefined4 *)
                 (((int)(uVar12 & 0x1000000) >> 0x10) * 8 +
                 ((local_48 & 0xf0) * 4 + ((int)uVar12 >> 0x13 & 0x1eU)) * 2 + param_3);
        *puVar7 = *puVar14;
        puVar7[0x10] = puVar14[1];
        puVar16 = puVar16 + 1;
        iVar5 = ((iVar5 >> 0x10) + 1) * 0x10000;
      } while (iVar5 >> 0x10 < 0x14);
    }
  }
  uVar12 = *param_2;
  *(ushort *)(param_1 + 2) = (ushort)uVar12 & 0x1ff;
  uVar11 = param_2[1];
  *(ushort *)((int)param_1 + 10) = (ushort)uVar11 & 0x1ff;
  *param_1 = uVar12;
  param_1[1] = uVar11;
  return in_lr;
}

