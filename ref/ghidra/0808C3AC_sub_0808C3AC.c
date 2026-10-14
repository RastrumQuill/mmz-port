// sub_0808C3AC at 0x0808C3AC (thumb)

undefined4 sub_0808C3AC(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 in_lr;
  
  iVar16 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(iVar16 + 0x20);
  uVar13 = *(byte *)(iVar3 + 0x1f) + 0x80 & 0xff;
  iVar18 = *(int *)(iVar3 + 0x4c);
  iVar4 = *(int *)(iVar3 + 0x50);
  iVar10 = (int)(short)(&DAT_080c8e24)[uVar13 + 0x40];
  iVar5 = (int)(short)(&DAT_080c8e24)[uVar13];
  iVar3 = sub_08008BC0(iVar18,iVar4);
  if ((iVar18 <= iVar3) || (iVar3 < iVar18 + -0xf000)) {
    iVar3 = iVar18 + -0xf000;
  }
  bVar1 = *(byte *)(iVar16 + 0x74);
  *(byte *)(iVar16 + 0x74) = bVar1 + 1;
  uVar11 = (uint)bVar1;
  uVar11 = (uVar11 & 1 | uVar11 & uVar11 << 1 & 2) + 1;
  if (1 < uVar11) {
    uVar13 = (uint)*(byte *)(iVar16 + 0x78);
  }
  iVar14 = (int)(short)(&DAT_080c8e24)[uVar13 + 0x40];
  iVar6 = (int)(short)(&DAT_080c8e24)[uVar13];
  iVar18 = iVar18 + iVar10 * 0x10;
  iVar7 = iVar4 + -0x200 + iVar5 * 0x10;
  iVar8 = iVar18 - *(int *)(param_2 + 8);
  iVar4 = iVar8 - iVar5 * uVar11;
  iVar17 = iVar4 * 0x100;
  iVar8 = iVar8 + uVar11 * iVar6;
  iVar15 = iVar8 * 0x100;
  iVar9 = iVar7 - *(int *)(param_2 + 0xc);
  iVar16 = (int)(iVar9 + uVar11 * iVar10) >> 8;
  iVar9 = (int)(iVar9 - uVar11 * iVar14) >> 8;
  if (iVar5 == 0) {
    iVar10 = (iVar10 + -0xf0) * 0x10000;
  }
  else {
    iVar10 = sub_080C8AD0(iVar10 << 0x10,iVar5);
  }
  if (iVar6 == 0) {
    iVar6 = (iVar14 + -0xf0) * 0x10000;
  }
  else {
    iVar6 = sub_080C8AD0(iVar14 << 0x10,iVar6);
  }
  if (iVar5 < 0) {
    iVar18 = sub_0800869C(iVar18,iVar7);
  }
  else {
    iVar18 = sub_08008360(iVar18,iVar7);
  }
  iVar18 = iVar18 - *(int *)(param_2 + 0xc) >> 8;
  iVar3 = (iVar3 - *(int *)(param_2 + 8)) * 0x100;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar7 = FUN_0800061c(0x140);
  if (iVar7 != 0) {
    DAT_030004f8 = 0x4000042;
    DAT_030004fc = 0xa2600001;
    DAT_030004f4 = iVar7;
    FUN_0800065c(0,iVar7,0x140);
    if (iVar5 < 1) {
      if ((((-1 < iVar9) && (iVar18 <= iVar9)) && (iVar3 <= iVar17)) &&
         (iVar17 + iVar8 * -0x100 < 0 == SBORROW4(iVar17,iVar15))) {
        puVar12 = (ushort *)(iVar9 * 2 + iVar7);
        do {
          uVar2 = (ushort)((uint)iVar17 >> 0x10);
          if (iVar15 < iVar3) {
            *puVar12 = uVar2 & 0xff | (ushort)((iVar3 >> 0x10) << 8);
          }
          else {
            *puVar12 = (ushort)((iVar15 >> 0x10) << 8) | uVar2 & 0xff;
          }
          iVar15 = iVar15 - iVar6;
          if (iVar9 <= iVar16) {
            iVar17 = iVar17 - iVar10;
          }
          puVar12 = puVar12 + -1;
          iVar9 = iVar9 + -1;
        } while (((-1 < iVar9) && (iVar18 <= iVar9)) && ((iVar3 <= iVar17 && (iVar15 <= iVar17))));
      }
    }
    else if (((iVar16 < 0xa0) && (iVar16 <= iVar18)) &&
            ((iVar3 <= iVar15 && (iVar15 + iVar4 * -0x100 < 0 == SBORROW4(iVar15,iVar17))))) {
      puVar12 = (ushort *)(iVar16 * 2 + iVar7);
      do {
        uVar2 = (ushort)((uint)iVar15 >> 0x10);
        if (iVar17 < iVar3) {
          *puVar12 = uVar2 & 0xff | (ushort)((iVar3 >> 0x10) << 8);
        }
        else {
          *puVar12 = (ushort)((iVar17 >> 0x10) << 8) | uVar2 & 0xff;
        }
        iVar17 = iVar17 + iVar10;
        if (iVar9 <= iVar16) {
          iVar15 = iVar15 + iVar6;
        }
        puVar12 = puVar12 + 1;
        iVar16 = iVar16 + 1;
      } while ((((iVar16 < 0xa0) && (iVar16 <= iVar18)) && (iVar3 <= iVar15)) && (iVar17 <= iVar15))
      ;
    }
  }
  return in_lr;
}

