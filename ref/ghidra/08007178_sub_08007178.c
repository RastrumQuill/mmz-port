// sub_08007178 at 0x08007178 (thumb)

undefined4 sub_08007178(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  undefined4 in_lr;
  undefined auStack_98 [24];
  int local_80;
  int local_7c;
  ushort local_78;
  ushort local_76;
  int local_74;
  int local_70;
  ushort local_6c;
  ushort local_6a;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  
  local_68 = param_1;
  uVar2 = sub_08006AA4(((DAT_02005200 >> 8) + 0x77) * 0x100,((DAT_02005204 >> 8) + -0x50) * 0x100);
  if ((uVar2 & 0xff) != (DAT_0200520c & 0x7f)) {
    iVar3 = *(int *)((DAT_02005208 >> ((uVar2 & 0x7f) << 1) & 3) * 4 + (&DAT_08293bec)[uVar2 & 0xff]
                    );
    piVar9 = *(int **)(iVar3 + 8);
    local_80 = (*(int *)(local_68 + 0x10) >> 8) +
               ((DAT_02005200 >> 8) - (*(int *)(iVar3 + 0x6c) * 0xf0 + -0x78));
    local_7c = (*(int *)(local_68 + 0x14) >> 8) +
               ((DAT_02005204 >> 8) - (*(int *)(iVar3 + 0x70) * 0xa0 + 0x50));
    uVar2 = (uint)(byte)(&DAT_082915ec)[local_80 >> 4];
    local_64 = local_80 + uVar2 * -0xf0;
    local_60 = local_7c + (uint)(byte)(&DAT_08290dec)[local_7c >> 4] * -0xa0;
    if ((uVar2 < *(byte *)(*(int *)(iVar3 + 0x74) + 2)) &&
       ((uint)(byte)(&DAT_08290dec)[local_7c >> 4] < (uint)*(byte *)(*(int *)(iVar3 + 0x74) + 3))) {
      uVar5 = DAT_02005044 << 0x10;
      puVar12 = &DAT_02001020;
      local_80 = ((int)(uVar2 * 0xf0 * *(int *)(iVar3 + 0x3c)) >> 8) + *(int *)(iVar3 + 0x54);
      local_7c = (*(int *)(iVar3 + 0x40) * local_7c >> 8) + *(int *)(iVar3 + 0x58);
      sub_08003538(auStack_98,&local_80,&DAT_02000020,*piVar9 + (int)piVar9,piVar9[2] + (int)piVar9,
                   *(undefined4 *)(iVar3 + 0xc));
      sub_08003F1C(auStack_98,&local_80,&DAT_02000020);
      sub_0800527C(auStack_98,&local_78);
      local_5c = local_78 >> 3 & 0x3e;
      local_2c = ((local_76 >> 3) - 4) * 0x20;
      uVar1 = 0;
      iVar7 = ((local_64 >> 3) + 4) * 0x10000;
      local_3c = iVar7 >> 0x10;
      local_30 = uVar5 >> 0x14;
      iVar3 = iVar7;
      do {
        uVar10 = local_2c & 0x3e0;
        uVar5 = 0;
        local_2c = uVar10 + 0x20;
        uVar2 = local_5c;
        iVar6 = iVar7;
        if (0 < local_3c) {
          do {
            local_24 = iVar3;
            if (uVar2 < 0x20) {
              iVar6 = (iVar3 >> 0x10) - uVar5;
              iVar3 = 0x20 - uVar2;
              if (iVar6 < (int)(0x20 - uVar2)) {
                iVar3 = iVar6;
              }
              iVar4 = iVar3 * 2;
              iVar6 = iVar4;
              if (iVar4 < 0) {
                iVar6 = iVar4 + 3;
              }
              FUN_080c88f0(&DAT_02000020 + (uVar10 + uVar2) * 2,puVar12,
                           (uint)(iVar6 << 9) >> 0xb | 0x4000000);
              uVar2 = 0x20;
            }
            else {
              iVar6 = (iVar6 >> 0x10) - uVar5;
              iVar3 = 0x40 - uVar2;
              if (iVar6 < (int)(0x40 - uVar2)) {
                iVar3 = iVar6;
              }
              iVar4 = iVar3 * 2;
              iVar6 = iVar4;
              if (iVar4 < 0) {
                iVar6 = iVar4 + 3;
              }
              FUN_080c88f0(&DAT_02000020 + (uVar10 + (uVar2 & 0x1f) + 0x400) * 2,puVar12,
                           (uint)(iVar6 << 9) >> 0xb | 0x4000000);
              uVar2 = 0;
            }
            puVar12 = puVar12 + iVar4;
            uVar5 = uVar5 + iVar3 & 0xffff;
            iVar6 = local_24;
            iVar3 = local_24;
          } while ((int)uVar5 < local_24 >> 0x10);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x19);
      puVar12 = &DAT_02001020;
      local_58 = ((int)((uint)*(ushort *)(&DAT_02004f3c + local_30) - local_64) >> 3) + 0x1eU & 0x3e
      ;
      uVar2 = ((*(ushort *)((int)&DAT_02004f3c + local_30 * 4 + 2) >> 3) - 4) * 0x20;
      uVar1 = 0;
      local_34 = iVar3 >> 0x10;
      local_38 = iVar3;
      do {
        uVar8 = uVar2 & 0x3e0;
        uVar10 = 0;
        uVar1 = uVar1 + 1;
        uVar2 = uVar8 + 0x20;
        uVar5 = local_58;
        iVar7 = local_38;
        if (0 < local_34) {
          do {
            local_24 = iVar3;
            if (uVar5 < 0x20) {
              iVar7 = (iVar3 >> 0x10) - uVar10;
              iVar3 = 0x20 - uVar5;
              if (iVar7 < (int)(0x20 - uVar5)) {
                iVar3 = iVar7;
              }
              iVar6 = iVar3 * 2;
              iVar7 = iVar6;
              if (iVar6 < 0) {
                iVar7 = iVar6 + 3;
              }
              FUN_080c88f0(puVar12,&DAT_0202165c + (uVar8 + uVar5) * 2,
                           (uint)(iVar7 << 9) >> 0xb | 0x4000000);
              uVar5 = 0x20;
            }
            else {
              iVar7 = (iVar7 >> 0x10) - uVar10;
              iVar3 = 0x40 - uVar5;
              if (iVar7 < (int)(0x40 - uVar5)) {
                iVar3 = iVar7;
              }
              iVar6 = iVar3 * 2;
              iVar7 = iVar6;
              if (iVar6 < 0) {
                iVar7 = iVar6 + 3;
              }
              FUN_080c88f0(puVar12,&DAT_0202165c + (uVar8 + (uVar5 & 0x1f) + 0x400) * 2,
                           (uint)(iVar7 << 9) >> 0xb | 0x4000000);
              uVar5 = 0;
            }
            puVar12 = puVar12 + iVar6;
            uVar10 = uVar10 + iVar3 & 0xffff;
            iVar7 = local_24;
            iVar3 = local_24;
          } while ((int)uVar10 < local_24 >> 0x10);
        }
      } while (uVar1 < 0x19);
    }
  }
  uVar2 = sub_08006AA4(((DAT_02005200 >> 8) + -0x78) * 0x100,((DAT_02005204 >> 8) + 0x4f) * 0x100);
  if ((uVar2 & 0xff) != (DAT_0200520c & 0x7f)) {
    iVar7 = *(int *)((DAT_02005208 >> ((uVar2 & 0x7f) << 1) & 3) * 4 + (&DAT_08293bec)[uVar2 & 0xff]
                    );
    piVar9 = *(int **)(iVar7 + 8);
    iVar3 = (*(int *)(local_68 + 0x10) >> 8) +
            ((DAT_02005200 >> 8) - (*(int *)(iVar7 + 0x6c) * 0xf0 + 0x78));
    local_50 = (*(int *)(local_68 + 0x14) >> 8) +
               ((DAT_02005204 >> 8) - (*(int *)(iVar7 + 0x70) * 0xa0 + -0x4f));
    uVar2 = (uint)(byte)(&DAT_08290dec)[local_50 >> 4];
    local_54 = iVar3 + (uint)(byte)(&DAT_082915ec)[iVar3 >> 4] * -0xf0;
    local_50 = local_50 + uVar2 * -0xa0;
    if (((uint)(byte)(&DAT_082915ec)[iVar3 >> 4] < (uint)*(byte *)(*(int *)(iVar7 + 0x74) + 2)) &&
       (uVar2 < *(byte *)(*(int *)(iVar7 + 0x74) + 3))) {
      local_40 = DAT_02005044 & 0xffff;
      puVar12 = &DAT_02001020;
      local_74 = (*(int *)(iVar7 + 0x3c) * iVar3 >> 8) + *(int *)(iVar7 + 0x54);
      local_70 = ((int)(*(int *)(iVar7 + 0x40) * uVar2 * 0xa0) >> 8) + *(int *)(iVar7 + 0x58);
      sub_08003538(auStack_98,&local_74,&DAT_02000020,*piVar9 + (int)piVar9,piVar9[2] + (int)piVar9,
                   *(undefined4 *)(iVar7 + 0xc));
      sub_08003F1C(auStack_98,&local_74,&DAT_02000020);
      sub_0800527C(auStack_98,&local_6c);
      uVar2 = (local_50 >> 3) + 5;
      local_4c = (local_6c >> 3) - 4 & 0x3e;
      uVar10 = (local_6a >> 3 & 0x1f) << 5;
      local_44 = uVar2 & 0xffff;
      uVar5 = 0;
      if (0 < (int)(uVar2 * 0x10000)) {
        do {
          uVar8 = 0;
          uVar2 = local_4c;
          do {
            if (uVar2 < 0x20) {
              iVar3 = 0x20 - uVar2;
              if ((int)(0x24 - uVar8) < (int)(0x20 - uVar2)) {
                iVar3 = 0x24 - uVar8;
              }
              iVar6 = iVar3 * 2;
              iVar7 = iVar6;
              if (iVar6 < 0) {
                iVar7 = iVar6 + 3;
              }
              FUN_080c88f0(&DAT_02000020 + (uVar10 + uVar2) * 2,puVar12,
                           (uint)(iVar7 << 9) >> 0xb | 0x4000000);
              uVar2 = 0x20;
            }
            else {
              iVar3 = 0x40 - uVar2;
              if ((int)(0x24 - uVar8) < (int)(0x40 - uVar2)) {
                iVar3 = 0x24 - uVar8;
              }
              iVar6 = iVar3 * 2;
              iVar7 = iVar6;
              if (iVar6 < 0) {
                iVar7 = iVar6 + 3;
              }
              FUN_080c88f0(&DAT_02000020 + (uVar10 + (uVar2 & 0x1f) + 0x400) * 2,puVar12,
                           (uint)(iVar7 << 9) >> 0xb | 0x4000000);
              uVar2 = 0;
            }
            puVar12 = puVar12 + iVar6;
            uVar8 = uVar8 + iVar3 & 0xffff;
          } while (uVar8 < 0x24);
          uVar10 = uVar10 + 0x20 & 0x3e0;
          uVar5 = uVar5 + 1 & 0xffff;
        } while ((int)uVar5 < (int)(short)local_44);
      }
      puVar12 = &DAT_02001020;
      local_48 = (*(ushort *)(&DAT_02004f3c + (local_40 >> 4)) >> 3) - 4 & 0x3e;
      uVar2 = (((int)((uint)*(ushort *)((int)&DAT_02004f3c + (local_40 >> 4) * 4 + 2) - local_50) >>
               3) + 0x14) * 0x20;
      local_28 = local_44 * 0x10000;
      uVar5 = 0;
      if (0 < local_28) {
        do {
          uVar11 = uVar2 & 0x3e0;
          uVar8 = 0;
          uVar2 = uVar11 + 0x20;
          uVar10 = local_48;
          do {
            if (uVar10 < 0x20) {
              iVar3 = 0x20 - uVar10;
              if ((int)(0x24 - uVar8) < (int)(0x20 - uVar10)) {
                iVar3 = 0x24 - uVar8;
              }
              iVar6 = iVar3 * 2;
              iVar7 = iVar6;
              if (iVar6 < 0) {
                iVar7 = iVar6 + 3;
              }
              FUN_080c88f0(puVar12,&DAT_0202165c + (uVar11 + uVar10) * 2,
                           (uint)(iVar7 << 9) >> 0xb | 0x4000000);
              uVar10 = 0x20;
            }
            else {
              iVar3 = 0x40 - uVar10;
              if ((int)(0x24 - uVar8) < (int)(0x40 - uVar10)) {
                iVar3 = 0x24 - uVar8;
              }
              iVar6 = iVar3 * 2;
              iVar7 = iVar6;
              if (iVar6 < 0) {
                iVar7 = iVar6 + 3;
              }
              FUN_080c88f0(puVar12,&DAT_0202165c + (uVar11 + (uVar10 & 0x1f) + 0x400) * 2,
                           (uint)(iVar7 << 9) >> 0xb | 0x4000000);
              uVar10 = 0;
            }
            puVar12 = puVar12 + iVar6;
            uVar8 = uVar8 + iVar3 & 0xffff;
          } while (uVar8 < 0x24);
          uVar5 = uVar5 + 1 & 0xffff;
        } while ((int)uVar5 < local_28 >> 0x10);
      }
    }
  }
  return in_lr;
}

