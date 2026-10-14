// sub_0800DBF0 at 0x0800DBF0 (thumb)

undefined4 sub_0800DBF0(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_lr;
  
  iVar10 = 0;
  uVar3 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x68);
  uVar12 = uVar3 * 0x10000;
  uVar11 = *(uint *)(param_1 + 0x38) << 0x10;
  uVar7 = *(uint *)(param_1 + 0x38) & 0xffff;
  puVar1 = (uint *)sub_080008C8(0x500);
  if (puVar1 != (uint *)0x0) {
    DAT_03001708 = &DAT_04000018;
    DAT_0300170c = 0xa6600002;
    uVar4 = uVar12 >> 0x11;
    uVar8 = uVar11 >> 0x11;
    puVar2 = puVar1 + 1;
    DAT_03001704 = puVar1;
    if (uVar8 < 0x90) {
      uVar6 = 0;
      puVar5 = puVar1;
      do {
        *puVar5 = uVar6 | uVar4;
        uVar6 = uVar6 - 0x10000;
        puVar5 = puVar5 + 2;
        iVar10 = iVar10 + 1;
        if (0x9f < iVar10) break;
      } while ((int)(uVar8 + iVar10) < 0x90);
    }
    if ((iVar10 < 0xa0) && ((int)(uVar7 + iVar10) < 0x120)) {
      puVar5 = puVar1 + iVar10 * 2;
      do {
        *puVar5 = (uVar8 - 0x90) * 0x10000 | uVar4;
        puVar5 = puVar5 + 2;
        iVar10 = iVar10 + 1;
        if (0x9f < iVar10) break;
      } while ((int)(uVar7 + iVar10) < 0x120);
    }
    if (iVar10 < 0xa0) {
      puVar1 = puVar1 + iVar10 * 2;
      do {
        *puVar1 = (uVar7 - 0xe0) * 0x10000 | uVar3 & 0xffff;
        puVar1 = puVar1 + 2;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0xa0);
    }
    iVar10 = sub_080EF2B8(uVar7,6);
    uVar3 = iVar10 + 0x70U & 0xffff;
    iVar10 = 0;
    if (uVar3 < 0xb0) {
      puVar1 = puVar2;
      do {
        *puVar1 = uVar3 << 0x10;
        puVar1 = puVar1 + 2;
        iVar10 = iVar10 + 1;
        if (0x9f < iVar10) break;
      } while ((int)(uVar3 + iVar10) < 0xb0);
    }
    iVar9 = (uVar11 >> 0x12) + 0x58;
    if (iVar10 < 0xa0) {
      if (iVar9 + iVar10 < 0xb0) {
        uVar3 = iVar10 * -0x10000 + 0xaf0000;
        puVar1 = puVar2 + iVar10 * 2;
        do {
          *puVar1 = uVar3;
          uVar3 = uVar3 - 0x10000;
          puVar1 = puVar1 + 2;
          iVar10 = iVar10 + 1;
          if (0x9f < iVar10) {
            return in_lr;
          }
        } while (iVar9 + iVar10 < 0xb0);
      }
      if (iVar10 < 0xa0) {
        puVar2 = puVar2 + iVar10 * 2;
        do {
          *puVar2 = iVar9 * 0x10000 | uVar12 >> 0x12;
          puVar2 = puVar2 + 2;
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0xa0);
      }
    }
  }
  return in_lr;
}

