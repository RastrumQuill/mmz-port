// sub_080131E4 at 0x080131E4 (thumb)

undefined4 sub_080131E4(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = 0x9f;
  iVar2 = sub_08001B60(0x280);
  if (iVar2 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar3 = *(int *)(param_1 + 0x34);
    iVar4 = (*(int *)(param_1 + 0x38) + -800 >> 4) + -0x60;
    iVar5 = iVar4 * 0x10000 >> 0x10;
    DAT_03001704 = iVar2;
    if (0x8f < iVar5 + 0x9f) {
      iVar8 = -0x100000;
      piVar6 = (int *)(iVar2 + 0x27c);
      do {
        *piVar6 = iVar8;
        iVar8 = iVar8 + 0x10000;
        piVar6 = piVar6 + -1;
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) goto LAB_0801328a;
      } while (0x8f < iVar5 + iVar9);
    }
    if ((-1 < iVar9) && (iVar4 = (int)(short)iVar4, 0x4f < iVar4 + iVar9)) {
      puVar7 = (uint *)(iVar9 * 4 + iVar2);
      do {
        *puVar7 = iVar4 << 0x10 | (uint)(iVar3 << 0xf) >> 0x10;
        puVar7 = puVar7 + -1;
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) break;
      } while (0x4f < iVar4 + iVar9);
    }
LAB_0801328a:
    iVar3 = *(int *)(param_1 + 0x34);
    sVar1 = (short)(*(int *)(param_1 + 0x38) + -800 >> 5) + -0x20;
    if (-1 < iVar9) {
      iVar4 = (int)sVar1;
      if (0x4f < iVar4 + iVar9) {
        iVar5 = iVar9 * -0x10000 + 0x4f0000;
        piVar6 = (int *)(iVar9 * 4 + iVar2);
        do {
          *piVar6 = iVar5;
          iVar5 = iVar5 + 0x10000;
          piVar6 = piVar6 + -1;
          iVar9 = iVar9 + -1;
          if (iVar9 < 0) goto LAB_080132fe;
        } while (0x4f < iVar4 + iVar9);
      }
      if ((-1 < iVar9) && (0x2f < iVar4 + iVar9)) {
        puVar7 = (uint *)(iVar9 * 4 + iVar2);
        do {
          *puVar7 = iVar4 << 0x10 | (uint)(iVar3 << 0xe) >> 0x10;
          puVar7 = puVar7 + -1;
          iVar9 = iVar9 + -1;
          if (iVar9 < 0) break;
        } while (0x2f < iVar4 + iVar9);
      }
    }
LAB_080132fe:
    iVar3 = *(int *)(param_1 + 0x34);
    if ((-1 < iVar9) && (iVar4 = (int)sVar1, 0x27 < iVar4 + iVar9)) {
      puVar7 = (uint *)(iVar9 * 4 + iVar2);
      do {
        *puVar7 = iVar4 << 0x10 | (uint)(iVar3 << 0xd) >> 0x10;
        puVar7 = puVar7 + -1;
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) break;
      } while (0x27 < iVar4 + iVar9);
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if (-1 < iVar9) {
      iVar4 = (int)sVar1;
      if (0x1f < iVar4 + iVar9) {
        puVar7 = (uint *)(iVar9 * 4 + iVar2);
        do {
          *puVar7 = iVar4 << 0x10 | (uint)(iVar3 << 0xc) >> 0x10;
          puVar7 = puVar7 + -1;
          iVar9 = iVar9 + -1;
          if (iVar9 < 0) {
            return in_lr;
          }
        } while (0x1f < iVar4 + iVar9);
      }
      if (-1 < iVar9) {
        iVar3 = iVar9 * -0x10000 + 0x100000;
        piVar6 = (int *)(iVar9 * 4 + iVar2);
        do {
          *piVar6 = iVar3;
          iVar3 = iVar3 + 0x10000;
          piVar6 = piVar6 + -1;
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
      }
    }
  }
  return in_lr;
}

