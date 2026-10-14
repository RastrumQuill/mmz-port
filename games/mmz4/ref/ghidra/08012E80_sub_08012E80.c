// sub_08012E80 at 0x08012E80 (thumb)

undefined4 sub_08012E80(int param_1)

{
  ushort uVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined4 in_lr;
  
  iVar5 = *(int *)(DAT_020359b8 + 0x58);
  if (*(int *)(DAT_020359b8 + 0x54) < 0x11d000) {
    if (iVar5 < 0x28000) {
      iVar8 = 0x100;
      goto LAB_08012ede;
    }
    if (0x28000 < iVar5) {
      iVar8 = 0x440;
      goto LAB_08012ede;
    }
  }
  iVar8 = 0x470;
  if ((0x11d000 < *(int *)(DAT_020359b8 + 0x54)) && (iVar5 < 0x28000)) {
    iVar8 = 0x140;
  }
LAB_08012ede:
  puVar3 = (uint *)sub_08000A70(0x280);
  if (puVar3 != (uint *)0x0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    uVar1 = *(ushort *)(param_1 + 0x68);
    iVar6 = *(int *)(param_1 + 0x34);
    iVar8 = *(int *)(param_1 + 0x38) - iVar8;
    iVar7 = 0;
    sVar2 = (short)iVar8;
    iVar5 = (int)sVar2;
    DAT_03001704 = puVar3;
    if (iVar5 < 0x28) {
      puVar9 = puVar3;
      do {
        *puVar9 = iVar5 << 0x10 | (uint)(uVar1 >> 4) + (iVar6 >> 2) & 0xffff;
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + 1;
        if (0x9f < iVar7) break;
      } while (iVar5 + iVar7 < 0x28);
    }
    uVar1 = *(ushort *)(param_1 + 0x6a);
    iVar5 = *(int *)(param_1 + 0x34);
    if ((iVar7 < 0xa0) && (iVar6 = (int)sVar2, iVar6 + iVar7 < 0x48)) {
      puVar9 = puVar3 + iVar7;
      do {
        *puVar9 = iVar6 << 0x10 | (uint)(uVar1 >> 4) + (iVar5 >> 3) & 0xffff;
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + 1;
        if (0x9f < iVar7) break;
      } while (iVar6 + iVar7 < 0x48);
    }
    uVar1 = *(ushort *)(param_1 + 0x6c);
    iVar5 = *(int *)(param_1 + 0x34);
    if ((iVar7 < 0xa0) && (iVar6 = (int)sVar2, iVar6 + iVar7 < 0x58)) {
      puVar9 = puVar3 + iVar7;
      do {
        *puVar9 = iVar6 << 0x10 | (uint)(uVar1 >> 4) + (iVar5 >> 4) & 0xffff;
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + 1;
        if (0x9f < iVar7) break;
      } while (iVar6 + iVar7 < 0x58);
    }
    uVar1 = *(ushort *)(param_1 + 0x6e);
    iVar5 = *(int *)(param_1 + 0x34);
    if ((iVar7 < 0xa0) && (iVar6 = (int)sVar2, iVar6 + iVar7 < 0x68)) {
      puVar9 = puVar3 + iVar7;
      do {
        *puVar9 = iVar6 << 0x10 | (uint)(uVar1 >> 4) + (iVar5 >> 5) & 0xffff;
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + 1;
        if (0x9f < iVar7) break;
      } while (iVar6 + iVar7 < 0x68);
    }
    uVar1 = *(ushort *)(param_1 + 0x70);
    iVar5 = *(int *)(param_1 + 0x34);
    if (iVar7 < 0xa0) {
      uVar4 = iVar8 * 0x10000;
      iVar8 = (int)uVar4 >> 0x10;
      if (iVar8 + iVar7 < 0x70) {
        puVar9 = puVar3 + iVar7;
        do {
          *puVar9 = iVar8 << 0x10 | (uint)(uVar1 >> 4) + (iVar5 >> 6) & 0xffff;
          puVar9 = puVar9 + 1;
          iVar7 = iVar7 + 1;
          if (0x9f < iVar7) {
            return in_lr;
          }
        } while (iVar8 + iVar7 < 0x70);
      }
      if (iVar7 < 0xa0) {
        puVar3 = puVar3 + iVar7;
        do {
          *puVar3 = uVar4;
          puVar3 = puVar3 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0xa0);
      }
    }
  }
  return in_lr;
}

