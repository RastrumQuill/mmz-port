// sub_0807D610 at 0x0807D610 (thumb)

undefined4 sub_0807D610(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  undefined4 in_lr;
  ushort local_6c [40];
  undefined4 local_1c [2];
  undefined4 uStack_4;
  ushort *puVar9;
  
  puVar4 = local_6c;
  puVar5 = local_6c;
  puVar8 = local_6c;
  puVar9 = local_6c;
  iVar6 = *(int *)(param_1 + 8);
  if (1 < *(byte *)(iVar6 + 0xc)) {
    return in_lr;
  }
  iVar1 = *(int *)(iVar6 + 0x50) - *(int *)(param_2 + 0xc);
  iVar7 = iVar1 >> 8;
  if (*(byte *)(iVar6 + 0x12) < 0x14) {
    iVar2 = (uint)*(byte *)(iVar6 + 0x12) << 1;
LAB_0807d64c:
    iVar3 = -iVar2;
    iVar2 = iVar7 + iVar2;
  }
  else {
    if (0x9f < *(byte *)(iVar6 + 0x12)) {
      iVar2 = (0xb5 - (uint)*(byte *)(iVar6 + 0x12)) * 2;
      goto LAB_0807d64c;
    }
    iVar3 = -0x28;
    iVar2 = iVar7 + 0x28;
  }
  iVar3 = iVar7 + iVar3;
  if (0x9f < iVar3) {
    DAT_02004f30 = DAT_02004f30 & 0xdbff;
    return in_lr;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (0x9f < iVar2) {
    iVar2 = 0x9f;
  }
  DAT_02004f8a = (ushort)iVar2 & 0xff | (ushort)(iVar3 << 8);
  iVar2 = *(int *)(param_2 + 8);
  DAT_02004f44 = (ushort)*(byte *)(iVar6 + 0x13) + (short)((uint)iVar2 >> 8);
  DAT_02004f46 = 0x28 - (short)((uint)iVar1 >> 8);
  uStack_4 = in_lr;
  if ((*(byte *)(iVar6 + 10) & 0x10) == 0) {
    iVar6 = *(int *)(iVar6 + 0x4c) - iVar2 >> 8;
    if (iVar6 < 0) goto LAB_0807d6f4;
    iVar1 = 0;
    do {
      iVar2 = iVar6 - (iVar1 * iVar1 >> 5);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xf0 < iVar2) {
        iVar2 = 0xf0;
      }
      *puVar5 = (short)iVar2;
      puVar5 = puVar5 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x28);
  }
  else {
    iVar6 = *(int *)(iVar6 + 0x4c) - iVar2 >> 8;
    if (0xf0 < iVar6) {
LAB_0807d6f4:
      DAT_02004f30 = DAT_02004f30 & 0xdbff;
      return in_lr;
    }
    iVar1 = 0;
    do {
      iVar2 = iVar6 + (iVar1 * iVar1 >> 5);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xf0 < iVar2) {
        iVar2 = 0xf0;
      }
      *puVar4 = (ushort)(iVar2 << 8) | 0xf0;
      puVar4 = puVar4 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x28);
  }
  DAT_02004f30 = DAT_02004f30 | 0x2400;
  iVar6 = FUN_0800061c(0x140);
  if (iVar6 != 0) {
    local_1c[0] = 0;
    FUN_080c88ec(local_1c,iVar6,0x1000050);
    iVar2 = 0;
    iVar1 = iVar7;
    while (-1 < iVar1) {
      *(ushort *)(iVar1 * 2 + iVar6) = *puVar8;
      puVar8 = puVar8 + 1;
      iVar2 = iVar2 + 1;
      if (0x27 < iVar2) break;
      iVar1 = iVar7 - iVar2;
    }
    iVar2 = 0;
    iVar1 = iVar7;
    while (iVar1 < 0xf1) {
      *(ushort *)(iVar1 * 2 + iVar6) = *puVar9;
      puVar9 = puVar9 + 1;
      iVar2 = iVar2 + 1;
      if (0x27 < iVar2) break;
      iVar1 = iVar7 + iVar2;
    }
    DAT_030004f8 = 0x4000042;
    DAT_030004fc = 0xa2600001;
    DAT_030004f4 = iVar6;
  }
  return uStack_4;
}

