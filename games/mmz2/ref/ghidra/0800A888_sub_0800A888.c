// sub_0800A888 at 0x0800A888 (thumb)

undefined4 sub_0800A888(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 in_lr;
  
  iVar1 = sub_080008C8(0x280);
  if (iVar1 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    puVar2 = (undefined4 *)(iVar1 + 0x144);
    DAT_03001704 = iVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + -1;
    } while (iVar1 <= (int)puVar2);
    iVar4 = 0x52;
    puVar7 = (uint *)(iVar1 + 0x148);
    do {
      *puVar7 = ((int)((uint)(ushort)(&DAT_080ef450)
                                     [(uint)*(ushort *)(param_1 + 0x68) + iVar4 * -0x10 & 0xff] <<
                      0x10) >> 0x18) << 0x10 |
                (int)((uint)(ushort)(&DAT_080ef450)
                                    [(uint)*(ushort *)(param_1 + 0x68) * 8 + iVar4 * -0x20 & 0xff]
                     << 0x10) >> 0x16 & 0xffffU;
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x69);
    iVar4 = (0x140 - *(int *)(param_1 + 0x38) >> 3) + 0x75;
    if (0xa0 < iVar4) {
      iVar4 = 0xa0;
    }
    puVar2 = (undefined4 *)(iVar1 + 0x1a4);
    iVar5 = 10;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    if (0x74 < iVar4) {
      iVar5 = 0;
      piVar3 = (int *)(iVar1 + 0x1d0);
      iVar6 = iVar4 + -0x74;
      do {
        *piVar3 = iVar5;
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + -0x10000;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (iVar4 < 0xa0) {
      iVar5 = 0x75 - iVar4;
      puVar7 = (uint *)(iVar4 * 4 + iVar1);
      do {
        *puVar7 = *(int *)(param_1 + 0x34) >> 2 | iVar5 * 0x10000;
        puVar7 = puVar7 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xa0);
    }
  }
  return in_lr;
}

