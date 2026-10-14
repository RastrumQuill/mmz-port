// sub_08011D08 at 0x08011D08 (thumb)

undefined4 sub_08011D08(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0x34);
  uVar2 = *(int *)(param_1 + 0x38) - 0xa0U & 0xffff;
  puVar3 = (uint *)sub_080008C8(0x280);
  if (puVar3 != (uint *)0x0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    DAT_03001704 = puVar3;
    uVar4 = sub_080EF150((uint)uVar1 * 0x2c,100);
    uVar4 = uVar4 & 0xffff;
    uVar5 = sub_080EF150(uVar2 * 0x2c,100);
    uVar5 = uVar5 & 0xffff;
    iVar6 = 0x48 - uVar5;
    iVar9 = 0;
    if (0 < iVar6) {
      iVar8 = iVar6;
      puVar7 = puVar3;
      do {
        *puVar7 = uVar4 + (*(uint *)(param_1 + 0x68) >> 1) & 0xffff | uVar5 << 0x10;
        puVar7 = puVar7 + 1;
        iVar8 = iVar8 + -1;
        iVar9 = iVar6;
      } while (iVar8 != 0);
    }
    iVar6 = 0x68 - uVar5;
    if (iVar9 < iVar6) {
      puVar7 = puVar3 + iVar9;
      iVar8 = iVar6 - iVar9;
      do {
        *puVar7 = uVar4 + (*(uint *)(param_1 + 0x68) >> 2) & 0xffff | uVar5 << 0x10;
        puVar7 = puVar7 + 1;
        iVar8 = iVar8 + -1;
        iVar9 = iVar6;
      } while (iVar8 != 0);
    }
    iVar6 = 0x80 - uVar5;
    if (iVar9 < iVar6) {
      puVar7 = puVar3 + iVar9;
      iVar8 = iVar6 - iVar9;
      do {
        *puVar7 = uVar4 + (*(uint *)(param_1 + 0x68) >> 3) & 0xffff | uVar5 << 0x10;
        puVar7 = puVar7 + 1;
        iVar8 = iVar8 + -1;
        iVar9 = iVar6;
      } while (iVar8 != 0);
    }
    iVar6 = 0xa0 - uVar5;
    if (iVar9 < iVar6) {
      puVar7 = puVar3 + iVar9;
      iVar8 = iVar6 - iVar9;
      do {
        *puVar7 = uVar4 + (*(uint *)(param_1 + 0x68) >> 4) & 0xffff | uVar5 << 0x10;
        puVar7 = puVar7 + 1;
        iVar8 = iVar8 + -1;
        iVar9 = iVar6;
      } while (iVar8 != 0);
    }
    if (iVar9 < 0xa0) {
      if ((int)(uVar2 + iVar9) < 0x160) {
        uVar4 = iVar9 * -0x10000 + 0xa00000;
        puVar7 = puVar3 + iVar9;
        do {
          *puVar7 = uVar4;
          puVar7 = puVar7 + 1;
          uVar4 = uVar4 - 0x10000;
          iVar9 = iVar9 + 1;
          if (0x9f < iVar9) {
            return in_lr;
          }
        } while ((int)(uVar2 + iVar9) < 0x160);
      }
      if (iVar9 < 0xa0) {
        puVar3 = puVar3 + iVar9;
        do {
          *puVar3 = (uVar2 + 0x40) * 0x10000 | (uint)uVar1 * 3 >> 2;
          puVar3 = puVar3 + 1;
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0xa0);
      }
    }
  }
  return in_lr;
}

