// sub_080BCBA8 at 0x080BCBA8 (thumb)

undefined4 sub_080BCBA8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar10 + 0xc) < 2) {
    uVar5 = 0;
    iVar9 = *(int *)(iVar10 + 0x58);
    do {
      iVar6 = uVar5 * 0x10000;
      iVar1 = (iVar9 + (iVar6 >> 0x10)) * 0x200000;
      iVar2 = iVar1 >> 0x10;
      if (-1 < iVar2) {
        if (0x27f < iVar2) {
          return in_lr;
        }
        uVar5 = 0;
        iVar7 = *(int *)(iVar10 + 0x54);
        iVar3 = (int)(short)iVar7;
        iVar2 = iVar7;
        do {
          if (-1 < iVar3) {
            if (0x1d < iVar3) break;
            uVar8 = (*(ushort *)
                      (&DAT_0202f8f8 + ((int)(short)((uint)iVar1 >> 0x10) + (int)(short)iVar2) * 2)
                    & 0xf) + (ushort)(byte)(&DAT_08347400)
                                           [(uint)*(byte *)(iVar10 + 0x13) * 0x100 + (iVar6 >> 0xc)
                                            + (int)(short)uVar5];
            if (0xf < uVar8) {
              uVar8 = 0xf;
            }
            *(ushort *)(&DAT_0202f8f8 + ((int)(short)((uint)iVar1 >> 0x10) + (int)(short)iVar2) * 2)
                 = uVar8 | 0x1200;
          }
          uVar4 = uVar5 * 0x10000 + 0x10000;
          uVar5 = uVar4 >> 0x10;
          iVar2 = (int)uVar4 >> 0x10;
          if (0xf < iVar2) break;
          iVar2 = iVar2 + iVar7;
          iVar3 = iVar2 * 0x10000 >> 0x10;
        } while( true );
      }
      uVar5 = iVar6 + 0x10000U >> 0x10;
    } while ((int)(iVar6 + 0x10000U) >> 0x10 < 0x10);
  }
  return in_lr;
}

