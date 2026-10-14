// sub_0800D4B4 at 0x0800D4B4 (thumb)

undefined4 sub_0800D4B4(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  
  iVar11 = 0x9f;
  iVar3 = sub_08001B60(0x280);
  if (iVar3 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar4 = *(int *)(param_1 + 0x34);
    sVar1 = (short)((uint)((*(int *)(param_1 + 0x38) + -0xc0) * 0x8000) >> 0x10);
    iVar6 = (int)sVar1;
    DAT_03001704 = iVar3;
    if (0x87 < iVar6 + 0x9f) {
      puVar5 = (uint *)(iVar3 + 0x27c);
      do {
        *puVar5 = iVar6 << 0x10 | (uint)((iVar4 + -0xf0) * 0x8000) >> 0x10;
        puVar5 = puVar5 + -1;
        iVar11 = iVar11 + -1;
        if (iVar11 < 0) break;
      } while (0x87 < iVar11 + iVar6);
    }
    iVar4 = *(int *)(param_1 + 0x34) + -0xf0;
    sVar2 = FUN_080fe2f8(iVar4,3);
    uVar9 = iVar4 * 0x4000;
    iVar7 = ((*(int *)(param_1 + 0x38) + -0xc0) * 0x60 >> 8) + 0x10;
    iVar12 = iVar7 * 0x10000 >> 0x10;
    iVar4 = (int)sVar1;
    iVar10 = (iVar12 - iVar4) + 0x10;
    iVar6 = FUN_080fe2f8(((int)sVar2 - ((int)uVar9 >> 0x10)) * 0x1000,iVar10);
    iVar10 = FUN_080fe2f8(0x10000,iVar10);
    if (-1 < iVar11) {
      if (0x77 < iVar11 + iVar12) {
        puVar5 = (uint *)(iVar11 * 4 + iVar3);
        iVar8 = (0x87 - iVar11) - iVar4;
        do {
          *puVar5 = (iVar4 - (iVar8 * (iVar10 + -0x1000) >> 0xc)) * 0x10000 |
                    (int)sVar2 - (iVar6 * iVar8 >> 0xc) & 0xffffU;
          puVar5 = puVar5 + -1;
          iVar8 = iVar8 + 1;
          iVar11 = iVar11 + -1;
          if (iVar11 < 0) {
            return in_lr;
          }
        } while (0x77 < iVar11 + iVar12);
      }
      if (-1 < iVar11) {
        puVar5 = (uint *)(iVar11 * 4 + iVar3);
        do {
          *puVar5 = iVar7 * 0x10000 | uVar9 >> 0x10;
          puVar5 = puVar5 + -1;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
    }
  }
  return in_lr;
}

