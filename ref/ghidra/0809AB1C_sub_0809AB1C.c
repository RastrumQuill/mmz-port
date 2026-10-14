// sub_0809AB1C at 0x0809AB1C (thumb)

undefined4 sub_0809AB1C(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  ushort uVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  undefined4 in_lr;
  ushort local_23c [256];
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  ushort *local_24;
  undefined4 uStack_4;
  
  puVar18 = local_23c;
  puVar14 = local_23c;
  puVar15 = local_23c;
  local_3c = *(int *)(param_1 + 8);
  uStack_4 = in_lr;
  if (*(byte *)(local_3c + 0xc) < 2) {
    if (*(char *)(local_3c + 0xf) == '\0') {
      DAT_02004f80 = DAT_02004f80 | 0x4000;
      DAT_02004f8d = 0x20;
      DAT_02004f8e = DAT_02004f8e | 0x1f;
      *(char *)(local_3c + 0xf) = *(char *)(local_3c + 0xf) + '\x01';
    }
    if ((*(byte *)(local_3c + 0x12) & 1) == 0) {
      *(undefined4 *)(local_3c + 0x54) = *(undefined4 *)(local_3c + 0x58);
    }
    else {
      *(int *)(local_3c + 0x54) = *(int *)(local_3c + 0x58) >> 1;
    }
    iVar1 = *(int *)(local_3c + 0x4c) - *(int *)(param_2 + 8);
    uVar2 = iVar1 >> 8;
    local_30 = *(int *)(local_3c + 0x50) - *(int *)(param_2 + 0xc) >> 8;
    if (*(char *)(local_3c + 0xd) == '\x01') {
      DAT_02004f86 = 0xf0;
      DAT_02004f8a = 0xa0;
    }
    else if (*(char *)(local_3c + 0xd) != '\x02') {
      if (local_30 < 0xa1) {
        iVar3 = *(int *)(local_3c + 0x54);
        local_34 = iVar3;
        if (0xa0 < iVar3) {
          local_34 = 0xa0;
        }
        uVar4 = sub_080C88FC(iVar3 * iVar3 + -1);
        uVar5 = uVar2 - (uVar4 & 0xffff);
        uVar12 = uVar5 & 0xffff;
        if ((int)(uVar5 * 0x10000) < 0) {
          uVar12 = 0;
        }
        iVar3 = uVar2 + (uVar4 & 0xffff);
        local_23c[1] = (ushort)iVar3;
        if (0xf0 < iVar3 * 0x10000 >> 0x10) {
          local_23c[1] = 0xf0;
        }
        local_23c[1] = local_23c[1] | (ushort)((uVar12 << 0x10) >> 8);
        local_23c[0] = local_23c[1];
        local_38 = 4;
        local_28 = uVar2 << 8;
        if (4 < local_34) {
          local_24 = local_23c + 4;
          do {
            uVar5 = sub_080C88FC(*(int *)(local_3c + 0x54) * *(int *)(local_3c + 0x54) -
                                 (local_38 + 1) * (local_38 + 1));
            uVar4 = uVar2 - (uVar5 & 0xffff);
            iVar7 = uVar4 * 0x10000;
            iVar6 = uVar2 + (uVar5 & 0xffff);
            iVar3 = iVar7 + iVar6 * -0x10000;
            if (iVar3 != 0 && iVar3 < 0 == SBORROW4(iVar7,iVar6 * 0x10000)) {
              iVar6 = uVar2 + 1;
              uVar4 = uVar2;
            }
            sVar11 = (short)iVar6;
            sVar10 = (short)uVar4;
            if ((int)(uVar4 * 0x10000) < 0) {
              sVar10 = 0;
            }
            if (iVar6 * 0x10000 < 0) {
              sVar11 = 0;
            }
            if (0xf0 < sVar10) {
              sVar10 = 0xf0;
            }
            if (0xf0 < sVar11) {
              sVar11 = 0xf0;
            }
            uVar5 = (uint)sVar11;
            uVar4 = (int)sVar10 << 8 | uVar5;
            puVar18[4] = (ushort)uVar4;
            local_2c = (uint)(*puVar18 >> 8);
            uVar4 = (int)sVar10 + ((int)(local_2c - ((uVar4 << 0x10) >> 0x18)) >> 1);
            uVar12 = *puVar18 & 0xff;
            iVar3 = uVar5 + ((int)(uVar12 - (uVar5 & 0xff)) >> 1);
            sVar10 = (short)iVar3;
            uVar5 = uVar4 & 0xffff;
            if ((int)(uVar4 * 0x10000) < 0) {
              uVar5 = 0;
            }
            if (iVar3 * 0x10000 < 0) {
              sVar10 = 0;
            }
            if (0xf0 < (short)uVar5) {
              uVar5 = 0xf0;
            }
            if (0xf0 < sVar10) {
              sVar10 = 0xf0;
            }
            uVar4 = (int)sVar10 | (int)(uVar5 << 0x10) >> 8;
            puVar18[2] = (ushort)uVar4;
            uVar17 = (uVar4 << 0x10) >> 0x18;
            uVar5 = uVar17 - ((int)(uVar17 - (*local_24 >> 8)) >> 1);
            uVar4 = (int)sVar10 & 0xff;
            iVar3 = uVar4 - ((int)(uVar4 - (*local_24 & 0xff)) >> 1);
            uVar13 = (ushort)iVar3;
            uVar16 = uVar5 & 0xffff;
            if ((int)(uVar5 * 0x10000) < 0) {
              uVar16 = 0;
            }
            if (iVar3 * 0x10000 < 0) {
              uVar13 = 0;
            }
            if (0xf0 < (short)uVar16) {
              uVar16 = 0xf0;
            }
            if (0xf0 < (short)uVar13) {
              uVar13 = 0xf0;
            }
            puVar18[3] = uVar13 | (ushort)((uVar16 << 0x10) >> 8);
            uVar17 = uVar17 + ((int)(local_2c - uVar17) >> 1);
            iVar3 = uVar4 + ((int)(uVar12 - uVar4) >> 1);
            uVar13 = (ushort)iVar3;
            uVar4 = uVar17 & 0xffff;
            if ((int)(uVar17 * 0x10000) < 0) {
              uVar4 = 0;
            }
            if (iVar3 * 0x10000 < 0) {
              uVar13 = 0;
            }
            if (0xf0 < (short)uVar4) {
              uVar4 = 0xf0;
            }
            if (0xf0 < (short)uVar13) {
              uVar13 = 0xf0;
            }
            puVar18[1] = uVar13 | (ushort)((uVar4 << 0x10) >> 8);
            puVar18 = puVar18 + 4;
            local_24 = local_24 + 4;
            local_38 = local_38 + 4;
          } while (local_38 < local_34);
        }
        iVar3 = local_38;
        puVar18 = local_23c + local_38;
        *puVar18 = (ushort)local_28 | (ushort)((uint)iVar1 >> 8);
        iVar9 = iVar3 + -4;
        uVar4 = ((int)((local_23c[iVar9] >> 8) - uVar2) >> 1) + uVar2;
        iVar7 = uVar4 * 0x10000;
        iVar6 = ((int)((local_23c[iVar9] & 0xff) - uVar2) >> 1) + uVar2;
        iVar1 = iVar7 + iVar6 * -0x10000;
        if (iVar1 != 0 && iVar1 < 0 == SBORROW4(iVar7,iVar6 * 0x10000)) {
          iVar6 = uVar2 + 1;
          uVar4 = uVar2;
        }
        uVar4 = uVar4 & 0xffff;
        sVar10 = (short)iVar6;
        if ((int)(uVar4 * 0x10000) < 0) {
          uVar4 = 0;
        }
        if (iVar6 * 0x10000 < 0) {
          sVar10 = 0;
        }
        if (0xf0 < (short)uVar4) {
          uVar4 = 0xf0;
        }
        if (0xf0 < sVar10) {
          sVar10 = 0xf0;
        }
        uVar4 = (int)sVar10 | (int)(uVar4 << 0x10) >> 8;
        local_23c[local_38 + -2] = (ushort)uVar4;
        uVar12 = (uVar4 << 0x10) >> 0x18;
        uVar13 = *puVar18;
        uVar5 = uVar12 - ((int)(uVar12 - (uVar13 >> 8)) >> 1);
        iVar7 = uVar5 * 0x10000;
        uVar4 = (int)sVar10 & 0xff;
        iVar6 = uVar4 - ((int)(uVar4 - (uVar13 & 0xff)) >> 1);
        iVar1 = iVar7 + iVar6 * -0x10000;
        if (iVar1 != 0 && iVar1 < 0 == SBORROW4(iVar7,iVar6 * 0x10000)) {
          iVar6 = uVar2 + 1;
          uVar5 = uVar2;
        }
        uVar5 = uVar5 & 0xffff;
        uVar13 = (ushort)iVar6;
        if ((int)(uVar5 * 0x10000) < 0) {
          uVar5 = 0;
        }
        if (iVar6 * 0x10000 < 0) {
          uVar13 = 0;
        }
        if (0xf0 < (short)uVar5) {
          uVar5 = 0xf0;
        }
        if (0xf0 < (short)uVar13) {
          uVar13 = 0xf0;
        }
        local_23c[local_38 + -1] = uVar13 | (ushort)((uVar5 << 0x10) >> 8);
        uVar12 = uVar12 + ((int)((local_23c[iVar9] >> 8) - uVar12) >> 1);
        iVar7 = uVar12 * 0x10000;
        iVar6 = uVar4 + ((int)((local_23c[iVar9] & 0xff) - uVar4) >> 1);
        iVar1 = iVar7 + iVar6 * -0x10000;
        if (iVar1 != 0 && iVar1 < 0 == SBORROW4(iVar7,iVar6 * 0x10000)) {
          iVar6 = uVar2 + 1;
          uVar12 = uVar2;
        }
        uVar12 = uVar12 & 0xffff;
        uVar13 = (ushort)iVar6;
        if ((int)(uVar12 * 0x10000) < 0) {
          uVar12 = 0;
        }
        if (iVar6 * 0x10000 < 0) {
          uVar13 = 0;
        }
        if (0xf0 < (short)uVar12) {
          uVar12 = 0xf0;
        }
        if (0xf0 < (short)uVar13) {
          uVar13 = 0xf0;
        }
        local_23c[local_38 + -3] = uVar13 | (ushort)((uVar12 << 0x10) >> 8);
        local_23c[iVar3] = 0;
        sVar11 = (short)*(undefined4 *)(local_3c + 0x54);
        sVar10 = sVar11;
        if ((int)(local_30 - (int)sVar11) < 0) {
          sVar10 = (short)local_30;
        }
        if (0xa0 < (int)(local_30 + (int)sVar11)) {
          sVar11 = 0xa0 - (short)local_30;
        }
        iVar1 = FUN_0800061c(0x140);
        if (iVar1 != 0) {
          FUN_0800065c(0,iVar1,0x140);
          if (0 < sVar10) {
            puVar8 = (undefined2 *)(local_30 * 2 + iVar1);
            local_38 = (int)sVar10;
            do {
              *puVar8 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar8 = puVar8 + -1;
              local_38 = local_38 + -1;
            } while (local_38 != 0);
          }
          if (0 < sVar11) {
            puVar8 = (undefined2 *)(local_30 * 2 + iVar1);
            local_38 = (int)sVar11;
            do {
              *puVar8 = *puVar15;
              puVar15 = puVar15 + 1;
              puVar8 = puVar8 + 1;
              local_38 = local_38 + -1;
            } while (local_38 != 0);
          }
          DAT_030004f8 = 0x4000042;
          DAT_030004fc = 0xa2600001;
          DAT_030004f4 = iVar1;
        }
        DAT_02004f8a = sVar11 + (short)local_30 & 0xffU | ((short)local_30 - sVar10) * 0x100;
      }
      else {
        DAT_02004f86 = 0;
        DAT_02004f8a = 0;
      }
    }
  }
  return uStack_4;
}

