// sub_08003F1C at 0x08003F1C (thumb)

undefined4 sub_08003F1C(int *param_1,int *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  ushort *puVar18;
  uint uVar19;
  uint uVar20;
  undefined4 in_lr;
  int local_58;
  uint local_50;
  
  local_58 = *param_2 + -0x20;
  if (local_58 < 1) {
    local_58 = 0;
  }
  iVar2 = param_2[1] + -0x10;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = sub_080C8AD0(local_58,0xf0);
  pbVar17 = (byte *)param_1[5];
  iVar4 = sub_080C8AD0(iVar2,0xa0);
  pbVar13 = pbVar17 + (uint)*pbVar17 * iVar4 + iVar3 + 4;
  iVar3 = sub_080C8B68(local_58,0xf0);
  iVar4 = sub_080C8B68(iVar2,0xa0);
  iVar11 = param_1[4];
  iVar14 = (iVar3 << 0xc) >> 0x10;
  iVar3 = (iVar4 << 0xc) >> 0x10;
  puVar18 = (ushort *)
            (iVar11 + ((uint)*pbVar13 * 4 + (uint)*pbVar13) * 0x3c + iVar14 * 2 + iVar3 * 0x1e);
  uVar10 = 0;
  uVar19 = 0;
  uVar20 = 0;
  do {
    local_50 = 0;
    uVar7 = 0;
    uVar12 = uVar19 << 0x10;
    iVar4 = (int)(short)uVar10;
    do {
      iVar9 = (int)(uVar7 * 0x10000) >> 0x10;
      uVar10 = uVar19;
      if (iVar4 != 0) goto LAB_0800400c;
      uVar5 = uVar12;
      if ((int)uVar12 >> 0x10 < 10 - iVar3) {
LAB_08004034:
        do {
          uVar20 = local_50;
          if (uVar7 != 0) goto LAB_0800405c;
          if ((int)(short)local_50 < 0xf - iVar14) {
            do {
              while( true ) {
                while( true ) {
                  puVar16 = (undefined4 *)(param_1[3] + (uint)*puVar18 * 8);
                  iVar6 = (local_58 + (short)uVar20 * 0x10) * 0x10000;
                  puVar8 = (undefined4 *)
                           ((short)((ushort)((uint)iVar6 >> 0x10) & 0x100) * 8 +
                           (((iVar2 + ((int)uVar5 >> 0xc)) * 0x10000 >> 0xe & 0x3c0U) +
                           (iVar6 >> 0x13 & 0x1eU)) * 2 + param_3);
                  *puVar8 = *puVar16;
                  puVar8[0x10] = puVar16[1];
                  puVar18 = puVar18 + 1;
                  uVar15 = (int)(short)uVar20 + 1;
                  uVar20 = uVar15 & 0xffff;
                  if (uVar7 != 0) break;
                  if (0xf - iVar14 <= (int)(short)uVar15) goto LAB_080040e8;
                }
LAB_0800405c:
                sVar1 = (short)uVar20;
                if (iVar9 != 1) break;
                if ((0x13 < sVar1) || (0xe < sVar1 + -0xf + iVar14)) goto LAB_080040e8;
              }
            } while (sVar1 < 0x14);
          }
LAB_080040e8:
          puVar18 = puVar18 + (0xf - ((int)(short)uVar20 - (int)(short)local_50));
          uVar5 = uVar10 * 0x10000 + 0x10000;
          uVar10 = uVar5 >> 0x10;
          if (iVar4 == 0) {
            if (10 - iVar3 <= (int)uVar5 >> 0x10) break;
            goto LAB_08004034;
          }
LAB_0800400c:
          if (iVar4 == 1) {
            uVar5 = uVar10 * 0x10000;
            if ((0xc < (int)uVar5 >> 0x10) || (9 < ((int)uVar5 >> 0x10) + -10 + iVar3)) break;
            goto LAB_08004034;
          }
          uVar5 = uVar10 * 0x10000;
        } while ((int)uVar5 >> 0x10 < 0xd);
      }
      if (iVar9 == 2) break;
      pbVar13 = pbVar13 + 1;
      if (iVar4 == 0) {
        iVar6 = iVar3 * 0x1e;
        iVar9 = iVar11 + ((uint)*pbVar13 * 4 + (uint)*pbVar13) * 0x3c;
      }
      else {
        iVar6 = ((uint)*pbVar13 * 4 + (uint)*pbVar13) * 0x3c;
        iVar9 = iVar11;
      }
      puVar18 = (ushort *)(iVar9 + iVar6);
      uVar10 = uVar7 * 0x10000 + 0x10000;
      uVar7 = uVar10 >> 0x10;
      local_50 = uVar20;
    } while ((int)uVar10 >> 0x10 < 3);
    if (iVar4 == 2) break;
    pbVar13 = pbVar13 + (*pbVar17 - 2);
    puVar18 = (ushort *)(iVar11 + (uint)*pbVar13 * 300 + iVar14 * 2);
    uVar19 = uVar5 >> 0x10;
    uVar10 = iVar4 + 1U & 0xffff;
  } while ((int)((iVar4 + 1U) * 0x10000) >> 0x10 < 3);
  iVar3 = *param_2;
  *(ushort *)(param_1 + 2) = (ushort)iVar3 & 0x1ff;
  iVar2 = param_2[1];
  *(ushort *)((int)param_1 + 10) = (ushort)iVar2 & 0x1ff;
  *param_1 = iVar3;
  param_1[1] = iVar2;
  return in_lr;
}

