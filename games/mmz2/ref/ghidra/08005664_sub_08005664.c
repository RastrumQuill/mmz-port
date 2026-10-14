// sub_08005664 at 0x08005664 (thumb)

undefined4 sub_08005664(int *param_1,int *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  ushort *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 in_lr;
  byte *local_58;
  int local_54;
  int local_50;
  uint local_4c;
  
  local_54 = *param_2 + -0x20;
  if (local_54 < 1) {
    local_54 = 0;
  }
  local_50 = param_2[1] + -0x10;
  if (local_50 < 1) {
    local_50 = 0;
  }
  iVar2 = sub_080EF150(local_54,0xf0);
  pbVar15 = (byte *)param_1[5];
  iVar3 = sub_080EF150(local_50,0xa0);
  local_58 = pbVar15 + (uint)*pbVar15 * iVar3 + iVar2 + 4;
  iVar2 = sub_080EF1E8(local_54,0xf0);
  iVar3 = sub_080EF1E8(local_50,0xa0);
  iVar10 = param_1[4];
  iVar12 = (iVar2 << 0xc) >> 0x10;
  iVar2 = (iVar3 << 0xc) >> 0x10;
  puVar16 = (ushort *)(iVar10 + (uint)*local_58 * 300 + iVar12 * 2 + iVar2 * 0x1e);
  uVar8 = 0;
  uVar17 = 0;
  uVar18 = 0;
  do {
    local_4c = 0;
    uVar6 = 0;
    uVar11 = uVar17 << 0x10;
    iVar3 = (int)(short)uVar8;
    do {
      iVar4 = (int)(uVar6 * 0x10000) >> 0x10;
      uVar8 = uVar17;
      if (iVar3 != 0) goto LAB_08005754;
      uVar5 = uVar11;
      if ((int)uVar11 >> 0x10 < 10 - iVar2) {
LAB_0800577c:
        do {
          uVar18 = local_4c;
          if (uVar6 != 0) goto LAB_080057a4;
          if ((int)(short)local_4c < 0xf - iVar12) {
            do {
              while( true ) {
                while( true ) {
                  puVar14 = (undefined4 *)(param_1[3] + (uint)*puVar16 * 8);
                  iVar9 = (local_54 + (short)uVar18 * 0x10) * 0x10000;
                  puVar7 = (undefined4 *)
                           ((short)((ushort)((uint)iVar9 >> 0x10) & 0x100) * 8 +
                           (((local_50 + ((int)uVar5 >> 0xc)) * 0x10000 >> 0xe & 0x3c0U) +
                           (iVar9 >> 0x13 & 0x1eU)) * 2 + param_3);
                  *puVar7 = *puVar14;
                  puVar7[0x10] = puVar14[1];
                  puVar16 = puVar16 + 1;
                  uVar13 = (int)(short)uVar18 + 1;
                  uVar18 = uVar13 & 0xffff;
                  if (uVar6 != 0) break;
                  if (0xf - iVar12 <= (int)(short)uVar13) goto LAB_08005830;
                }
LAB_080057a4:
                sVar1 = (short)uVar18;
                if (iVar4 != 1) break;
                if ((0x13 < sVar1) || (0xe < sVar1 + -0xf + iVar12)) goto LAB_08005830;
              }
            } while (sVar1 < 0x14);
          }
LAB_08005830:
          puVar16 = puVar16 + (0xf - ((int)(short)uVar18 - (int)(short)local_4c));
          uVar5 = uVar8 * 0x10000 + 0x10000;
          uVar8 = uVar5 >> 0x10;
          if (iVar3 == 0) {
            if (10 - iVar2 <= (int)uVar5 >> 0x10) break;
            goto LAB_0800577c;
          }
LAB_08005754:
          if (iVar3 == 1) {
            uVar5 = uVar8 * 0x10000;
            if ((0xc < (int)uVar5 >> 0x10) || (9 < ((int)uVar5 >> 0x10) + -10 + iVar2)) break;
            goto LAB_0800577c;
          }
          uVar5 = uVar8 * 0x10000;
        } while ((int)uVar5 >> 0x10 < 0xd);
      }
      if (iVar4 == 2) break;
      local_58 = local_58 + 1;
      if (iVar3 == 0) {
        puVar16 = (ushort *)(iVar10 + (uint)*local_58 * 300 + iVar2 * 0x1e);
      }
      else {
        puVar16 = (ushort *)(iVar10 + (uint)*local_58 * 300);
      }
      uVar8 = uVar6 * 0x10000 + 0x10000;
      uVar6 = uVar8 >> 0x10;
      local_4c = uVar18;
    } while ((int)uVar8 >> 0x10 < 3);
    if (iVar3 == 2) break;
    local_58 = local_58 + (*pbVar15 - 2);
    puVar16 = (ushort *)(iVar10 + (uint)*local_58 * 300 + iVar12 * 2);
    uVar17 = uVar5 >> 0x10;
    uVar8 = iVar3 + 1U & 0xffff;
  } while ((int)((iVar3 + 1U) * 0x10000) >> 0x10 < 3);
  iVar3 = *param_2;
  *(ushort *)(param_1 + 2) = (ushort)iVar3 & 0x1ff;
  iVar2 = param_2[1];
  *(ushort *)((int)param_1 + 10) = (ushort)iVar2 & 0x1ff;
  *param_1 = iVar3;
  param_1[1] = iVar2;
  return in_lr;
}

