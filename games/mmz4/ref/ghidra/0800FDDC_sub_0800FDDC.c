// sub_0800FDDC at 0x0800FDDC (thumb)

undefined4 sub_0800FDDC(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_lr;
  
  iVar10 = 0x9f;
  iVar3 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x3c);
  uVar11 = (uint)*(ushort *)(param_1 + 0x38);
  if (*(short *)(param_1 + 0x38) < 0x1b0) {
    uVar11 = 0x1b0;
  }
  puVar1 = (uint *)sub_08000A70(0x280);
  if (puVar1 != (uint *)0x0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar9 = uVar11 * 0x10000;
    iVar7 = *(int *)(param_1 + 0x68);
    uVar11 = (iVar9 + -0x1e00000 >> 0x13) - 6U & 0xffff;
    uVar12 = uVar11 * 0x10000;
    iVar4 = (int)uVar12 >> 0x10;
    DAT_03001704 = puVar1;
    if (199 < iVar4 + 0x9f) {
      puVar8 = puVar1 + 0x9f;
      do {
        *puVar8 = uVar12 | (iVar7 * 3 >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar4 + iVar10 < 200) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    uVar11 = uVar11 * 0x10000;
    iVar7 = (int)uVar11 >> 0x10;
    if ((0xbf < iVar7 + iVar10) && (-1 < iVar10)) {
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11 | ((iVar4 << 1) >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar7 + iVar10 < 0xc0) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    if ((0xb7 < iVar7 + iVar10) && (-1 < iVar10)) {
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11 | ((iVar4 << 2) >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar7 + iVar10 < 0xb8) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    if ((0xad < iVar7 + iVar10) && (-1 < iVar10)) {
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11 | (iVar4 * 3 >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar7 + iVar10 < 0xae) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    iVar7 = iVar9 + -0x1e00000 >> 0x10;
    iVar2 = FUN_081288bc(iVar7,7);
    iVar5 = (iVar2 + -6) * 0x10000 >> 0x10;
    if ((0xad < iVar5 + iVar10) && (-1 < iVar10)) {
      uVar11 = iVar10 * -0x10000 + 0xae0000;
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11;
        uVar11 = uVar11 + 0x10000;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar5 + iVar10 < 0xae) break;
      } while (-1 < iVar10);
    }
    uVar11 = (iVar2 + -6) * 0x10000;
    iVar2 = (int)uVar11 >> 0x10;
    if ((0x9f < iVar2 + iVar10) && (-1 < iVar10)) {
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11 | ((iVar4 << 1) >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar2 + iVar10 < 0xa0) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    if ((0x97 < iVar2 + iVar10) && (-1 < iVar10)) {
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11 | (iVar4 * 3 >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar2 + iVar10 < 0x98) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    if ((0x8f < iVar2 + iVar10) && (-1 < iVar10)) {
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11 | ((iVar4 << 2) >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar2 + iVar10 < 0x90) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    if ((0x80 < iVar2 + iVar10) && (-1 < iVar10)) {
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11 | (iVar4 * 3 >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar2 + iVar10 < 0x81) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    iVar2 = FUN_081288bc(iVar7,6);
    iVar5 = (iVar2 + -6) * 0x10000 >> 0x10;
    if ((0x80 < iVar5 + iVar10) && (-1 < iVar10)) {
      uVar11 = iVar10 * -0x10000 + 0x830000;
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11;
        uVar11 = uVar11 + 0x10000;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar5 + iVar10 < 0x81) break;
      } while (-1 < iVar10);
    }
    uVar11 = (iVar2 + -6) * 0x10000;
    iVar2 = (int)uVar11 >> 0x10;
    if ((0x6f < iVar2 + iVar10) && (-1 < iVar10)) {
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11 | ((iVar4 << 1) >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar2 + iVar10 < 0x70) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    iVar7 = FUN_081288bc(iVar7,5);
    iVar2 = (iVar7 + -2) * 0x10000 >> 0x10;
    if ((0x6f < iVar2 + iVar10) && (-1 < iVar10)) {
      uVar11 = iVar10 * -0x10000 + 0xfa0000;
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11;
        uVar11 = uVar11 + 0x10000;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar2 + iVar10 < 0x70) break;
      } while (-1 < iVar10);
    }
    uVar11 = (iVar7 + -2) * 0x10000;
    iVar7 = (int)uVar11 >> 0x10;
    if ((99 < iVar7 + iVar10) && (-1 < iVar10)) {
      puVar8 = puVar1 + iVar10;
      do {
        *puVar8 = uVar11 | (iVar4 >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + -1;
        iVar10 = iVar10 + -1;
        if (iVar7 + iVar10 < 100) break;
      } while (-1 < iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    iVar7 = iVar9 >> 0x10;
    iVar5 = 0;
    uVar11 = ((iVar7 + -400 >> 2) + 4) * 0x10000;
    iVar2 = (int)uVar11 >> 0x10;
    if ((iVar2 < 0x26) && (puVar8 = puVar1, -1 < iVar10)) {
      do {
        *puVar8 = uVar11 | ((iVar4 << 2) >> 7) + iVar3 & 0xffffU;
        iVar5 = iVar5 + 1;
        if (0x25 < iVar2 + iVar5) break;
        puVar8 = puVar8 + 1;
      } while (iVar5 <= iVar10);
    }
    iVar2 = *(int *)(param_1 + 0x68);
    iVar4 = FUN_081288bc(iVar7 + -400,5);
    iVar6 = (iVar4 + 4) * 0x10000 >> 0x10;
    if ((iVar6 + iVar5 < 0x26) && (iVar5 <= iVar10)) {
      uVar11 = iVar5 * -0x10000 + 0x260000;
      puVar8 = puVar1 + iVar5;
      do {
        *puVar8 = uVar11;
        puVar8 = puVar8 + 1;
        uVar11 = uVar11 - 0x10000;
        iVar5 = iVar5 + 1;
        if (0x25 < iVar6 + iVar5) break;
      } while (iVar5 <= iVar10);
    }
    uVar11 = (iVar4 + 4) * 0x10000;
    iVar4 = (int)uVar11 >> 0x10;
    if ((iVar4 + iVar5 < 0x38) && (iVar5 <= iVar10)) {
      puVar8 = puVar1 + iVar5;
      do {
        *puVar8 = uVar11 | (iVar2 * 3 >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + 1;
        iVar5 = iVar5 + 1;
        if (0x37 < iVar4 + iVar5) break;
      } while (iVar5 <= iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    iVar2 = FUN_081288bc(iVar7 + -400,6);
    iVar6 = (iVar2 + 4) * 0x10000 >> 0x10;
    if ((iVar6 + iVar5 < 0x38) && (iVar5 <= iVar10)) {
      uVar11 = iVar5 * -0x10000 + 0x380000;
      puVar8 = puVar1 + iVar5;
      do {
        *puVar8 = uVar11;
        puVar8 = puVar8 + 1;
        uVar11 = uVar11 - 0x10000;
        iVar5 = iVar5 + 1;
        if (0x37 < iVar6 + iVar5) break;
      } while (iVar5 <= iVar10);
    }
    uVar11 = (iVar2 + 4) * 0x10000;
    iVar2 = (int)uVar11 >> 0x10;
    if ((iVar2 + iVar5 < 0x43) && (iVar5 <= iVar10)) {
      puVar8 = puVar1 + iVar5;
      do {
        *puVar8 = uVar11 | ((iVar4 << 1) >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + 1;
        iVar5 = iVar5 + 1;
        if (0x42 < iVar2 + iVar5) break;
      } while (iVar5 <= iVar10);
    }
    iVar2 = *(int *)(param_1 + 0x68);
    iVar4 = FUN_081288bc(iVar7 + -400,7);
    iVar6 = (iVar4 + 4) * 0x10000 >> 0x10;
    if ((iVar6 + iVar5 < 0x43) && (iVar5 <= iVar10)) {
      uVar11 = iVar5 * -0x10000 + 0x430000;
      puVar8 = puVar1 + iVar5;
      do {
        *puVar8 = uVar11;
        puVar8 = puVar8 + 1;
        uVar11 = uVar11 - 0x10000;
        iVar5 = iVar5 + 1;
        if (0x42 < iVar6 + iVar5) break;
      } while (iVar5 <= iVar10);
    }
    uVar11 = (iVar4 + 4) * 0x10000;
    iVar4 = (int)uVar11 >> 0x10;
    if ((iVar4 + iVar5 < 0x4c) && (iVar5 <= iVar10)) {
      puVar8 = puVar1 + iVar5;
      do {
        *puVar8 = uVar11 | (iVar2 * 3 >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + 1;
        iVar5 = iVar5 + 1;
        if (0x4b < iVar4 + iVar5) break;
      } while (iVar5 <= iVar10);
    }
    iVar4 = *(int *)(param_1 + 0x68);
    iVar2 = iVar7 + -400;
    if (iVar2 < 0) {
      iVar2 = iVar7 + -0x189;
    }
    iVar7 = (iVar2 >> 3) + 4;
    iVar2 = iVar7 * 0x10000 >> 0x10;
    if ((iVar2 + iVar5 < 0x4c) && (iVar5 <= iVar10)) {
      uVar11 = iVar5 * -0x10000 + 0x4c0000;
      puVar8 = puVar1 + iVar5;
      do {
        *puVar8 = uVar11;
        puVar8 = puVar8 + 1;
        uVar11 = uVar11 - 0x10000;
        iVar5 = iVar5 + 1;
        if (0x4b < iVar2 + iVar5) break;
      } while (iVar5 <= iVar10);
    }
    uVar11 = iVar7 * 0x10000;
    iVar7 = (int)uVar11 >> 0x10;
    if ((iVar7 + iVar5 < 0x5c) && (iVar5 <= iVar10)) {
      puVar8 = puVar1 + iVar5;
      do {
        *puVar8 = uVar11 | ((iVar4 << 1) >> 7) + iVar3 & 0xffffU;
        puVar8 = puVar8 + 1;
        iVar5 = iVar5 + 1;
        if (0x5b < iVar7 + iVar5) break;
      } while (iVar5 <= iVar10);
    }
    iVar3 = *(int *)(param_1 + 0x34);
    iVar4 = (iVar9 + -0xf00000 >> 0x16) + -0xd;
    iVar7 = iVar4 * 0x10000 >> 0x10;
    if (iVar7 + iVar5 < 0x5c) {
      if (iVar10 < iVar5) {
        return in_lr;
      }
      uVar11 = iVar5 * -0x10000 + 0x5c0000;
      puVar8 = puVar1 + iVar5;
      do {
        *puVar8 = uVar11;
        puVar8 = puVar8 + 1;
        uVar11 = uVar11 - 0x10000;
        iVar5 = iVar5 + 1;
        if (0x5b < iVar7 + iVar5) break;
      } while (iVar5 <= iVar10);
    }
    if (iVar5 <= iVar10) {
      puVar1 = puVar1 + iVar5;
      do {
        *puVar1 = iVar4 * 0x10000 | (uint)(iVar3 << 9) >> 0x10;
        puVar1 = puVar1 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 <= iVar10);
    }
  }
  return in_lr;
}

