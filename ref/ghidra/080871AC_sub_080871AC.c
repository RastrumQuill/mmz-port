// sub_080871AC at 0x080871AC (thumb)

undefined4 sub_080871AC(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  undefined4 in_lr;
  
  iVar12 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar12 + 0xc) < 2) {
    if (*(char *)(iVar12 + 0xe) == '\0') {
      DAT_02004f80 = DAT_02004f80 | 0x4000;
      DAT_02004f8d = 0x31;
      DAT_02004f8e = DAT_02004f8e | 0xe;
      *(char *)(iVar12 + 0xe) = *(char *)(iVar12 + 0xe) + '\x01';
      DAT_030017a0 = 0x6be0;
    }
    iVar3 = *(int *)(iVar12 + 0x4c);
    iVar7 = *(int *)(param_2 + 8);
    iVar9 = *(int *)(iVar12 + 0x50) - *(int *)(param_2 + 0xc) >> 8;
    iVar4 = sub_08008360();
    iVar4 = iVar4 - *(int *)(param_2 + 0xc) >> 8;
    if (iVar9 < 0xa1) {
      sVar1 = (&DAT_080c8e24)[(*(byte *)(iVar12 + 0x13) + 0xc0 & 0xff) + 0x40];
      *(int *)(iVar12 + 0x54) = (int)sVar1;
      sVar2 = (&DAT_080c8e24)[*(byte *)(iVar12 + 0x13) + 0xc0 & 0xff];
      *(int *)(iVar12 + 0x58) = (int)sVar2;
      iVar12 = sub_080C8AD0((int)sVar1 << 0x10,(int)sVar2 << 8);
      iVar5 = FUN_0800061c(0x140);
      if (iVar5 != 0) {
        FUN_0800065c(0,iVar5,iVar9 * 2);
        if (iVar9 < 0xa0) {
          puVar14 = (ushort *)(iVar9 * 2 + iVar5);
          iVar13 = iVar9;
          do {
            iVar6 = ((iVar13 - iVar9) * iVar12 >> 8) + (iVar3 - iVar7 >> 8);
            uVar8 = iVar6 - 1;
            uVar11 = (short)iVar6 + 1;
            uVar10 = uVar8 & 0xffff;
            iVar6 = (int)(uVar8 * 0x10000) >> 0x10;
            if (iVar6 < 0) {
              uVar10 = 0;
            }
            else if (0xf0 < iVar6) {
              uVar10 = 0xf0;
            }
            if ((short)uVar11 < 0) {
              uVar11 = 0;
            }
            else if (0xf0 < (short)uVar11) {
              uVar11 = 0xf0;
            }
            *puVar14 = uVar11 | (ushort)((uVar10 << 0x10) >> 8);
            puVar14 = puVar14 + 1;
            iVar13 = iVar13 + 1;
          } while (iVar13 < 0xa0);
        }
        DAT_030004f8 = 0x4000042;
        DAT_030004fc = 0xa2600001;
        DAT_030004f4 = iVar5;
      }
      if (0xa0 < iVar4) {
        iVar4 = 0xa0;
      }
      DAT_02004f8a = (ushort)iVar4 & 0xff | (ushort)(iVar9 << 8);
    }
    else {
      DAT_02004f8a = 0;
    }
  }
  return in_lr;
}

