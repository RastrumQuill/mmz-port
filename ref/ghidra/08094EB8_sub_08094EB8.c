// sub_08094EB8 at 0x08094EB8 (thumb)

undefined4 sub_08094EB8(int param_1,int param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 in_lr;
  ushort auStack_238 [260];
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined4 uStack_4;
  
  puVar5 = auStack_238 + 4;
  puVar2 = auStack_238 + 4;
  local_30 = *(int *)(param_1 + 8);
  uStack_4 = in_lr;
  if (*(byte *)(local_30 + 0xc) < 2) {
    if (*(char *)(local_30 + 0xf) == '\0') {
      DAT_02004f80 = DAT_02004f80 | 0x4000;
      DAT_02004f8d = 0x31;
      DAT_02004f8e = DAT_02004f8e | 0xe;
      *(char *)(local_30 + 0xf) = *(char *)(local_30 + 0xf) + '\x01';
    }
    local_2c = *(int *)(local_30 + 0x4c) - *(int *)(param_2 + 8) >> 8;
    local_28 = *(int *)(local_30 + 0x50) - *(int *)(param_2 + 0xc) >> 8;
    if (*(char *)(local_30 + 0xd) == '\x01') {
      if (0xa0 < local_28) {
        local_28 = 0xa0;
      }
      DAT_02004f86 = 0xf0;
      DAT_02004f8a = (ushort)local_28 & 0xff;
    }
    else {
      if (*(char *)(local_30 + 0xd) == '\x02') {
        puVar2 = (ushort *)FUN_0800061c(0x140);
        if (puVar2 != (ushort *)0x0) {
          FUN_0800065c(0,puVar2,0x140);
          uVar17 = 0;
          puVar5 = puVar2;
          do {
            if ((uVar17 & 1) == 0) {
              uVar6 = (0xff - (ushort)*(byte *)(local_30 + 0x12)) * 0x100 | 0xff;
            }
            else {
              uVar6 = (ushort)*(byte *)(local_30 + 0x12);
            }
            *puVar5 = uVar6;
            puVar5 = puVar5 + 1;
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < 0xa0);
          DAT_030004f8 = 0x4000042;
          DAT_030004fc = 0xa2600001;
          DAT_030004f4 = puVar2;
        }
        sVar11 = (short)*(undefined4 *)(local_30 + 0x54);
        sVar10 = (short)local_28;
        sVar14 = sVar11;
        if (local_28 - sVar11 < 0) {
          sVar14 = sVar10;
        }
        if (0xf0 < local_28 + sVar11) {
          sVar11 = 0xf0 - sVar10;
        }
        uVar6 = sVar11 + sVar10;
      }
      else {
        if (((0xf0 < local_2c) || (local_28 < 0)) || (0xa0 < local_28)) {
          DAT_02004f86 = 0;
          DAT_02004f8a = 0;
          return in_lr;
        }
        iVar15 = *(int *)(local_30 + 0x54);
        iVar18 = iVar15;
        if (0xa0 < iVar15) {
          iVar18 = 0xa0;
        }
        uVar17 = sub_080C88FC(iVar15 * iVar15 + -1);
        uVar3 = local_2c - (uVar17 & 0xffff);
        uVar7 = uVar3 & 0xffff;
        if ((int)(uVar3 * 0x10000) < 0) {
          uVar7 = 0;
        }
        iVar15 = local_2c + (uVar17 & 0xffff);
        auStack_238[5] = (ushort)iVar15;
        if (0xf0 < iVar15 * 0x10000 >> 0x10) {
          auStack_238[5] = 0xf0;
        }
        auStack_238[5] = auStack_238[5] | (ushort)((uVar7 << 0x10) >> 8);
        auStack_238[4] = auStack_238[5];
        iVar15 = 4;
        local_24 = local_2c << 8;
        if (4 < iVar18) {
          do {
            uVar17 = sub_080C88FC(*(int *)(local_30 + 0x54) * *(int *)(local_30 + 0x54) -
                                  (iVar15 + 1) * (iVar15 + 1));
            iVar4 = local_2c - (uVar17 & 0xffff);
            sVar14 = (short)iVar4;
            if (iVar4 * 0x10000 < 0) {
              sVar14 = 0;
            }
            iVar4 = local_2c + (uVar17 & 0xffff);
            sVar11 = (short)iVar4;
            if (0xf0 < iVar4 * 0x10000 >> 0x10) {
              sVar11 = 0xf0;
            }
            uVar16 = (uint)sVar11;
            uVar17 = (int)sVar14 << 8 | uVar16;
            puVar5[4] = (ushort)uVar17;
            uVar7 = (uint)(*puVar5 >> 8);
            uVar9 = (uVar17 << 0x10) >> 0x18;
            uVar13 = *puVar5 & 0xff;
            uVar17 = uVar16 + ((int)((uVar13 - (uVar16 & 0xff)) * 0x8000) >> 0x10);
            uVar12 = ((int)sVar14 + ((int)(uVar7 - uVar9) >> 1)) * 0x100 | uVar17;
            puVar5[2] = (ushort)uVar12;
            uVar3 = (uVar12 << 0x10) >> 0x18;
            uVar17 = uVar17 & 0xff;
            bVar1 = (byte)(uVar12 >> 8);
            puVar5[3] = ((ushort)bVar1 - (short)((int)(uVar3 - uVar9) >> 1)) * 0x100 |
                        (short)uVar17 - (short)((uVar17 - (uVar16 & 0xff)) * 0x8000 >> 0x10);
            puVar5[1] = ((ushort)bVar1 + (short)((int)(uVar7 - uVar3) >> 1)) * 0x100 |
                        (short)uVar17 + (short)((uVar13 - uVar17) * 0x8000 >> 0x10);
            puVar5 = puVar5 + 4;
            iVar15 = iVar15 + 4;
          } while (iVar15 < iVar18);
        }
        auStack_238[iVar15 + 4] = (ushort)local_24 | (ushort)local_2c;
        uVar6 = auStack_238[iVar15];
        uVar17 = ((int)(((uVar6 & 0xff) - local_2c) * 0x8000) >> 0x10) + local_2c;
        uVar3 = (((int)(((uVar6 >> 8) - local_2c) * 0x8000) >> 0x10) + local_2c) * 0x100 | uVar17;
        auStack_238[iVar15 + 2] = (ushort)uVar3;
        uVar7 = (uVar3 << 0x10) >> 0x18;
        uVar6 = auStack_238[iVar15 + 4];
        uVar17 = uVar17 & 0xff;
        bVar1 = (byte)(uVar3 >> 8);
        auStack_238[iVar15 + 3] =
             ((ushort)bVar1 - (short)((int)(uVar7 - (uVar6 >> 8)) >> 1)) * 0x100 |
             (short)uVar17 - (short)((uVar17 - (uVar6 & 0xff)) * 0x8000 >> 0x10);
        uVar6 = auStack_238[iVar15];
        auStack_238[iVar15 + 1] =
             ((ushort)bVar1 + (short)((int)((uVar6 >> 8) - uVar7) >> 1)) * 0x100 |
             (short)uVar17 + (short)(((uVar6 & 0xff) - uVar17) * 0x8000 >> 0x10);
        sVar11 = (short)*(undefined4 *)(local_30 + 0x54);
        sVar14 = sVar11;
        if (local_28 - sVar11 < 0) {
          sVar14 = (short)local_28;
        }
        if (0xf0 < local_28 + sVar11) {
          sVar11 = 0xf0 - (short)local_28;
        }
        puVar5 = (ushort *)FUN_0800061c(0x140);
        iVar18 = (int)sVar14;
        if (puVar5 != (ushort *)0x0) {
          FUN_0800065c(0,puVar5,0x140);
          if (0 < iVar18) {
            puVar8 = puVar5 + local_28 + -1;
            do {
              *puVar8 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar8 = puVar8 + -1;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          DAT_030004f8 = 0x4000042;
          DAT_030004fc = 0xa2600001;
          DAT_030004f4 = puVar5;
        }
        sVar10 = (short)local_28;
        uVar6 = sVar11 + sVar10;
      }
      DAT_02004f8a = uVar6 & 0xff | (sVar10 - sVar14) * 0x100;
    }
  }
  return uStack_4;
}

