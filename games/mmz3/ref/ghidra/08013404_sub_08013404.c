// sub_08013404 at 0x08013404 (thumb)

undefined4 sub_08013404(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = 0x9f;
  iVar2 = sub_08001B60(0x280);
  if (iVar2 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar3 = *(int *)(param_1 + 0x34);
    iVar4 = (*(int *)(param_1 + 0x38) + -800 >> 5) + -0x20;
    sVar1 = (short)iVar4;
    iVar4 = iVar4 * 0x10000 >> 0x10;
    DAT_03001704 = iVar2;
    if (0x4f < iVar4 + 0x9f) {
      iVar7 = -0x500000;
      piVar5 = (int *)(iVar2 + 0x27c);
      do {
        *piVar5 = iVar7;
        iVar7 = iVar7 + 0x10000;
        piVar5 = piVar5 + -1;
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) goto LAB_080134a8;
      } while (0x4f < iVar4 + iVar8);
    }
    if ((-1 < iVar8) && (iVar4 = (int)sVar1, 0x2f < iVar4 + iVar8)) {
      puVar6 = (uint *)(iVar8 * 4 + iVar2);
      do {
        *puVar6 = iVar4 << 0x10 | (uint)(iVar3 << 0xe) >> 0x10;
        puVar6 = puVar6 + -1;
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) break;
      } while (0x2f < iVar4 + iVar8);
    }
LAB_080134a8:
    iVar3 = *(int *)(param_1 + 0x34);
    if ((-1 < iVar8) && (iVar4 = (int)sVar1, 0x27 < iVar4 + iVar8)) {
      puVar6 = (uint *)(iVar8 * 4 + iVar2);
      do {
        *puVar6 = iVar4 << 0x10 | (uint)(iVar3 << 0xd) >> 0x10;
        puVar6 = puVar6 + -1;
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) break;
      } while (0x27 < iVar4 + iVar8);
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if (-1 < iVar8) {
      iVar4 = (int)sVar1;
      if (0x1f < iVar4 + iVar8) {
        puVar6 = (uint *)(iVar8 * 4 + iVar2);
        do {
          *puVar6 = iVar4 << 0x10 | (uint)(iVar3 << 0xc) >> 0x10;
          puVar6 = puVar6 + -1;
          iVar8 = iVar8 + -1;
          if (iVar8 < 0) {
            return in_lr;
          }
        } while (0x1f < iVar4 + iVar8);
      }
      if (-1 < iVar8) {
        iVar3 = iVar8 * -0x10000 + 0x100000;
        piVar5 = (int *)(iVar8 * 4 + iVar2);
        do {
          *piVar5 = iVar3;
          iVar3 = iVar3 + 0x10000;
          piVar5 = piVar5 + -1;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
    }
  }
  return in_lr;
}

