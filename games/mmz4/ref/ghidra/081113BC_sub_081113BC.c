// sub_081113BC at 0x081113BC (thumb)

undefined4 sub_081113BC(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar1 = FUN_081288bc((param_1 << 0x10) >> 10,0x30);
  iVar7 = 0x100 - *(short *)((int)&DAT_08128c10 + ((uint)(iVar1 << 0x18) >> 0x17));
  iVar1 = iVar7 * -0x7800;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = iVar7 * -0xf000;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar1 = (iVar1 >> 8) + 0x1000 >> 8;
  iVar3 = iVar7 * 0x78 + 0x8f00 >> 8;
  iVar4 = sub_08000A70(0x140);
  if (iVar4 != 0) {
    sub_08000AB4(0,iVar4,0x140);
    iVar8 = iVar1;
    if (iVar1 < 0) {
      iVar8 = 0;
    }
    iVar10 = iVar3 + -0x7f;
    iVar11 = iVar10;
    if (0xa0 < iVar10) {
      iVar11 = 0xa0;
    }
    iVar5 = iVar1 + 0x7f;
    if (iVar8 < iVar11) {
      puVar6 = (undefined2 *)(iVar8 * 2 + iVar4);
      iVar11 = iVar11 - iVar8;
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (iVar10 < 0) {
      iVar8 = -iVar10;
      iVar10 = 0;
    }
    else {
      iVar8 = 0;
    }
    iVar11 = iVar3;
    if (0xa0 < iVar3) {
      iVar11 = 0xa0;
    }
    if (iVar10 < iVar11) {
      puVar6 = (undefined2 *)(iVar10 * 2 + iVar4);
      iVar11 = iVar11 - iVar10;
      do {
        iVar10 = FUN_081288bc((0x7f - iVar8) * 0x7f);
        iVar10 = ((iVar2 >> 8) + 0x3800 >> 8) + iVar10;
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        *puVar6 = (short)(iVar10 << 8);
        puVar6 = puVar6 + 1;
        iVar11 = iVar11 + -1;
        iVar8 = iVar8 + 1;
      } while (iVar11 != 0);
    }
    if (iVar1 < 0) {
      iVar2 = -iVar1;
      iVar1 = 0;
    }
    else {
      iVar2 = 0;
    }
    if (0xa0 < iVar5) {
      iVar5 = 0xa0;
    }
    if (iVar1 < iVar5) {
      iVar2 = iVar2 * -0x7f00;
      puVar9 = (ushort *)(iVar1 * 2 + iVar4);
      iVar8 = iVar5 - iVar1;
      do {
        iVar1 = FUN_081288bc(iVar2,0x7f00);
        iVar1 = (iVar7 * 0xf0 + 0xb700 >> 8) + iVar1;
        if (0xf0 < iVar1) {
          iVar1 = 0xf0;
        }
        *puVar9 = (ushort)iVar1 | *puVar9;
        puVar9 = puVar9 + 1;
        iVar8 = iVar8 + -1;
        iVar2 = iVar2 + -0x7f00;
        iVar1 = iVar5;
      } while (iVar8 != 0);
    }
    if (0xa0 < iVar3) {
      iVar3 = 0xa0;
    }
    if (iVar1 < iVar3) {
      puVar9 = (ushort *)(iVar1 * 2 + iVar4);
      iVar3 = iVar3 - iVar1;
      do {
        *puVar9 = *puVar9 | 0xf0;
        puVar9 = puVar9 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    DAT_03001708 = 0x4000042;
    DAT_0300170c = 0xa2600001;
    DAT_03001704 = iVar4;
  }
  return in_lr;
}

