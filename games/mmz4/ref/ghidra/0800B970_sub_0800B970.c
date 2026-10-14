// sub_0800B970 at 0x0800B970 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800B970(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  undefined4 in_lr;
  
  iVar8 = 0x9f;
  iVar2 = sub_08000A70(0x280);
  if (iVar2 != 0) {
    DAT_03001708 = &DAT_04000010 + (*(uint *)(param_1 + 0x5c) >> 4) * 4;
    DAT_0300170c = 0xa6600001;
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = (ushort)DAT_0202dae8 >> 8;
    uVar11 = *(int *)(param_1 + 0x38) - 0x180U & 0xffff;
    uVar9 = uVar11 * 0x10000;
    iVar3 = (int)uVar9 >> 0x10;
    DAT_03001704 = iVar2;
    if (0xe0 < iVar3 + 0x9f) {
      puVar7 = (uint *)(iVar2 + 0x27c);
      do {
        *puVar7 = uVar9 | (iVar4 >> 1) + (uint)uVar1 & 0xffff;
        puVar7 = puVar7 + -1;
        iVar8 = iVar8 + -1;
        if (iVar3 + iVar8 < 0xe1) break;
      } while (-1 < iVar8);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = DAT_0202dae8._2_2_ >> 8;
    uVar11 = uVar11 * 0x10000;
    iVar3 = (int)uVar11 >> 0x10;
    if ((0xcb < iVar3 + iVar8) && (-1 < iVar8)) {
      puVar7 = (uint *)(iVar8 * 4 + iVar2);
      do {
        *puVar7 = uVar11 | (iVar4 >> 2) + (uint)uVar1 & 0xffff;
        puVar7 = puVar7 + -1;
        iVar8 = iVar8 + -1;
        if (iVar3 + iVar8 < 0xcc) break;
      } while (-1 < iVar8);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = DAT_0202daec >> 8;
    if ((0xbb < iVar3 + iVar8) && (-1 < iVar8)) {
      puVar7 = (uint *)(iVar8 * 4 + iVar2);
      do {
        *puVar7 = uVar11 | (iVar4 >> 4) + (uint)uVar1 & 0xffff;
        puVar7 = puVar7 + -1;
        iVar8 = iVar8 + -1;
        if (iVar3 + iVar8 < 0xbc) break;
      } while (-1 < iVar8);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = _DAT_0202daee >> 8;
    if ((0xb4 < iVar3 + iVar8) && (-1 < iVar8)) {
      puVar7 = (uint *)(iVar8 * 4 + iVar2);
      do {
        *puVar7 = uVar11 | (iVar4 >> 5) + (uint)uVar1 & 0xffff;
        puVar7 = puVar7 + -1;
        iVar8 = iVar8 + -1;
        if (iVar3 + iVar8 < 0xb5) break;
      } while (-1 < iVar8);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = (ushort)DAT_0202daf0 >> 8;
    if ((0xaf < iVar3 + iVar8) && (-1 < iVar8)) {
      puVar7 = (uint *)(iVar8 * 4 + iVar2);
      do {
        *puVar7 = uVar11 | (iVar4 >> 5) + (uint)uVar1 & 0xffff;
        puVar7 = puVar7 + -1;
        iVar8 = iVar8 + -1;
        if (iVar3 + iVar8 < 0xb0) break;
      } while (-1 < iVar8);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = DAT_0202daf0._2_2_ >> 8;
    if ((0xab < iVar3 + iVar8) && (-1 < iVar8)) {
      puVar7 = (uint *)(iVar8 * 4 + iVar2);
      do {
        *puVar7 = uVar11 | (iVar4 >> 6) + (uint)uVar1 & 0xffff;
        puVar7 = puVar7 + -1;
        iVar8 = iVar8 + -1;
        if (iVar3 + iVar8 < 0xac) break;
      } while (-1 < iVar8);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = (ushort)DAT_0202daf4 >> 8;
    if ((0xa7 < iVar3 + iVar8) && (-1 < iVar8)) {
      puVar7 = (uint *)(iVar8 * 4 + iVar2);
      do {
        *puVar7 = uVar11 | (iVar4 >> 6) + (uint)uVar1 & 0xffff;
        puVar7 = puVar7 + -1;
        iVar8 = iVar8 + -1;
        if (iVar3 + iVar8 < 0xa8) break;
      } while (-1 < iVar8);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    uVar1 = DAT_0202daf4._2_2_ >> 8;
    if ((0x9f < iVar3 + iVar8) && (-1 < iVar8)) {
      puVar7 = (uint *)(iVar8 * 4 + iVar2);
      do {
        *puVar7 = uVar11 | (iVar4 >> 7) + (uint)uVar1 & 0xffff;
        puVar7 = puVar7 + -1;
        iVar8 = iVar8 + -1;
        if (iVar3 + iVar8 < 0xa0) break;
      } while (-1 < iVar8);
    }
    if (-1 < iVar8) {
      iVar3 = iVar8 * -0x10000 + 0x980000;
      piVar5 = (int *)(iVar8 * 4 + iVar2);
      do {
        *piVar5 = iVar3;
        iVar3 = iVar3 + 0x10000;
        piVar5 = piVar5 + -1;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
  }
  if (DAT_0202dae0._2_2_ != 0x100) {
    iVar8 = 0x9f;
    iVar2 = sub_08000A70(0x140);
    if (iVar2 != 0) {
      DAT_03001724 = &DAT_04000008 + (*(uint *)(param_1 + 0x5c) >> 4) * 2;
      DAT_03001728 = 0xa2600001;
      uVar1 = (ushort)*(undefined4 *)(param_1 + 100);
      iVar3 = *(int *)(param_1 + 0x38) + -0x180;
      sVar10 = (short)iVar3;
      if (*(short *)(param_1 + 0x10) != 0) {
        sVar10 = (short)((uint)(iVar3 * 0x10000 + -0x10000) >> 0x10);
      }
      DAT_03001720 = iVar2;
      if (0xcb < sVar10 + 0x9f) {
        puVar6 = (ushort *)(iVar2 + 0x13e);
        do {
          *puVar6 = uVar1 | 0x45;
          puVar6 = puVar6 + -1;
          iVar8 = iVar8 + -1;
          if (sVar10 + iVar8 < 0xcc) break;
        } while (-1 < iVar8);
      }
      if (-1 < iVar8) {
        puVar6 = (ushort *)(iVar8 * 2 + iVar2);
        do {
          *puVar6 = uVar1 | 0x47;
          puVar6 = puVar6 + -1;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
    }
  }
  return in_lr;
}

