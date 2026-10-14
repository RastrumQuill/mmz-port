// sub_08012D94 at 0x08012D94 (thumb)

undefined4 sub_08012D94(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 in_lr;
  
  iVar14 = 0x9f;
  iVar3 = sub_08001B60(0x280);
  if (iVar3 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar7 = *(int *)(param_1 + 0x34);
    iVar4 = ((*(int *)(param_1 + 0x38) + -0xa0) * 0xc0 >> 8) + -0x158;
    iVar8 = iVar4 * 0x10000 >> 0x10;
    DAT_03001704 = iVar3;
    if (0xff < iVar8 + 0x9f) {
      iVar10 = 0x600000;
      piVar9 = (int *)(iVar3 + 0x27c);
      do {
        *piVar9 = iVar10;
        iVar10 = iVar10 + 0x10000;
        piVar9 = piVar9 + -1;
        iVar14 = iVar14 + -1;
        if (iVar14 < 0) goto LAB_08012e4c;
      } while (0xff < iVar8 + iVar14);
    }
    if ((-1 < iVar14) && (iVar4 = (int)(short)iVar4, 0xb0 < iVar4 + iVar14)) {
      puVar11 = (uint *)(iVar14 * 4 + iVar3);
      do {
        *puVar11 = iVar4 << 0x10 | (uint)(iVar7 * 0xc000) >> 0x10;
        puVar11 = puVar11 + -1;
        iVar14 = iVar14 + -1;
        if (iVar14 < 0) break;
      } while (0xb0 < iVar4 + iVar14);
    }
LAB_08012e4c:
    iVar4 = *(int *)(param_1 + 0x34);
    if (-1 < iVar14) {
      iVar7 = (((*(int *)(param_1 + 0x38) + -0xa0) * 0xb0 >> 8) + -0x130) * 0x10000 >> 0x10;
      if (0xb0 < iVar7 + iVar14) {
        iVar8 = iVar14 * -0x10000 + 0xb00000;
        piVar9 = (int *)(iVar14 * 4 + iVar3);
        do {
          *piVar9 = iVar8;
          iVar8 = iVar8 + 0x10000;
          piVar9 = piVar9 + -1;
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) goto LAB_08012ec6;
        } while (0xb0 < iVar7 + iVar14);
      }
      if ((-1 < iVar14) && (0x78 < iVar7 + iVar14)) {
        puVar11 = (uint *)(iVar14 * 4 + iVar3);
        do {
          *puVar11 = iVar7 << 0x10 | (uint)(iVar4 * 0xa000) >> 0x10;
          puVar11 = puVar11 + -1;
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) break;
        } while (0x78 < iVar7 + iVar14);
      }
    }
LAB_08012ec6:
    uVar5 = (*(int *)(param_1 + 0x34) + -0xb40) * 0xc000;
    iVar4 = ((*(int *)(param_1 + 0x38) + -0xa0) * 0xc0 >> 8) + -0x148;
    if (-1 < iVar14) {
      iVar7 = iVar4 * 0x10000 >> 0x10;
      if (0x78 < iVar7 + iVar14) {
        iVar8 = iVar14 * -0x10000 + 0x780000;
        piVar9 = (int *)(iVar14 * 4 + iVar3);
        do {
          *piVar9 = iVar8;
          iVar8 = iVar8 + 0x10000;
          piVar9 = piVar9 + -1;
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) goto LAB_08012f4c;
        } while (0x78 < iVar7 + iVar14);
      }
      if ((-1 < iVar14) && (0x67 < iVar7 + iVar14)) {
        puVar11 = (uint *)(iVar14 * 4 + iVar3);
        do {
          *puVar11 = iVar7 << 0x10 | uVar5 >> 0x10;
          puVar11 = puVar11 + -1;
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) break;
        } while (0x67 < iVar7 + iVar14);
      }
    }
