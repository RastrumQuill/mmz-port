// sub_080B5320 at 0x080B5320 (thumb)

undefined4 sub_080B5320(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  undefined4 in_lr;
  byte local_3c [28];
  undefined4 local_20;
  uint local_1c;
  
  iVar3 = *(int *)(param_1 + 8);
  sub_080FE598(local_3c,&DAT_080fec80,0x1a);
  if (1 < *(byte *)(iVar3 + 0xc)) {
    return in_lr;
  }
  if (*(char *)(iVar3 + 0xf) == '\0') {
    DAT_020023c0 = DAT_020023c0 | 0x100;
    local_20 = 0x12001200;
    sub_080FE110(&local_20,(DAT_020023c4 & 0x1f00) * 8 + 0x6000800,0x1000200);
    *(char *)(iVar3 + 0xf) = *(char *)(iVar3 + 0xf) + '\x01';
    sub_0800393C(&UNK_0854735c + (uint)*(byte *)(iVar3 + 0x10) * 0x14,(DAT_020023c4 & 0xc) << 0xc);
    sub_08003E14(&UNK_08547368 + (uint)*(byte *)(iVar3 + 0x10) * 0x14,0);
  }
  else {
    sub_080FE110(&UNK_0836a488 + (uint)*(byte *)(iVar3 + 0x10) * 0x100,&DAT_020310b0,0x40);
  }
  uVar8 = (uint)*(byte *)(iVar3 + 0xe);
  if (uVar8 != 1) {
    if (uVar8 < 2) {
      if (uVar8 != 0) {
        DAT_020023cc._0_2_ = 0;
        DAT_020023cc._2_2_ = 0;
        return in_lr;
      }
      iVar4 = sub_08001B60(0x140);
      if (iVar4 == 0) {
        DAT_020023cc._0_2_ = 0;
        DAT_020023cc._2_2_ = 0;
        return in_lr;
      }
      local_1c = uVar8;
      sub_080FE110(&local_1c,iVar4,0x1000050);
      iVar10 = 0;
      puVar5 = (undefined2 *)(iVar4 + 0x80);
      do {
        if (*(byte *)(iVar3 + 0x12) < local_3c[iVar10]) {
          uVar6 = 0xff;
        }
        else {
          bVar1 = local_3c[iVar10];
          uVar8 = ((uint)*(byte *)(iVar3 + 0x12) - (uint)bVar1) * -0x18 + 0xff;
          uVar9 = uVar8 & 0xffff;
          if ((int)(uVar8 * 0x10000) < 0) {
            uVar9 = 0;
          }
          uVar6 = (undefined2)uVar9;
          if ((bVar1 & 1) == 0) {
            uVar6 = (undefined2)(uVar9 * -0x10000 >> 0x10);
          }
        }
        *puVar5 = uVar6;
        puVar5 = puVar5 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0x1a);
    }
    else if (uVar8 == 2) {
      iVar4 = sub_08001B60(0x140);
      if (iVar4 == 0) {
        DAT_020023cc._0_2_ = 0;
        DAT_020023cc._2_2_ = 0;
        return in_lr;
      }
      local_1c = 0;
      sub_080FE110(&local_1c,iVar4,0x1000050);
      iVar3 = 0;
      psVar11 = (short *)(iVar4 + 0x80);
      do {
        sVar2 = FUN_080fe2f8(iVar3,3);
        *psVar11 = sVar2 + -4;
        psVar11 = psVar11 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x1a);
    }
    else {
      if (uVar8 != 3) {
        DAT_020023cc._0_2_ = 0;
        DAT_020023cc._2_2_ = 0;
        return in_lr;
      }
      iVar4 = sub_08001B60(0x140);
      if (iVar4 == 0) {
        DAT_020023cc._0_2_ = 0;
        DAT_020023cc._2_2_ = 0;
        return in_lr;
      }
      local_1c = 0;
      sub_080FE110(&local_1c,iVar4,0x1000050);
      uVar8 = 0;
      psVar11 = (short *)(iVar4 + 0x80);
      do {
        uVar7 = (ushort)*(byte *)(iVar3 + 0x12) * 0xc;
        if (0xff < uVar7) {
          uVar7 = 0xff;
        }
        if ((uVar8 & 1) == 0) {
          uVar7 = -uVar7;
        }
        sVar2 = FUN_080fe2f8(uVar8,3);
        *psVar11 = uVar7 + sVar2 + -4;
        psVar11 = psVar11 + 1;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x1a);
    }
    DAT_03001724 = &DAT_04000010;
    DAT_03001728 = 0xa2600001;
    DAT_03001720 = iVar4;
  }
  DAT_020023cc._2_2_ = 0;
  DAT_020023cc._0_2_ = 0;
  return in_lr;
}

