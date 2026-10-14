// sub_08011404 at 0x08011404 (thumb)

undefined4 sub_08011404(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 in_lr;
  
  puVar1 = (uint *)sub_08001B60(0x280);
  if (puVar1 != (uint *)0x0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    DAT_03001704 = puVar1;
    uVar2 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x34),3);
    iVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x38) + -0xe0,3);
    iVar5 = 0;
    iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
    if (iVar3 < 0x8c) {
      puVar7 = puVar1;
      do {
        *puVar7 = iVar3 << 0x10 | uVar2 & 0xffff;
        puVar7 = puVar7 + 1;
        iVar5 = iVar5 + 1;
        if (0x9f < iVar5) break;
      } while (iVar3 + iVar5 < 0x8c);
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar5 < 0xa0) {
      iVar6 = ((*(int *)(param_1 + 0x38) + -0x160 >> 1) + 3) * 0x10000 >> 0x10;
      if (iVar6 + iVar5 < 0x90) {
        uVar2 = iVar5 * -0x10000 + 0x900000;
        puVar7 = puVar1 + iVar5;
        do {
          *puVar7 = uVar2;
          puVar7 = puVar7 + 1;
          uVar2 = uVar2 - 0x10000;
          iVar5 = iVar5 + 1;
          if (0x9f < iVar5) goto LAB_080114ea;
        } while (iVar6 + iVar5 < 0x90);
      }
      if ((iVar5 < 0xa0) && (iVar6 + iVar5 < 0xe1)) {
        puVar7 = puVar1 + iVar5;
        do {
          *puVar7 = iVar6 << 0x10 | (uint)(iVar3 << 0xf) >> 0x10;
          puVar7 = puVar7 + 1;
          iVar5 = iVar5 + 1;
          if (0x9f < iVar5) break;
        } while (iVar6 + iVar5 < 0xe1);
      }
    }
LAB_080114ea:
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar5 < 0xa0) {
      uVar2 = (((*(int *)(param_1 + 0x38) + -0x1e0) * 3 >> 2) + 5) * 0x10000;
      iVar6 = (int)uVar2 >> 0x10;
      if (iVar6 + iVar5 < 0xe0) {
        uVar4 = iVar5 * -0x10000 + 0xf00000;
        puVar7 = puVar1 + iVar5;
        do {
          *puVar7 = uVar4;
          puVar7 = puVar7 + 1;
          uVar4 = uVar4 - 0x10000;
          iVar5 = iVar5 + 1;
          if (0x9f < iVar5) {
            return in_lr;
          }
        } while (iVar6 + iVar5 < 0xe0);
      }
      if (iVar5 < 0xa0) {
        puVar1 = puVar1 + iVar5;
        do {
          *puVar1 = (uint)(iVar3 * 0xc000) >> 0x10 | uVar2;
          puVar1 = puVar1 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0xa0);
      }
    }
  }
  return in_lr;
}

