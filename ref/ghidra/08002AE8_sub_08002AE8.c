// sub_08002AE8 at 0x08002AE8 (thumb)

undefined4 sub_08002AE8(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ushort **ppuVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  undefined4 in_lr;
  
  ppuVar3 = (ushort **)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x1a) * 8);
  puVar9 = *ppuVar3;
  if ((uint)*(byte *)(ppuVar3 + 1) <= (uint)((int)&DAT_03001fb0 - (int)DAT_03001fb0) >> 3) {
    while( true ) {
      iVar2 = ((uint)*(byte *)(puVar9 + 2) << 2 | (uint)*(byte *)((int)puVar9 + 5)) * 2;
      iVar6 = (int)(((uint)*puVar9 + (uint)*(ushort *)(&DAT_08290be8 + iVar2)) * 0x10000) >> 0x10;
      iVar7 = iVar6;
      if (*(char *)(param_1 + 0x18) == '\0') {
        iVar7 = -iVar6;
      }
      iVar2 = (int)(short)(puVar9[1] + *(short *)(&DAT_08290c00 + iVar2));
      uVar8 = (iVar7 + ((short)puVar9[1] - iVar2) * 2 + (*(int **)(param_1 + 0xc))[1]) -
              *(int *)(param_2 + 0xc) >> 8;
      if (uVar8 + 0x40 < 0xe0) {
        if (*(char *)(param_1 + 0x19) != '\0') {
          iVar2 = -iVar2;
        }
        uVar5 = (iVar2 + ((short)*puVar9 - iVar6) * 2 + **(int **)(param_1 + 0xc)) -
                *(int *)(param_2 + 8) >> 8;
        if (uVar5 + 0x80 < 0x170) {
          uVar4 = *(uint *)(param_1 + 0x10);
          *DAT_03001fb0 = uVar4;
          *DAT_03001fb0 =
               uVar4 | uVar8 & 0xff | (uint)*(byte *)(puVar9 + 2) << 0xe | (uVar5 & 0x1ff) << 0x10 |
                       (uint)*(byte *)((int)puVar9 + 5) << 0x1e;
          uVar1 = *(ushort *)(param_1 + 0x14);
          *(ushort *)(DAT_03001fb0 + 1) = uVar1;
          *(ushort *)(DAT_03001fb0 + 1) = puVar9[3] + *(short *)(param_1 + 0x16) | uVar1;
          DAT_03001fb0 = DAT_03001fb0 + 2;
        }
      }
      if (*(char *)(puVar9 + 5) == '\x01') break;
      puVar9 = puVar9 + 6;
    }
  }
  return in_lr;
}