LAB_08012f4c:
    sVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x34) + -0xb40,3);
    iVar7 = FUN_080fe2f8(*(int *)(param_1 + 0x38) + -0xa0,3);
    iVar8 = (int)(short)(uVar5 >> 0x10);
    sVar1 = (short)(iVar7 + -0x93);
    iVar15 = (iVar7 + -0x93) * 0x10000 >> 0x10;
    iVar10 = (int)(short)iVar4;
    iVar7 = (iVar15 - iVar10) + 0x32;
    iVar4 = FUN_080fe2f8((iVar8 - sVar2) * 0x1000,iVar7);
    iVar7 = FUN_080fe2f8(0x32000,iVar7);
    if (-1 < iVar14) {
      if (0x35 < iVar15 + iVar14) {
        puVar11 = (uint *)(iVar14 * 4 + iVar3);
        iVar12 = (0x67 - iVar14) - iVar10;
        do {
          *puVar11 = (iVar10 - (iVar12 * (iVar7 + -0x1000) >> 0xc)) * 0x10000 |
                     iVar8 - (iVar4 * iVar12 >> 0xc) & 0xffffU;
          puVar11 = puVar11 + -1;
          iVar12 = iVar12 + 1;
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) goto LAB_08013022;
        } while (0x35 < iVar15 + iVar14);
      }
      if ((-1 < iVar14) && (0x2f < sVar1 + iVar14)) {
        puVar13 = (undefined4 *)(iVar14 * 4 + iVar3);
        do {
          *puVar13 = CONCAT22(sVar1,sVar2);
          puVar13 = puVar13 + -1;
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) break;
        } while (0x2f < sVar1 + iVar14);
      }
    }
LAB_08013022:
    iVar4 = *(int *)(param_1 + 0x34);
    uVar5 = (*(int *)(param_1 + 0x38) + -0xa0 >> 2) - 0x28;
    uVar6 = uVar5 & 0xffff;
    if (-1 < iVar14) {
      iVar7 = (int)(uVar6 * 0x10000) >> 0x10;
      if (0x2f < iVar7 + iVar14) {
        iVar8 = iVar14 * -0x10000 + 0x2f0000;
        piVar9 = (int *)(iVar14 * 4 + iVar3);
        do {
          *piVar9 = iVar8;
          iVar8 = iVar8 + 0x10000;
          piVar9 = piVar9 + -1;
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) goto LAB_08013094;
        } while (0x2f < iVar7 + iVar14);
      }
      if ((-1 < iVar14) && (0x10 < iVar7 + iVar14)) {
        puVar11 = (uint *)(iVar14 * 4 + iVar3);
        do {
          *puVar11 = iVar7 << 0x10 | (uint)(iVar4 << 0xe) >> 0x10;
          puVar11 = puVar11 + -1;
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) break;
        } while (0x10 < iVar7 + iVar14);
      }
    }
LAB_08013094:
    iVar4 = *(int *)(param_1 + 0x34);
    if (-1 < iVar14) {
      iVar7 = (int)(uVar6 * 0x10000) >> 0x10;
      if (0x10 < iVar7 + iVar14) {
        iVar8 = iVar14 * -0x10000 + 0x100000;
        piVar9 = (int *)(iVar14 * 4 + iVar3);
        do {
          *piVar9 = iVar8;
          iVar8 = iVar8 + 0x10000;
          piVar9 = piVar9 + -1;
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) goto LAB_08013124;
        } while (0x10 < iVar7 + iVar14);
      }
      if ((-1 < iVar14) && (7 < iVar7 + iVar14)) {
        puVar11 = (uint *)(iVar14 * 4 + iVar3);
        do {
          *puVar11 = iVar7 << 0x10 | (uint)(iVar4 << 0xd) >> 0x10;
          puVar11 = puVar11 + -1;
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) break;
        } while (7 < iVar7 + iVar14);
      }
    }
LAB_08013124:
    iVar4 = *(int *)(param_1 + 0x34);
    if (-1 < iVar14) {
      iVar7 = (int)(short)uVar5;
      if (0 < iVar7 + iVar14) {
        puVar11 = (uint *)(iVar14 * 4 + iVar3);
        do {
          *puVar11 = iVar7 << 0x10 | (uint)(iVar4 << 0xc) >> 0x10;
          puVar11 = puVar11 + -1;
          iVar14 = iVar14 + -1;
          if (iVar14 < 0) {
            return in_lr;
          }
        } while (0 < iVar7 + iVar14);
      }
      if (-1 < iVar14) {
        iVar4 = iVar14 * -0x10000;
        piVar9 = (int *)(iVar14 * 4 + iVar3);
        do {
          *piVar9 = iVar4;
          iVar4 = iVar4 + 0x10000;
          piVar9 = piVar9 + -1;
          iVar14 = iVar14 + -1;
        } while (-1 < iVar14);
      }
    }
  }
  return in_lr;
}

