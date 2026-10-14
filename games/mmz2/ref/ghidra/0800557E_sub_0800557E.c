// sub_0800557E at 0x0800557E (thumb)

undefined4 sub_0800557E(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *unaff_r6;
  ushort uVar8;
  int iVar9;
  undefined4 *param_5;
  undefined4 *param_6;
  int param_7;
  ushort param_9;
  ushort param_10;
  ushort param_11;
  undefined4 in_stack_00000074;
  
  uVar2 = param_1 << 0x10;
  if ((int)uVar2 >> 0x10 < 0xb) {
    do {
      iVar7 = (uint)param_11 << 0x10;
      uVar8 = param_11;
      if (iVar7 >> 0x10 < 0x10) {
        iVar9 = param_5[3];
        do {
          puVar5 = (undefined4 *)((uint)*unaff_r6 * 8 + iVar9);
          uVar4 = ((iVar7 >> 0x10) * 0x10 + (uint)param_9) * 0x10000;
          puVar1 = (undefined4 *)
                   (((int)(uVar4 & 0x1000000) >> 0x10) * 8 +
                   (((int)(((uint)param_10 + ((int)uVar2 >> 0xc)) * 0x10000) >> 0xe & 0x3c0U) +
                   ((int)uVar4 >> 0x13 & 0x1eU)) * 2 + param_7);
          *puVar1 = *puVar5;
          puVar1[0x10] = puVar5[1];
          unaff_r6 = unaff_r6 + 1;
          iVar7 = (iVar7 >> 0x10) + 1;
          uVar8 = (ushort)iVar7;
          iVar7 = iVar7 * 0x10000;
        } while (iVar7 >> 0x10 < 0x10);
      }
      unaff_r6 = unaff_r6 + (0xf - ((int)(short)uVar8 - (int)(short)param_11));
      uVar2 = param_1 * 0x10000 + 0x10000;
      param_1 = uVar2 >> 0x10;
    } while ((int)uVar2 >> 0x10 < 0xb);
  }
  uVar6 = *param_6;
  *(ushort *)(param_5 + 2) = (ushort)uVar6 & 0x1ff;
  uVar3 = param_6[1];
  *(ushort *)((int)param_5 + 10) = (ushort)uVar3 & 0x1ff;
  *param_5 = uVar6;
  param_5[1] = uVar3;
  return in_stack_00000074;
}

