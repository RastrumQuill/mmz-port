// sub_08003660 at 0x08003660 (thumb)

undefined4 sub_08003660(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int *piVar13;
  undefined4 in_lr;
  
  puVar6 = (ushort *)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x1a) * 4);
  puVar12 = (uint *)(*(int *)(param_1 + 8) + (uint)*puVar6);
  iVar2 = (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20;
  uVar7 = (uint)*(byte *)(puVar6 + 1);
  if ((uVar7 <= (uint)((int)&DAT_030032d0 - (int)DAT_030032d0) >> 3) && (uVar7 != 0)) {
    piVar13 = *(int **)(param_1 + 0xc);
    do {
      iVar3 = *(char *)((int)puVar12 + 6) * 0x100;
      iVar4 = ((uint)(*(byte *)((int)puVar12 + 1) >> 6) << 2 |
              (uint)(*(byte *)((int)puVar12 + 3) >> 6)) * 2;
      iVar8 = *(char *)((int)puVar12 + 7) * 0x100;
      iVar11 = (int)(((uint)*(ushort *)(&DAT_083123b8 + iVar4) + iVar3) * 0x10000) >> 0x10;
      iVar4 = (int)(((uint)*(ushort *)(&DAT_083123d0 + iVar4) + iVar8) * 0x10000) >> 0x10;
      uVar10 = ((*(short *)(&DAT_03002ede + iVar2) * iVar11 +
                 iVar4 * *(short *)(&DAT_03002eee + iVar2) >> 8) + (iVar8 - iVar4) * 2 + piVar13[1])
               - *(int *)(param_2 + 0xc) >> 8;
      if ((uVar10 + 0x40 < 0xe0) &&
         (uVar9 = ((*(short *)(&DAT_03002ed6 + iVar2) * iVar11 +
                    iVar4 * *(short *)(&DAT_03002ee6 + iVar2) >> 8) + (iVar3 - iVar11) * 2 +
                  *piVar13) - *(int *)(param_2 + 8) >> 8, uVar9 + 0x80 < 0x170)) {
        uVar5 = *(uint *)(param_1 + 0x10);
        *DAT_030032d0 = uVar5;
        *DAT_030032d0 = uVar5 | *puVar12 | uVar10 & 0xff | (uVar9 & 0x1ff) << 0x10;
        sVar1 = *(short *)(param_1 + 0x14);
        *(short *)(DAT_030032d0 + 1) = sVar1;
        *(short *)(DAT_030032d0 + 1) = sVar1 + *(short *)(puVar12 + 1);
        DAT_030032d0 = DAT_030032d0 + 2;
      }
      puVar12 = puVar12 + 2;
      uVar7 = uVar7 - 1 & 0xff;
    } while (uVar7 != 0);
  }
  return in_lr;
}

