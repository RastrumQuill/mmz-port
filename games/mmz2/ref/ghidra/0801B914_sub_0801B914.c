// sub_0801B914 at 0x0801B914 (thumb)

undefined4 sub_0801B914(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar3 = *(uint *)(param_1 + 0x144);
  if ((uVar3 & 8) != 0) {
    if ((uVar3 & 1) == 0) {
      iVar7 = (int)((uint)(ushort)(&DAT_080ef450)[(uVar3 >> 0x10) + 0x40 & 0xff] << 0x10) >> 0x12;
    }
    else {
      iVar7 = 0x100 - (short)(&DAT_080ef450)[(uVar3 >> 0x10) + 0x40 & 0xff] >> 2;
    }
    DAT_02000fe0 = DAT_02000fe0 | 0x2000;
    DAT_02000fec._0_1_ = 0;
    DAT_02000fe8._0_2_ = 0xa0;
    if (iVar7 == 0) {
      DAT_02000fe4._0_2_ = 0xf0;
    }
    else {
      puVar2 = (ushort *)sub_080008C8(0x140);
      if (puVar2 != (ushort *)0x0) {
        DAT_03001748 = &DAT_04000040;
        DAT_0300174c = 0xa2600001;
        iVar6 = 0;
        iVar4 = (0x50 - iVar7) * 3;
        puVar5 = puVar2;
        DAT_03001744 = puVar2;
        do {
          if (iVar6 < iVar7 + 0x32) {
            uVar1 = 0;
          }
          else if (iVar6 < iVar7 + 0x6e) {
            uVar3 = (iVar4 >> 1) + 0x78;
            uVar1 = (ushort)uVar3;
            if (0xf0 < (uVar3 & 0xffff)) {
              uVar1 = 0;
            }
          }
          else {
            uVar1 = 0xf0;
          }
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
          iVar4 = iVar4 + -3;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0xa0);
        iVar4 = 0;
        do {
          if (iVar4 < 0x32 - iVar7) {
            uVar1 = 0xf0;
LAB_0801ba3a:
            *puVar2 = uVar1;
          }
          else if (iVar4 < 0x6e - iVar7) {
            uVar3 = (((iVar7 + 0x50) - iVar4) * 3 >> 1) + 0x78U & 0xffff;
            if (0xf0 < uVar3) {
              uVar3 = 0xf0;
            }
            uVar1 = (ushort)((uVar3 << 0x10) >> 8) | *puVar2;
            goto LAB_0801ba3a;
          }
          puVar2 = puVar2 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0xa0);
      }
    }
  }
  return in_lr;
}

