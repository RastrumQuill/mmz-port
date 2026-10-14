// sub_080221C8 at 0x080221C8 (thumb)

undefined4 sub_080221C8(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar4 = *(uint *)(param_1 + 0x144);
  if ((uVar4 & 8) != 0) {
    if ((uVar4 & 1) == 0) {
      iVar7 = (int)((uint)*(ushort *)
                           ((int)&DAT_080fe64c + (((uVar4 >> 0x10) + 0x40) * 0x1000000 >> 0x17)) <<
                   0x10) >> 0x12;
    }
    else {
      iVar7 = 0x100 - *(short *)((int)&DAT_080fe64c + (((uVar4 >> 0x10) + 0x40) * 0x1000000 >> 0x17)
                                ) >> 2;
    }
    DAT_02002410 = DAT_02002410 | 0x2000;
    DAT_0200241c = 0;
    DAT_02002418 = 0xa0;
    if (iVar7 == 0) {
      DAT_02002414 = 0xf0;
    }
    else {
      puVar2 = (ushort *)sub_08001B60(0x140);
      if (puVar2 != (ushort *)0x0) {
        DAT_03001748 = &DAT_04000040;
        DAT_0300174c = 0xa2600001;
        iVar6 = 0;
        iVar3 = (0x50 - iVar7) * 3;
        puVar5 = puVar2;
        DAT_03001744 = puVar2;
        do {
          if (iVar6 < iVar7 + 0x32) {
            uVar1 = 0;
          }
          else if (iVar6 < iVar7 + 0x6e) {
            uVar4 = (iVar3 >> 1) + 0x78;
            uVar1 = (ushort)uVar4;
            if (0xf0 < (uVar4 & 0xffff)) {
              uVar1 = 0;
            }
          }
          else {
            uVar1 = 0xf0;
          }
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + -3;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0xa0);
        iVar3 = 0;
        do {
          if (iVar3 < 0x32 - iVar7) {
            uVar1 = 0xf0;
LAB_080222ee:
            *puVar2 = uVar1;
          }
          else if (iVar3 < 0x6e - iVar7) {
            uVar4 = (((iVar7 + 0x50) - iVar3) * 3 >> 1) + 0x78U & 0xffff;
            if (0xf0 < uVar4) {
              uVar4 = 0xf0;
            }
            uVar1 = (ushort)((uVar4 << 0x10) >> 8) | *puVar2;
            goto LAB_080222ee;
          }
          puVar2 = puVar2 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0xa0);
      }
    }
  }
  return in_lr;
}

