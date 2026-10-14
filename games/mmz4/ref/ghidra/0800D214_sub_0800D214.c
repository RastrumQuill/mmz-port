// sub_0800D214 at 0x0800D214 (thumb)

undefined4 sub_0800D214(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar11 = 0x9f;
  iVar1 = sub_08000A70(0x280);
  if (iVar1 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar2 = *(int *)(param_1 + 0x38) + -0xe0;
    DAT_03001704 = iVar1;
    uVar3 = FUN_081288bc(*(int *)(param_1 + 0x34) << 1,3);
    sVar9 = (short)iVar2;
    iVar4 = (int)sVar9;
    if (0x1fe < iVar4 + 0x9f) {
      puVar7 = (uint *)(iVar1 + 0x27c);
      do {
        *puVar7 = (iVar4 + 0x102) * 0x10000 | uVar3 & 0xffff;
        puVar7 = puVar7 + -1;
        iVar11 = iVar11 + -1;
        if (iVar4 + iVar11 < 0x1ff) break;
      } while (-1 < iVar11);
    }
    uVar10 = iVar2 * 0x10000;
    iVar2 = (int)uVar10 >> 0x10;
    if ((0xa0 < iVar2 + iVar11) && (-1 < iVar11)) {
      puVar7 = (uint *)(iVar11 * 4 + iVar1);
      do {
        *puVar7 = uVar10 | uVar3 & 0xffff;
        puVar7 = puVar7 + -1;
        iVar11 = iVar11 + -1;
        if (iVar2 + iVar11 < 0xa1) break;
      } while (-1 < iVar11);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    if ((0x90 < iVar2 + iVar11) && (-1 < iVar11)) {
      puVar7 = (uint *)(iVar11 * 4 + iVar1);
      do {
        *puVar7 = uVar10 | (uint)(iVar4 << 0xf) >> 0x10;
        puVar7 = puVar7 + -1;
        iVar11 = iVar11 + -1;
        if (iVar2 + iVar11 < 0x91) break;
      } while (-1 < iVar11);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    iVar4 = (int)sVar9 - (*(int *)(param_1 + 0x38) + -0x140 >> 4);
    iVar5 = iVar4 * 0x10000 >> 0x10;
    if ((0x90 < iVar5 + iVar11) && (-1 < iVar11)) {
      iVar6 = iVar11 * -0x10000 + 0x900000;
      piVar8 = (int *)(iVar11 * 4 + iVar1);
      do {
        *piVar8 = iVar6;
        iVar6 = iVar6 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar5 + iVar11 < 0x91) break;
      } while (-1 < iVar11);
    }
    iVar5 = iVar4 * 0x10000 >> 0x10;
    if ((0x74 < iVar5 + iVar11) && (-1 < iVar11)) {
      puVar7 = (uint *)(iVar11 * 4 + iVar1);
      do {
        *puVar7 = iVar4 * 0x10000 | (uint)(iVar2 << 0xe) >> 0x10;
        puVar7 = puVar7 + -1;
        iVar11 = iVar11 + -1;
        if (iVar5 + iVar11 < 0x75) break;
      } while (-1 < iVar11);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    iVar4 = (int)(short)iVar4 - (*(int *)(param_1 + 0x38) + -0x140 >> 4);
    iVar5 = iVar4 * 0x10000 >> 0x10;
    if ((0x74 < iVar5 + iVar11) && (-1 < iVar11)) {
      iVar6 = iVar11 * -0x10000 + 0x740000;
      piVar8 = (int *)(iVar11 * 4 + iVar1);
      do {
        *piVar8 = iVar6;
        iVar6 = iVar6 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar5 + iVar11 < 0x75) break;
      } while (-1 < iVar11);
    }
    iVar5 = iVar4 * 0x10000 >> 0x10;
    if ((0x60 < iVar5 + iVar11) && (-1 < iVar11)) {
      puVar7 = (uint *)(iVar11 * 4 + iVar1);
      do {
        *puVar7 = iVar4 * 0x10000 | (uint)(iVar2 << 0xd) >> 0x10;
        puVar7 = puVar7 + -1;
        iVar11 = iVar11 + -1;
        if (iVar5 + iVar11 < 0x61) break;
      } while (-1 < iVar11);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    iVar4 = (int)(short)iVar4 + (*(int *)(param_1 + 0x38) + -0x140 >> 5);
    iVar5 = iVar4 * 0x10000 >> 0x10;
    if ((0x60 < iVar5 + iVar11) && (-1 < iVar11)) {
      iVar6 = iVar11 * -0x10000 + 0x600000;
      piVar8 = (int *)(iVar11 * 4 + iVar1);
      do {
        *piVar8 = iVar6;
        iVar6 = iVar6 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar11 = iVar11 + -1;
        if (iVar5 + iVar11 < 0x61) break;
      } while (-1 < iVar11);
    }
    uVar3 = iVar4 * 0x10000;
    iVar4 = (int)uVar3 >> 0x10;
    if (0 < iVar4 + iVar11) {
      if (-1 < iVar11) {
        puVar7 = (uint *)(iVar11 * 4 + iVar1);
        do {
          *puVar7 = uVar3 | (uint)(iVar2 << 0xc) >> 0x10;
          puVar7 = puVar7 + -1;
          iVar11 = iVar11 + -1;
          if (iVar4 + iVar11 < 1) goto LAB_0800d48e;
        } while (-1 < iVar11);
      }
      if (0 < iVar4 + iVar11) {
        return in_lr;
      }
    }
LAB_0800d48e:
    if (-1 < iVar11) {
      iVar2 = iVar11 * -0x10000;
      piVar8 = (int *)(iVar11 * 4 + iVar1);
      do {
        *piVar8 = iVar2;
        iVar2 = iVar2 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar11 = iVar11 + -1;
        if (0 < iVar4 + iVar11) {
          return in_lr;
        }
      } while (-1 < iVar11);
    }
  }
  return in_lr;
}

