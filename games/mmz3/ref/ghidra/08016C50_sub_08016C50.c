// sub_08016C50 at 0x08016C50 (thumb)

undefined4 sub_08016C50(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x34);
  uVar2 = *(int *)(param_1 + 0x38) - 0xa0U & 0xffff;
  puVar3 = (uint *)sub_08001B60(0x280);
  if (puVar3 != (uint *)0x0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    DAT_03001704 = puVar3;
    if (DAT_0202f4a9 == '\x01') {
      iVar5 = FUN_080fe2f8(uVar2 * 0x21,100);
      uVar8 = iVar5 + 0x28U & 0xffff;
      iVar6 = 0xa0 - uVar8;
      iVar5 = 0;
      if (0 < iVar6) {
        puVar7 = puVar3;
        iVar9 = iVar6;
        do {
          *puVar7 = uVar8 << 0x10;
          puVar7 = puVar7 + 1;
          iVar9 = iVar9 + -1;
          iVar5 = iVar6;
        } while (iVar9 != 0);
      }
      if (iVar5 < 0xa0) {
        if ((int)(uVar2 + iVar5) < 0x168) {
          uVar8 = iVar5 * -0x10000 + 0xa80000;
          puVar7 = puVar3 + iVar5;
          do {
            *puVar7 = uVar8;
            puVar7 = puVar7 + 1;
            uVar8 = uVar8 - 0x10000;
            iVar5 = iVar5 + 1;
            if (0x9f < iVar5) goto LAB_08016e78;
          } while ((int)(uVar2 + iVar5) < 0x168);
        }
        if (iVar5 < 0xa0) {
          puVar3 = puVar3 + iVar5;
          do {
            *puVar3 = (uVar2 + 0x40) * 0x10000 | uVar1 * 3 >> 2;
            puVar3 = puVar3 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0xa0);
        }
      }
LAB_08016e78:
      sub_080041E4(0x77);
    }
    else {
      uVar8 = FUN_080fe2f8(uVar1 * 0x2c,100);
      uVar8 = uVar8 & 0xffff;
      uVar4 = FUN_080fe2f8(uVar2 * 0x2c,100);
      uVar4 = uVar4 & 0xffff;
      iVar6 = 0x48 - uVar4;
      iVar5 = 0;
      if (0 < iVar6) {
        iVar9 = iVar6;
        puVar7 = puVar3;
        do {
          *puVar7 = uVar8 + (*(uint *)(param_1 + 0x68) >> 1) & 0xffff | uVar4 << 0x10;
          puVar7 = puVar7 + 1;
          iVar9 = iVar9 + -1;
          iVar5 = iVar6;
        } while (iVar9 != 0);
      }
      iVar6 = 0x68 - uVar4;
      if (iVar5 < iVar6) {
        puVar7 = puVar3 + iVar5;
        iVar9 = iVar6 - iVar5;
        do {
          *puVar7 = uVar8 + (*(uint *)(param_1 + 0x68) >> 2) & 0xffff | uVar4 << 0x10;
          puVar7 = puVar7 + 1;
          iVar9 = iVar9 + -1;
          iVar5 = iVar6;
        } while (iVar9 != 0);
      }
      iVar6 = 0x80 - uVar4;
      if (iVar5 < iVar6) {
        puVar7 = puVar3 + iVar5;
        iVar9 = iVar6 - iVar5;
        do {
          *puVar7 = uVar8 + (*(uint *)(param_1 + 0x68) >> 3) & 0xffff | uVar4 << 0x10;
          puVar7 = puVar7 + 1;
          iVar9 = iVar9 + -1;
          iVar5 = iVar6;
        } while (iVar9 != 0);
      }
      iVar6 = 0xa0 - uVar4;
      if (iVar5 < iVar6) {
        puVar7 = puVar3 + iVar5;
        iVar9 = iVar6 - iVar5;
        do {
          *puVar7 = uVar8 + (*(uint *)(param_1 + 0x68) >> 4) & 0xffff | uVar4 << 0x10;
          puVar7 = puVar7 + 1;
          iVar9 = iVar9 + -1;
          iVar5 = iVar6;
        } while (iVar9 != 0);
      }
      if (iVar5 < 0xa0) {
        if ((int)(uVar2 + iVar5) < 0x160) {
          uVar8 = iVar5 * -0x10000 + 0xa00000;
          puVar7 = puVar3 + iVar5;
          do {
            *puVar7 = uVar8;
            puVar7 = puVar7 + 1;
            uVar8 = uVar8 - 0x10000;
            iVar5 = iVar5 + 1;
            if (0x9f < iVar5) {
              return in_lr;
            }
          } while ((int)(uVar2 + iVar5) < 0x160);
        }
        if (iVar5 < 0xa0) {
          puVar3 = puVar3 + iVar5;
          do {
            *puVar3 = (uVar2 + 0x40) * 0x10000 | uVar1 * 3 >> 2;
            puVar3 = puVar3 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0xa0);
        }
      }
    }
  }
  return in_lr;
}

