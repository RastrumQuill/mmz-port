// sub_08092B18 at 0x08092B18 (thumb)

undefined4 sub_08092B18(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  undefined4 in_lr;
  byte local_44 [28];
  undefined auStack_28 [4];
  undefined4 local_24;
  uint local_20;
  
  iVar11 = *(int *)(param_1 + 8);
  sub_080C8D70(local_44,&DAT_080c9478,0x1a);
  sub_080C8D70(auStack_28,&DAT_080c9492,3);
  if (1 < *(byte *)(iVar11 + 0xc)) {
    return in_lr;
  }
  if (*(char *)(iVar11 + 0xf) == '\0') {
    DAT_02004f30 = DAT_02004f30 | 0x100;
    local_24 = 0x12001200;
    FUN_080c88ec(&local_24,&DAT_020236ec,0x1000200);
    local_20 = 0x12001200;
    FUN_080c88ec(&local_20,&DAT_06000800 + (DAT_02004f34 & 0x1f00) * 4,0x1000200);
    *(char *)(iVar11 + 0xf) = *(char *)(iVar11 + 0xf) + '\x01';
    sub_080014E8(&DAT_082f10dc + (uint)*(byte *)(iVar11 + 0x10) * 0x14,(DAT_02004f34 & 0xc) << 0xc);
    sub_0800179C(&DAT_082f10e8 + (uint)*(byte *)(iVar11 + 0x10) * 0x14,0);
  }
  else {
    FUN_080c88ec(&UNK_082b3a9c + (uint)*(byte *)(iVar11 + 0x10) * 0x100,&DAT_020238ec,0x40);
  }
  uVar7 = (uint)*(byte *)(iVar11 + 0xe);
  if (uVar7 != 1) {
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        DAT_02004f3c._0_2_ = 0;
        DAT_02004f3c._2_2_ = 0;
        return in_lr;
      }
      iVar3 = FUN_0800061c(0x140);
      if (iVar3 == 0) {
        DAT_02004f3c._0_2_ = 0;
        DAT_02004f3c._2_2_ = 0;
        return in_lr;
      }
      local_20 = uVar7;
      FUN_080c88ec(&local_20,iVar3,0x1000050);
      iVar9 = 0;
      puVar4 = (undefined2 *)(iVar3 + 0x80);
      do {
        if (*(byte *)(iVar11 + 0x12) < local_44[iVar9]) {
          uVar5 = 0xff;
        }
        else {
          bVar1 = local_44[iVar9];
          uVar7 = ((uint)*(byte *)(iVar11 + 0x12) - (uint)bVar1) * -0x18 + 0xff;
          uVar8 = uVar7 & 0xffff;
          if ((int)(uVar7 * 0x10000) < 0) {
            uVar8 = 0;
          }
          uVar5 = (undefined2)uVar8;
          if ((bVar1 & 1) == 0) {
            uVar5 = (undefined2)(uVar8 * -0x10000 >> 0x10);
          }
        }
        *puVar4 = uVar5;
        puVar4 = puVar4 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x1a);
      DAT_03000514 = &DAT_04000010;
      DAT_02004f3c._0_2_ = 0;
      DAT_02004f3c._2_2_ = 0;
      DAT_03000510 = iVar3;
      DAT_03000518 = 0x1010001;
      return in_lr;
    }
    if (uVar7 != 2) {
      if (uVar7 != 3) {
        DAT_02004f3c._0_2_ = 0;
        DAT_02004f3c._2_2_ = 0;
        return in_lr;
      }
      iVar3 = FUN_0800061c(0x140);
      if (iVar3 != 0) {
        local_20 = 0;
        FUN_080c88ec(&local_20,iVar3,0x1000050);
        iVar9 = 0;
        psVar10 = (short *)(iVar3 + 0x80);
        do {
          uVar6 = (ushort)*(byte *)(iVar11 + 0x12) * 0xc;
          if (0xff < uVar6) {
            uVar6 = 0xff;
          }
          if ((local_44[iVar9] & 1) == 0) {
            uVar6 = -uVar6;
          }
          sVar2 = sub_080C8AD0(iVar9,3);
          *psVar10 = uVar6 + sVar2 + -4;
          psVar10 = psVar10 + 1;
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x1a);
        DAT_03000514 = &DAT_04000010;
        DAT_03000518 = 0x1010001;
        DAT_03000510 = iVar3;
      }
      sub_08001904(auStack_28[*(byte *)(iVar11 + 0x10)],0x20);
      DAT_02004f3c._0_2_ = 0;
      DAT_02004f3c._2_2_ = 0;
      return in_lr;
    }
    iVar3 = FUN_0800061c(0x140);
    if (iVar3 != 0) {
      local_20 = 0;
      FUN_080c88ec(&local_20,iVar3,0x1000050);
      iVar9 = 0;
      psVar10 = (short *)(iVar3 + 0x80);
      do {
        sVar2 = sub_080C8AD0(iVar9,3);
        *psVar10 = sVar2 + -4;
        psVar10 = psVar10 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x1a);
      DAT_03000514 = &DAT_04000010;
      DAT_03000518 = 0x1010001;
      DAT_03000510 = iVar3;
    }
  }
  sub_08001904(auStack_28[*(byte *)(iVar11 + 0x10)],0x20);
  DAT_02004f3c._2_2_ = 0;
  DAT_02004f3c._0_2_ = 0;
  return in_lr;
}

