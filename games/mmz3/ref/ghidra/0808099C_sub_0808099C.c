// sub_0808099C at 0x0808099C (thumb)

undefined4 sub_0808099C(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  short sVar17;
  short sVar18;
  undefined4 in_lr;
  
  iVar13 = *(int *)(param_1 + 8);
  iVar2 = sub_08001B60(0x140);
  if (iVar2 != 0) {
    sub_08001BA4(0,iVar2,0x140);
    uVar3 = (uint)((*(int *)(iVar13 + 0x54) - *(int *)(param_2 + 8)) * 0x100) >> 0x10;
    uVar4 = (uint)((*(int *)(iVar13 + 0x58) - *(int *)(param_2 + 0xc)) * 0x100) >> 0x10;
    uVar11 = 0;
    do {
      uVar5 = (int)(uVar11 * 0x10000) >> 0x10;
      pbVar6 = (byte *)(iVar13 + 0xb4 + uVar5);
      puVar9 = (ushort *)((int)&DAT_080fe64c + ((*pbVar6 + 0x40) * 0x1000000 >> 0x17));
      uVar15 = (uint)(ushort)(&DAT_080fe64c)[*pbVar6];
      uVar14 = (uint)*puVar9;
      iVar12 = (int)(short)*puVar9;
      sVar18 = 1;
      if (iVar12 < 0) {
        sVar18 = -1;
      }
      iVar10 = (int)(short)(&DAT_080fe64c)[*pbVar6];
      sVar17 = 1;
      if (iVar10 < 0) {
        sVar17 = -1;
      }
      if (iVar12 < 0) {
        uVar14 = -iVar12 & 0xffff;
      }
      if (iVar10 < 0) {
        uVar15 = -iVar10 & 0xffff;
      }
      iVar10 = (int)(uVar14 * 0x10000) >> 0x10;
      iVar12 = (int)(short)uVar15;
      if (iVar12 < iVar10) {
        bVar1 = true;
        uVar15 = uVar4;
        uVar16 = uVar3;
        do {
          do {
            if (bVar1) {
              puVar9 = (ushort *)(((int)(uVar15 << 0x10) >> 0xf) + iVar2);
              *puVar9 = (ushort)((int)(short)uVar16 << ((uVar5 & 0x1f) << 3)) | *puVar9;
              bVar1 = false;
            }
            uVar16 = (int)(short)uVar16 + (int)sVar18 & 0xffff;
            if (0xef < uVar16) goto LAB_08080b40;
            uVar7 = (short)uVar14 - iVar12;
            uVar14 = uVar7 & 0xffff;
            iVar8 = (int)(uVar7 * 0x10000) >> 0x10;
          } while (0 < iVar8);
          bVar1 = true;
          uVar14 = iVar8 + iVar10 & 0xffff;
          uVar15 = (int)(short)uVar15 + (int)sVar17 & 0xffff;
        } while (uVar15 < 0xa0);
      }
      else {
        uVar14 = uVar4;
        uVar16 = uVar3;
        while( true ) {
          puVar9 = (ushort *)((short)uVar14 * 2 + iVar2);
          *puVar9 = (ushort)((int)(short)uVar16 << ((uVar5 & 0x1f) << 3)) | *puVar9;
          uVar14 = (int)(short)uVar14 + (int)sVar17 & 0xffff;
          if (0x9f < uVar14) break;
          uVar7 = (short)uVar15 - iVar10;
          uVar15 = uVar7 & 0xffff;
          iVar8 = (int)(uVar7 * 0x10000) >> 0x10;
          if (iVar8 < 1) {
            uVar15 = iVar8 + iVar12 & 0xffff;
            uVar16 = (int)(short)uVar16 + (int)sVar18 & 0xffff;
          }
        }
      }
LAB_08080b40:
      uVar5 = uVar11 * 0x10000 + 0x10000;
      uVar11 = uVar5 >> 0x10;
    } while ((int)uVar5 >> 0x10 < 2);
    DAT_0200241a = 0xa0;
    DAT_03001708 = 0x4000042;
    DAT_0300170c = 0xa2600001;
    DAT_03001704 = iVar2;
  }
  return in_lr;
}

