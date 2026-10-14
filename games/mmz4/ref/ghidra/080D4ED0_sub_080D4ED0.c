// sub_080D4ED0 at 0x080D4ED0 (thumb)

undefined4 sub_080D4ED0(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  ushort *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 in_lr;
  ushort local_44;
  uint local_38;
  int local_30;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(iVar4 + 0x78);
  uVar6 = iVar5 >> 8;
  uVar7 = (uint)((*(int *)(iVar4 + 0x54) - *(int *)(param_2 + 8)) * 0x100) >> 0x10;
  uVar11 = (*(int *)(iVar4 + 0x58) - *(int *)(param_2 + 0xc)) * 0x100;
  DAT_03002ac0 = (ushort)*(byte *)(iVar4 + 0x74) |
                 (ushort)*(byte *)(iVar4 + 0x76) << 10 | (ushort)*(byte *)(iVar4 + 0x75) << 5;
  iVar12 = (int)uVar11 >> 0x10;
  local_30 = -iVar12;
  if ((-1 < iVar12) && (local_30 = 0, 0x9f < iVar12)) {
    local_30 = iVar12 + -0xa0;
  }
  if (((int)uVar6 < 1) || ((int)uVar6 <= local_30)) {
    DAT_02000a56 = 0;
    DAT_02000a5a = 0;
    return in_lr;
  }
  uVar19 = uVar6 - local_30;
  if (0xa0 < (int)uVar19) {
    uVar19 = 0xa0;
  }
  if (iVar5 >> 0xd < 5) {
    local_38 = iVar5 >> 0xd & 0xff;
  }
  else {
    local_38 = 4;
  }
  iVar16 = (uVar19 + 1) * 2;
  puVar8 = (ushort *)sub_08000A70(iVar16);
  if (puVar8 == (ushort *)0x0) {
    return in_lr;
  }
  sub_08000AB4(0,puVar8,iVar16);
  if (local_30 == 0) {
    local_44 = (ushort)((uint)iVar5 >> 8);
    *puVar8 = local_44;
  }
  else {
    uVar3 = sub_081284F8(uVar6 * uVar6 - local_30 * local_30);
    *puVar8 = uVar3;
  }
  uVar20 = 0;
  uVar18 = 0;
  iVar5 = 1 << local_38;
  bVar2 = (int)uVar19 <= iVar5;
  if (!bVar2) {
    puVar17 = puVar8 + iVar5;
    puVar15 = puVar8;
    do {
      uVar20 = uVar18 + iVar5;
      uVar3 = sub_081284F8(uVar6 * uVar6 - (local_30 + uVar20) * (local_30 + uVar20));
      *puVar17 = uVar3;
      uVar3 = *puVar15;
      uVar1 = *puVar17;
      iVar16 = (uint)uVar3 << 0x10;
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 1;
      uVar18 = uVar18 + 1;
      if (uVar18 < uVar20) {
        puVar13 = puVar8 + uVar18;
        do {
          iVar16 = iVar16 - ((int)(((uint)uVar3 - (uint)uVar1) * 0x10000) >> local_38);
          *puVar13 = (ushort)((uint)iVar16 >> 0x10);
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + 1;
          puVar17 = puVar17 + 1;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar20);
      }
    } while (uVar18 <= uVar19);
    if (!bVar2) {
      uVar18 = uVar19 - (1 << local_38);
      goto LAB_080d5042;
    }
  }
  uVar18 = 0;
LAB_080d5042:
  if (uVar18 <= uVar19) {
    puVar15 = puVar8 + uVar18;
    do {
      uVar3 = sub_081284F8(uVar6 * uVar6 - (uVar18 + local_30) * (uVar18 + local_30));
      *puVar15 = uVar3;
      puVar15 = puVar15 + 1;
      uVar18 = uVar18 + 1;
    } while (uVar18 <= uVar19);
  }
  uVar18 = 0;
  if ((uint)(2 << local_38) < uVar20) {
    uVar18 = uVar20 - (2 << local_38);
  }
  if (bVar2) {
    uVar19 = 0;
  }
  else {
    uVar19 = uVar19 - (1 << local_38);
  }
  if (uVar18 != uVar19) {
    uVar3 = puVar8[uVar18];
    iVar5 = sub_08128A24(((uint)uVar3 - (uint)puVar8[uVar19]) * 0x10000,uVar19 - uVar18);
    iVar16 = (uint)uVar3 << 0x10;
    uVar18 = uVar18 + 1;
    if (uVar18 < uVar19) {
      puVar15 = puVar8 + uVar18;
      do {
        iVar16 = iVar16 - iVar5;
        *puVar15 = (ushort)((uint)iVar16 >> 0x10);
        puVar15 = puVar15 + 1;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar19);
    }
  }
  iVar5 = sub_08000A70(0x140);
  if (iVar5 != 0) {
    sub_08000AB4(0,iVar5,0x140);
    iVar16 = (int)(uVar11 & 0xffff0000) >> 0xf;
    if (uVar11 >> 0x10 < 0xa0) {
      uVar11 = uVar7 - puVar8[1];
      uVar19 = uVar11 & 0xffff;
      if ((int)(uVar11 * 0x10000) < 0) {
        uVar19 = 0;
      }
      if (0xf0 < (short)uVar19) {
        uVar19 = 0xf0;
      }
      iVar9 = puVar8[1] + uVar7;
      uVar3 = (ushort)iVar9;
      if (iVar9 * 0x10000 < 0) {
        uVar3 = 0;
      }
      if (0xf0 < (short)uVar3) {
        uVar3 = 0xf0;
      }
      *(ushort *)(iVar16 + iVar5) = uVar3 | (ushort)((uVar19 << 0x10) >> 8);
    }
    if ((-1 < iVar12) && (iVar12 < (int)(uVar6 + 0xa0))) {
      uVar11 = iVar12 - 0xa0;
      if (iVar12 < 0xa0) {
        uVar11 = 1;
      }
      uVar19 = uVar6;
      if ((int)(iVar12 - uVar6) < 0) {
        uVar19 = iVar12 + 1;
      }
      iVar9 = *(int *)(iVar4 + 0x60);
      if (iVar9 == 0) {
        if (uVar11 < uVar19) {
          puVar17 = (ushort *)(iVar12 * 2 + iVar5 + uVar11 * -2);
          puVar15 = puVar8 + (uVar11 - local_30);
          do {
            uVar20 = uVar7 - *puVar15;
            uVar18 = uVar20 & 0xffff;
            if ((int)(uVar20 * 0x10000) < 0) {
              uVar18 = 0;
            }
            if (0xf0 < (short)uVar18) {
              uVar18 = 0xf0;
            }
            iVar9 = *puVar15 + uVar7;
            uVar3 = (ushort)iVar9;
            if (iVar9 * 0x10000 < 0) {
              uVar3 = 0;
            }
            if (0xf0 < (short)uVar3) {
              uVar3 = 0xf0;
            }
            *puVar17 = uVar3 | (ushort)((uVar18 << 0x10) >> 8);
            puVar17 = puVar17 + -1;
            puVar15 = puVar15 + 1;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar19);
        }
      }
      else if (uVar11 < uVar19) {
        puVar17 = (ushort *)(iVar12 * 2 + iVar5 + uVar11 * -2);
        puVar15 = puVar8 + (uVar11 - local_30);
        do {
          uVar14 = iVar9 * (local_30 + uVar11) >> 8;
          uVar20 = (uVar7 - *puVar15) + uVar14;
          uVar18 = uVar20 & 0xffff;
          if ((int)(uVar20 * 0x10000) < 0) {
            uVar18 = 0;
          }
          if (0xf0 < (short)uVar18) {
            uVar18 = 0xf0;
          }
          iVar10 = *puVar15 + uVar7 + uVar14;
          uVar3 = (ushort)iVar10;
          if (iVar10 * 0x10000 < 0) {
            uVar3 = 0;
          }
          if (0xf0 < (short)uVar3) {
            uVar3 = 0xf0;
          }
          *puVar17 = uVar3 | (ushort)((uVar18 << 0x10) >> 8);
          puVar17 = puVar17 + -1;
          puVar15 = puVar15 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar19);
      }
    }
    if (((int)-uVar6 <= iVar12) && (iVar12 < 0xa0)) {
      uVar11 = -iVar12;
      if (-1 < iVar12) {
        uVar11 = 1;
      }
      if (0x9f < (int)(iVar12 + uVar6)) {
        uVar6 = 0xa0 - iVar12;
      }
      iVar4 = *(int *)(iVar4 + 0x60);
      if (iVar4 == 0) {
        if (uVar11 < uVar6) {
          puVar15 = (ushort *)(uVar11 * 2 + iVar16 + iVar5);
          puVar8 = puVar8 + (uVar11 - local_30);
          do {
            uVar19 = uVar7 - *puVar8;
            uVar20 = uVar19 & 0xffff;
            if ((int)(uVar19 * 0x10000) < 0) {
              uVar20 = 0;
            }
            if (0xf0 < (short)uVar20) {
              uVar20 = 0xf0;
            }
            iVar4 = *puVar8 + uVar7;
            uVar3 = (ushort)iVar4;
            if (iVar4 * 0x10000 < 0) {
              uVar3 = 0;
            }
            if (0xf0 < (short)uVar3) {
              uVar3 = 0xf0;
            }
            *puVar15 = uVar3 | (ushort)((uVar20 << 0x10) >> 8);
            puVar15 = puVar15 + 1;
            puVar8 = puVar8 + 1;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar6);
        }
      }
      else if (uVar11 < uVar6) {
        puVar15 = (ushort *)(uVar11 * 2 + iVar16 + iVar5);
        puVar8 = puVar8 + (uVar11 - local_30);
        do {
          uVar18 = iVar4 * (local_30 + uVar11) >> 8;
          uVar19 = (uVar7 - *puVar8) - uVar18;
          uVar20 = uVar19 & 0xffff;
          if ((int)(uVar19 * 0x10000) < 0) {
            uVar20 = 0;
          }
          if (0xf0 < (short)uVar20) {
            uVar20 = 0xf0;
          }
          iVar12 = (*puVar8 + uVar7) - uVar18;
          uVar3 = (ushort)iVar12;
          if (iVar12 * 0x10000 < 0) {
            uVar3 = 0;
          }
          if (0xf0 < (short)uVar3) {
            uVar3 = 0xf0;
          }
          *puVar15 = uVar3 | (ushort)((uVar20 << 0x10) >> 8);
          puVar15 = puVar15 + 1;
          puVar8 = puVar8 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar6);
      }
    }
    DAT_03001708 = 0x4000042;
    DAT_0300170c = 0xa2600001;
    DAT_03001704 = iVar5;
  }
  DAT_02000a5a = 0xa0;
  return in_lr;
}

