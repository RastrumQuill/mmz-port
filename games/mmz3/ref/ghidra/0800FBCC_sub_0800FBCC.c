// sub_0800FBCC at 0x0800FBCC (thumb)

undefined4 sub_0800FBCC(int param_1)

{
  uint *puVar1;
  int iVar2;
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
    iVar2 = *(int *)(param_1 + 0x34);
    iVar5 = 0;
    iVar3 = ((*(int *)(param_1 + 0x38) + 0xa0 >> 4) + 0x10) * 0x1000000 >> 0x18;
    DAT_03001704 = puVar1;
    if (iVar3 < 0x89) {
      puVar7 = puVar1;
      do {
        *puVar7 = iVar3 << 0x10 | (uint)(iVar2 << 0xc) >> 0x10;
        puVar7 = puVar7 + 1;
        iVar5 = iVar5 + 1;
        if (0x9f < iVar5) break;
      } while (iVar3 + iVar5 < 0x89);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar5 < 0xa0) {
      iVar3 = ((*(int *)(param_1 + 0x38) + -0xa0 >> 3) + 0x10) * 0x1000000 >> 0x18;
      if (iVar3 + iVar5 < 0x89) {
        uVar4 = iVar5 * -0x10000 + 0x890000;
        puVar7 = puVar1 + iVar5;
        do {
          *puVar7 = uVar4;
          puVar7 = puVar7 + 1;
          uVar4 = uVar4 - 0x10000;
          iVar5 = iVar5 + 1;
          if (0x9f < iVar5) goto LAB_0800fca2;
        } while (iVar3 + iVar5 < 0x89);
      }
      if ((iVar5 < 0xa0) && (iVar3 + iVar5 < 0x9a)) {
        puVar7 = puVar1 + iVar5;
        do {
          *puVar7 = iVar3 << 0x10 | (uint)(iVar2 << 0xd) >> 0x10;
          puVar7 = puVar7 + 1;
          iVar5 = iVar5 + 1;
          if (0x9f < iVar5) break;
        } while (iVar3 + iVar5 < 0x9a);
      }
    }
LAB_0800fca2:
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar5 < 0xa0) {
      iVar3 = ((*(int *)(param_1 + 0x38) + -0x140 >> 2) + 0x10) * 0x1000000;
      iVar6 = iVar3 >> 0x18;
      if (iVar6 + iVar5 < 0x99) {
        uVar4 = iVar5 * -0x10000 + 0x990000;
        puVar7 = puVar1 + iVar5;
        do {
          *puVar7 = uVar4;
          puVar7 = puVar7 + 1;
          uVar4 = uVar4 - 0x10000;
          iVar5 = iVar5 + 1;
          if (0x9f < iVar5) {
            return in_lr;
          }
        } while (iVar6 + iVar5 < 0x99);
      }
      if (iVar5 < 0xa0) {
        puVar1 = puVar1 + iVar5;
        do {
          *puVar1 = iVar3 >> 8 | (uint)(iVar2 << 0xe) >> 0x10;
          puVar1 = puVar1 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0xa0);
      }
    }
  }
  return in_lr;
}

