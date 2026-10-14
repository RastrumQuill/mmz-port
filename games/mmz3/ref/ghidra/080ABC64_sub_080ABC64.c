// sub_080ABC64 at 0x080ABC64 (thumb)

undefined4 sub_080ABC64(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 in_lr;
  ushort local_6c [40];
  undefined4 local_1c [2];
  undefined4 uStack_4;
  ushort *puVar10;
  
  puVar5 = local_6c;
  puVar6 = local_6c;
  puVar9 = local_6c;
  puVar10 = local_6c;
  iVar7 = *(int *)(param_1 + 8);
  if (1 < *(byte *)(iVar7 + 0xc)) {
    return in_lr;
  }
  iVar1 = *(int *)(iVar7 + 0x58) - *(int *)(param_2 + 0xc);
  iVar8 = iVar1 >> 8;
  uVar2 = (uint)*(byte *)(iVar7 + 0x12);
  if (uVar2 < 0x14) {
LAB_080abc98:
    iVar4 = uVar2 * -2;
    iVar3 = iVar8 + uVar2 * 2;
  }
  else {
    if (0x9f < uVar2) {
      uVar2 = 0xb5 - *(byte *)(iVar7 + 0x12);
      goto LAB_080abc98;
    }
    iVar4 = -0x28;
    iVar3 = iVar8 + 0x28;
  }
  iVar4 = iVar8 + iVar4;
  if (0x9f < iVar4) {
    DAT_020023c0 = DAT_020023c0 & 0xdbff;
    return in_lr;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (0x9f < iVar3) {
    iVar3 = 0x9f;
  }
  DAT_0200241a = (ushort)iVar3 & 0xff | (ushort)(iVar4 << 8);
  iVar4 = *(int *)(param_2 + 8);
  DAT_020023d4._0_2_ = (short)((uint)iVar4 >> 8) + (ushort)*(byte *)(iVar7 + 0x13);
  DAT_020023d4._2_2_ = 0x28 - (short)((uint)iVar1 >> 8);
  uStack_4 = in_lr;
  if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
    iVar7 = *(int *)(iVar7 + 0x54) - iVar4 >> 8;
    if (iVar7 < 0) goto LAB_080abd44;
    iVar1 = 0;
    do {
      iVar4 = iVar7 - (iVar1 * iVar1 >> 5);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xf0 < iVar4) {
        iVar4 = 0xf0;
      }
      *puVar6 = (short)iVar4;
      puVar6 = puVar6 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x28);
  }
  else {
    iVar7 = *(int *)(iVar7 + 0x54) - iVar4 >> 8;
    if (0xf0 < iVar7) {
LAB_080abd44:
      DAT_020023c0 = DAT_020023c0 & 0xdbff;
      return in_lr;
    }
    iVar1 = 0;
    do {
      iVar4 = iVar7 + (iVar1 * iVar1 >> 5);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xf0 < iVar4) {
        iVar4 = 0xf0;
      }
      *puVar5 = (ushort)(iVar4 << 8) | 0xf0;
      puVar5 = puVar5 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x28);
  }
  DAT_020023c0 = DAT_020023c0 | 0x2400;
  iVar7 = sub_08001B60(0x140);
  if (iVar7 != 0) {
    local_1c[0] = 0;
    sub_080FE110(local_1c,iVar7,0x1000050);
    iVar4 = 0;
    iVar1 = iVar8;
    while (-1 < iVar1) {
      *(ushort *)(iVar1 * 2 + iVar7) = *puVar9;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + 1;
      if (0x27 < iVar4) break;
      iVar1 = iVar8 - iVar4;
    }
    iVar4 = 0;
    iVar1 = iVar8;
    while (iVar1 < 0xf1) {
      *(ushort *)(iVar1 * 2 + iVar7) = *puVar10;
      puVar10 = puVar10 + 1;
      iVar4 = iVar4 + 1;
      if (0x27 < iVar4) break;
      iVar1 = iVar8 + iVar4;
    }
    DAT_03001708 = 0x4000042;
    DAT_0300170c = 0xa2600001;
    DAT_03001704 = iVar7;
  }
  return uStack_4;
}

