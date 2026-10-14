// sub_080187B8 at 0x080187B8 (thumb)

undefined4 sub_080187B8(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_lr;
  
  iVar11 = 0x9f;
  iVar2 = sub_08000A70(0x280);
  if (iVar2 != 0) {
    DAT_03001708 = &DAT_04000018;
    DAT_0300170c = 0xa6600001;
    iVar8 = *(int *)(param_1 + 0x38) + -0x180;
    uVar12 = (uint)(*(ushort *)(param_1 + 0x68) >> 4) -
             (*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x34)) & 0xffff;
    iVar10 = iVar8 * 0x10000 >> 0x10;
    DAT_03001704 = iVar2;
    if (0xff < iVar10 + 0x9f) {
      uVar6 = 0xff610000;
      puVar3 = (uint *)(iVar2 + 0x27c);
      do {
        *puVar3 = uVar6 | uVar12;
        uVar6 = uVar6 + 0x10000;
        puVar3 = puVar3 + -1;
        iVar11 = iVar11 + -1;
        if (iVar10 + iVar11 < 0x100) break;
      } while (-1 < iVar11);
    }
    uVar6 = iVar8 * 0x10000;
    iVar8 = (int)uVar6 >> 0x10;
    if ((0x77 < iVar8 + iVar11) && (-1 < iVar11)) {
      puVar3 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar3 = uVar6 | uVar12;
        puVar3 = puVar3 + -1;
        iVar11 = iVar11 + -1;
        if (iVar8 + iVar11 < 0x78) break;
      } while (-1 < iVar11);
    }
    uVar1 = *(ushort *)(param_1 + 0x6a);
    iVar10 = *(int *)(param_1 + 0x34);
    iVar8 = FUN_081288bc(*(int *)(param_1 + 0x38) + -0xe0,6);
    iVar4 = (iVar8 + -0x28) * 0x10000 >> 0x10;
    if ((0x3f < iVar4 + iVar11) && (-1 < iVar11)) {
      iVar5 = iVar11 * -0x10000 + 0x1400000;
      piVar7 = (int *)(iVar11 * 4 + iVar2);
      do {
        *piVar7 = iVar5;
        iVar5 = iVar5 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar11 = iVar11 + -1;
        if (iVar4 + iVar11 < 0x40) break;
      } while (-1 < iVar11);
    }
    uVar12 = (iVar8 + -0x28) * 0x10000;
    iVar8 = (int)uVar12 >> 0x10;
    if ((0x37 < iVar8 + iVar11) && (-1 < iVar11)) {
      puVar3 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar3 = uVar12 | (uint)(uVar1 >> 4) + (iVar10 >> 6) & 0xffff;
        puVar3 = puVar3 + -1;
        iVar11 = iVar11 + -1;
        if (iVar8 + iVar11 < 0x38) break;
      } while (-1 < iVar11);
    }
    uVar1 = *(ushort *)(param_1 + 0x6c);
    iVar10 = *(int *)(param_1 + 0x34);
    if ((0x27 < iVar8 + iVar11) && (-1 < iVar11)) {
      puVar3 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar3 = uVar12 | (uint)(uVar1 >> 4) + (iVar10 >> 5) & 0xffff;
        puVar3 = puVar3 + -1;
        iVar11 = iVar11 + -1;
        if (iVar8 + iVar11 < 0x28) break;
      } while (-1 < iVar11);
    }
    uVar1 = *(ushort *)(param_1 + 0x6e);
    iVar10 = *(int *)(param_1 + 0x34);
    if (7 < iVar8 + iVar11) {
      if (iVar11 < 0) goto LAB_08018998;
      puVar3 = (uint *)(iVar11 * 4 + iVar2);
      do {
        *puVar3 = uVar12 | (uint)(uVar1 >> 4) + (iVar10 >> 4) & 0xffff;
        puVar3 = puVar3 + -1;
        iVar11 = iVar11 + -1;
        if (iVar8 + iVar11 < 8) break;
      } while (-1 < iVar11);
    }
    if (-1 < iVar11) {
      iVar8 = iVar11 * -0x10000;
      piVar7 = (int *)(iVar11 * 4 + iVar2);
      do {
        *piVar7 = iVar8;
        iVar8 = iVar8 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
LAB_08018998:
  iVar11 = 0x9f;
  iVar2 = sub_08000A70(0x140);
  if (iVar2 != 0) {
    DAT_03001724 = &DAT_04000008 + (*(uint *)(param_1 + 0x5c) >> 4) * 2;
    DAT_03001728 = 0xa2600001;
    uVar1 = (ushort)*(undefined4 *)(param_1 + 100);
    iVar8 = (*(int *)(param_1 + 0x38) + -0x180) * 0x10000 >> 0x10;
    DAT_03001720 = iVar2;
    if (0x77 < iVar8 + 0x9f) {
      puVar9 = (ushort *)(iVar2 + 0x13e);
      do {
        *puVar9 = uVar1 | 0x45;
        puVar9 = puVar9 + -1;
        iVar11 = iVar11 + -1;
        if (iVar8 + iVar11 < 0x78) break;
      } while (-1 < iVar11);
    }
    if (-1 < iVar11) {
      puVar9 = (ushort *)(iVar11 * 2 + iVar2);
      do {
        *puVar9 = uVar1 | 0x47;
        puVar9 = puVar9 + -1;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
  return in_lr;
}

