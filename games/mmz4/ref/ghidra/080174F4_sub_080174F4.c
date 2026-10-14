// sub_080174F4 at 0x080174F4 (thumb)

undefined4 sub_080174F4(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 in_lr;
  undefined4 local_38 [6];
  
  iVar12 = 0x9f;
  iVar2 = *(int *)(param_1 + 0x5c);
  if (DAT_0202cab2 != 0) {
    sub_081284E4(&DAT_08b3e178,
                 ((ushort)(&DAT_02000a04)[(uint)(iVar2 << 0x10) >> 0x14] & 0x1f00) * 8 + 0x6000000,
                 0x200);
    local_38[0] = 0;
    sub_081284E4(local_38,&DAT_06000800 +
                          ((ushort)(&DAT_02000a04)[(uint)(iVar2 << 0x10) >> 0x14] & 0x1f00) * 8,
                 0x1000200);
  }
  iVar2 = sub_08000A70(0x280);
  if (iVar2 != 0) {
    DAT_03001708 = &DAT_04000018;
    DAT_0300170c = 0xa6600001;
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 < 0x280) {
      uVar3 = iVar4 - 0x178;
    }
    else {
      uVar3 = iVar4 - 0x3f8;
    }
    uVar1 = *(ushort *)(param_1 + 0x34);
    uVar11 = (uVar3 & 0xffff) * 0x10000;
    iVar4 = (int)uVar11 >> 0x10;
    DAT_03001704 = iVar2;
    if (0xd7 < iVar4 + 0x9f) {
      puVar7 = (uint *)(iVar2 + 0x27c);
      do {
        *puVar7 = uVar11 | uVar1;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < 0xd8) break;
      } while (-1 < iVar12);
    }
    uVar5 = (uint)(*(int *)(param_1 + 0x34) * 0xe000) >> 0x10;
    if ((0x77 < iVar4 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = uVar11 | uVar5;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < 0x78) break;
      } while (-1 < iVar12);
    }
    if ((0x57 < iVar4 + iVar12) && (-1 < iVar12)) {
      iVar6 = iVar12 * -0x10000 + 0x780000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar6;
        iVar6 = iVar6 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < 0x58) break;
      } while (-1 < iVar12);
    }
    if ((0x37 < iVar4 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = uVar11 + 0x200000 | uVar5;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < 0x38) break;
      } while (-1 < iVar12);
    }
    if ((7 < iVar4 + iVar12) && (-1 < iVar12)) {
      iVar6 = iVar12 * -0x10000 + 0x580000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar6;
        iVar6 = iVar6 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < 8) break;
      } while (-1 < iVar12);
    }
    if ((-9 < iVar4 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = uVar11 + 0x500000 | uVar5;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar4 + iVar12 < -8) break;
      } while (-1 < iVar12);
    }
    uVar1 = *(ushort *)(param_1 + 0x68);
    iVar9 = *(int *)(param_1 + 0x34);
    iVar4 = (uVar3 & 0xffff) * 0x10000;
    iVar6 = iVar4 + 0x80000 >> 0x10;
    if ((-9 < iVar6 + iVar12) && (-1 < iVar12)) {
      iVar10 = iVar12 * -0x10000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar10;
        iVar10 = iVar10 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar6 + iVar12 < -8) break;
      } while (-1 < iVar12);
    }
    if ((-0x11 < iVar6 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = iVar4 + 0x580000U | (uint)(uVar1 >> 4) + (iVar9 * 0xb >> 4) & 0xffff;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar6 + iVar12 < -0x10) break;
      } while (-1 < iVar12);
    }
    uVar1 = *(ushort *)(param_1 + 0x6a);
    iVar9 = *(int *)(param_1 + 0x34);
    iVar6 = iVar4 + 0x140000 >> 0x10;
    if ((-0x11 < iVar6 + iVar12) && (-1 < iVar12)) {
      iVar10 = iVar12 * -0x10000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar10;
        iVar10 = iVar10 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar6 + iVar12 < -0x10) break;
      } while (-1 < iVar12);
    }
    if ((-0x19 < iVar6 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = iVar4 + 0x640000U | (uint)(uVar1 >> 4) + (iVar9 * 0xb4 >> 8) & 0xffff;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar6 + iVar12 < -0x18) break;
      } while (-1 < iVar12);
    }
    uVar1 = *(ushort *)(param_1 + 0x6c);
    iVar9 = *(int *)(param_1 + 0x34);
    iVar6 = iVar4 + 0x180000 >> 0x10;
    if ((-0x19 < iVar6 + iVar12) && (-1 < iVar12)) {
      iVar10 = iVar12 * -0x10000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar10;
        iVar10 = iVar10 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar6 + iVar12 < -0x18) break;
      } while (-1 < iVar12);
    }
    if ((-0x31 < iVar6 + iVar12) && (-1 < iVar12)) {
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = iVar4 + 0x680000U | (uint)(uVar1 >> 4) + (iVar9 * 0xb8 >> 8) & 0xffff;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar6 + iVar12 < -0x30) break;
      } while (-1 < iVar12);
    }
    uVar1 = *(ushort *)(param_1 + 0x6e);
    iVar9 = *(int *)(param_1 + 0x34);
    iVar6 = iVar4 + 0x280000 >> 0x10;
    if ((-0x31 < iVar6 + iVar12) && (-1 < iVar12)) {
      iVar10 = iVar12 * -0x10000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar10;
        iVar10 = iVar10 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
        if (iVar6 + iVar12 < -0x30) break;
      } while (-1 < iVar12);
    }
    if (-0x51 < iVar6 + iVar12) {
      if (iVar12 < 0) {
        return in_lr;
      }
      puVar7 = (uint *)(iVar12 * 4 + iVar2);
      do {
        *puVar7 = iVar4 + 0x780000U | (uint)(uVar1 >> 4) + (iVar9 * 0xbc >> 8) & 0xffff;
        puVar7 = puVar7 + -1;
        iVar12 = iVar12 + -1;
        if (iVar6 + iVar12 < -0x50) break;
      } while (-1 < iVar12);
    }
    if (-1 < iVar12) {
      iVar4 = iVar12 * -0x10000;
      piVar8 = (int *)(iVar12 * 4 + iVar2);
      do {
        *piVar8 = iVar4;
        iVar4 = iVar4 + 0x10000;
        piVar8 = piVar8 + -1;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
  }
  return in_lr;
}

