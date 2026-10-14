// sub_0800ACB8 at 0x0800ACB8 (thumb)

undefined4 sub_0800ACB8(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = 0x9f;
  if (DAT_0202cab2 != 0) {
    iVar7 = *(int *)(param_1 + 0x5c);
    sub_081284E4(&DAT_08b37e88,
                 ((ushort)(&DAT_02000a04)[(uint)(iVar7 << 0x10) >> 0x14] & 0x1f00) * 8 + 0x6000000,
                 0x200);
    sub_081284E4(&DAT_08b38690,
                 &DAT_06000800 +
                 ((ushort)(&DAT_02000a04)[(uint)(iVar7 << 0x10) >> 0x14] & 0x1f00) * 8,0x200);
  }
  iVar7 = sub_08000A70(0x280);
  if (iVar7 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar3 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x68);
    uVar8 = *(int *)(param_1 + 0x38) - 0x180U & 0xffff;
    uVar6 = uVar8 * 0x10000;
    iVar2 = (int)uVar6 >> 0x10;
    DAT_03001704 = iVar7;
    if (0xec < iVar2 + 0x9f) {
      puVar5 = (uint *)(iVar7 + 0x27c);
      do {
        *puVar5 = uVar6 | (iVar3 >> 1) + (uint)(uVar1 >> 8) & 0xffff;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar2 + iVar9 < 0xed) break;
      } while (-1 < iVar9);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x6a);
    uVar8 = uVar8 * 0x10000;
    iVar3 = (int)uVar8 >> 0x10;
    if ((199 < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar5 = (uint *)(iVar9 * 4 + iVar7);
      do {
        *puVar5 = uVar8 | (iVar2 >> 2) + (uint)(uVar1 >> 8) & 0xffff;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 200) break;
      } while (-1 < iVar9);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x6c);
    if ((0xb8 < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar5 = (uint *)(iVar9 * 4 + iVar7);
      do {
        *puVar5 = uVar8 | (iVar2 >> 4) + (uint)(uVar1 >> 8) & 0xffff;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0xb9) break;
      } while (-1 < iVar9);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x6e);
    if ((0xb0 < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar5 = (uint *)(iVar9 * 4 + iVar7);
      do {
        *puVar5 = uVar8 | (iVar2 >> 5) + (uint)(uVar1 >> 8) & 0xffff;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0xb1) break;
      } while (-1 < iVar9);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x70);
    if ((0xaa < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar5 = (uint *)(iVar9 * 4 + iVar7);
      do {
        *puVar5 = uVar8 | (iVar2 >> 5) + (uint)(uVar1 >> 8) & 0xffff;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0xab) break;
      } while (-1 < iVar9);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x72);
    if ((0xa7 < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar5 = (uint *)(iVar9 * 4 + iVar7);
      do {
        *puVar5 = uVar8 | (iVar2 >> 6) + (uint)(uVar1 >> 8) & 0xffff;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0xa8) break;
      } while (-1 < iVar9);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x74);
    if ((0xa3 < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar5 = (uint *)(iVar9 * 4 + iVar7);
      do {
        *puVar5 = uVar8 | (iVar2 >> 6) + (uint)(uVar1 >> 8) & 0xffff;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0xa4) break;
      } while (-1 < iVar9);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    uVar1 = *(ushort *)(param_1 + 0x76);
    if ((0x9f < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar5 = (uint *)(iVar9 * 4 + iVar7);
      do {
        *puVar5 = uVar8 | (iVar2 >> 7) + (uint)(uVar1 >> 8) & 0xffff;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0xa0) break;
      } while (-1 < iVar9);
    }
    if (*(ushort *)(param_1 + 0x78) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = ((uint)*(ushort *)(param_1 + 0x78) * 0x10000 >> 0x14) -
              (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x34)) & 0xffff;
    }
    if ((-1 < iVar3 + iVar9) && (-1 < iVar9)) {
      puVar5 = (uint *)(iVar9 * 4 + iVar7);
      do {
        *puVar5 = uVar8 | uVar6;
        puVar5 = puVar5 + -1;
        iVar9 = iVar9 + -1;
        if (iVar3 + iVar9 < 0) break;
      } while (-1 < iVar9);
    }
    if (-1 < iVar9) {
      iVar2 = iVar9 * -0x10000;
      piVar4 = (int *)(iVar9 * 4 + iVar7);
      do {
        *piVar4 = iVar2;
        iVar2 = iVar2 + 0x10000;
        piVar4 = piVar4 + -1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  return in_lr;
}

