// sub_08011A90 at 0x08011A90 (thumb)

undefined4 sub_08011A90(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar3 = sub_08001B60(0x280);
  if (iVar3 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    uVar1 = *(ushort *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x34);
    iVar5 = *(int *)(param_1 + 0x38);
    DAT_03001704 = iVar3;
    sVar2 = FUN_080fe2f8(iVar5 + -0x410,7);
    iVar11 = (int)sVar2;
    iVar5 = FUN_080fe2f8(((iVar11 - ((iVar5 + -0x550) * 0x4000 >> 0x10)) + 0x94) * 0x100,0x94);
    iVar10 = 0x9f;
    iVar6 = iVar11 + 0x9f;
    if (0x87 < iVar6) {
      puVar9 = (uint *)(iVar3 + 0x27c);
      iVar8 = (iVar5 + -0x100) * (iVar11 + 0x17);
      do {
        *puVar9 = (iVar11 - (iVar8 >> 8)) * 0x10000 | (iVar4 + (uint)uVar1) * 0x2000 >> 0x10;
        iVar6 = iVar6 + -1;
        iVar8 = iVar8 - (iVar5 + -0x100);
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
        if (iVar10 < 0) break;
      } while (0x87 < iVar6);
    }
    uVar1 = *(ushort *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x34);
    uVar7 = (*(int *)(param_1 + 0x38) + -0x3c0) * 0x2000;
    iVar6 = (int)uVar7 >> 0x10;
    iVar5 = FUN_080fe2f8(((iVar6 - sVar2) + 0x18) * 0x100,0x18);
    if ((-1 < iVar10) && (iVar11 = iVar10 + iVar6, 0x75 < iVar11)) {
      puVar9 = (uint *)(iVar10 * 4 + iVar3);
      iVar8 = (iVar5 + -0x100) * (iVar10 + -0x76 + iVar6);
      do {
        *puVar9 = (iVar6 - (iVar8 >> 8)) * 0x10000 | (iVar4 + (uint)uVar1) * 0x1000 >> 0x10;
        iVar11 = iVar11 + -1;
        iVar8 = iVar8 - (iVar5 + -0x100);
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
        if (iVar10 < 0) break;
      } while (0x75 < iVar11);
    }
    uVar1 = *(ushort *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x34);
    if ((-1 < iVar10) && (iVar5 = (int)(short)(uVar7 >> 0x10), 0x6f < iVar10 + iVar5)) {
      puVar9 = (uint *)(iVar10 * 4 + iVar3);
      do {
        *puVar9 = iVar5 << 0x10 | (iVar4 + (uint)uVar1) * 0x800 >> 0x10;
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
        if (iVar10 < 0) break;
      } while (0x6f < iVar10 + iVar5);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    if (-1 < iVar10) {
      puVar9 = (uint *)(iVar10 * 4 + iVar3);
      do {
        *puVar9 = uVar7 & 0xffff0000 | (uint)((iVar4 + -0xf00) * 0x2000) >> 0x10;
        puVar9 = puVar9 + -1;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
    }
  }
  return in_lr;
}

