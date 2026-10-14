// sub_080025D4 at 0x080025D4 (thumb)

undefined4 sub_080025D4(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort **ppuVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  undefined4 in_lr;
  
  ppuVar7 = (ushort **)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x1a) * 8);
  puVar10 = *ppuVar7;
  iVar2 = (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20;
  if ((uint)*(byte *)(ppuVar7 + 1) <= (uint)((int)&DAT_03001fb0 - (int)DAT_03001fb0) >> 3) {
    piVar3 = *(int **)(param_1 + 0xc);
    while( true ) {
      iVar4 = ((uint)*(byte *)(puVar10 + 2) << 2 | (uint)*(byte *)((int)puVar10 + 5)) * 2;
      iVar5 = (int)(((uint)*puVar10 + (uint)*(ushort *)(&DAT_08290be8 + iVar4)) * 0x10000) >> 0x10;
      iVar4 = (int)(((uint)puVar10[1] + (uint)*(ushort *)(&DAT_08290c00 + iVar4)) * 0x10000) >> 0x10
      ;
      uVar9 = ((*(short *)(&DAT_03001bbe + iVar2) * iVar5 +
                iVar4 * *(short *)(&DAT_03001bce + iVar2) >> 8) + ((short)puVar10[1] - iVar4) * 2 +
              piVar3[1]) - *(int *)(param_2 + 0xc) >> 8;
      if ((uVar9 + 0x40 < 0xe0) &&
         (uVar8 = ((*(short *)(&DAT_03001bb6 + iVar2) * iVar5 +
                    iVar4 * *(short *)(&DAT_03001bc6 + iVar2) >> 8) + ((short)*puVar10 - iVar5) * 2
                  + *piVar3) - *(int *)(param_2 + 8) >> 8, uVar8 + 0x80 < 0x170)) {
        uVar6 = *(uint *)(param_1 + 0x10);
        *DAT_03001fb0 = uVar6;
        *DAT_03001fb0 =
             uVar6 | uVar9 & 0xff | (uint)*(byte *)(puVar10 + 2) << 0xe | (uVar8 & 0x1ff) << 0x10 |
                     (uint)*(byte *)((int)puVar10 + 5) << 0x1e;
        uVar1 = *(ushort *)(param_1 + 0x14);
        *(ushort *)(DAT_03001fb0 + 1) = uVar1;
        *(ushort *)(DAT_03001fb0 + 1) = puVar10[3] + *(short *)(param_1 + 0x16) | uVar1;
        DAT_03001fb0 = DAT_03001fb0 + 2;
      }
      if (*(char *)(puVar10 + 5) == '\x01') break;
      puVar10 = puVar10 + 6;
    }
  }
  return in_lr;
}

