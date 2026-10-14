// sub_08002F74 at 0x08002F74 (thumb)

undefined4 sub_08002F74(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ushort **ppuVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int *piVar9;
  undefined4 in_lr;
  
  ppuVar3 = (ushort **)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x1a) * 8);
  puVar8 = *ppuVar3;
  if ((uint)*(byte *)(ppuVar3 + 1) <= (uint)((int)&DAT_03001fb0 - (int)DAT_03001fb0) >> 3) {
    piVar9 = *(int **)(param_1 + 0xc);
    while( true ) {
      iVar2 = ((uint)*(byte *)(puVar8 + 2) << 2 | (uint)*(byte *)((int)puVar8 + 5)) * 2;
      iVar4 = (int)(((uint)*puVar8 + (uint)*(ushort *)(&DAT_08290be8 + iVar2)) * 0x10000) >> 0x10;
      iVar2 = (int)(((uint)puVar8[1] + (uint)*(ushort *)(&DAT_08290c00 + iVar2)) * 0x10000) >> 0x10;
      uVar7 = ((((int)((short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x1b)] * iVar4 *
                       (int)(char)(&DAT_08290c18)[*(byte *)(param_1 + 0x18)] *
                      (uint)*(ushort *)(param_1 + 0x1c)) >> 8) +
                ((int)((uint)*(ushort *)(param_1 + 0x1e) *
                      (int)(char)(&DAT_08290c18)[*(byte *)(param_1 + 0x19)] *
                      (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x1b) + 0x40] * iVar2) >> 8) >> 8)
               + ((short)puVar8[1] - iVar2) + piVar9[1]) - *(int *)(param_2 + 0xc) >> 8;
      if ((uVar7 + 0x40 < 0xe0) &&
         (uVar6 = ((((int)((short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x1b) + 0x40] * iVar4 *
                           (int)(char)(&DAT_08290c18)[*(byte *)(param_1 + 0x18)] *
                          (uint)*(ushort *)(param_1 + 0x1c)) >> 8) +
                    ((int)((uint)*(ushort *)(param_1 + 0x1e) *
                          (int)(char)(&DAT_08290c18)[*(byte *)(param_1 + 0x19)] *
                          iVar2 * -(int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x1b)]) >> 8) >>
                   8) + ((short)*puVar8 - iVar4) + *piVar9) - *(int *)(param_2 + 8) >> 8,
         uVar6 + 0x80 < 0x170)) {
        uVar5 = *(uint *)(param_1 + 0x10);
        *DAT_03001fb0 = uVar5;
        *DAT_03001fb0 =
             uVar5 | uVar7 & 0xff | (uint)*(byte *)(puVar8 + 2) << 0xe | (uVar6 & 0x1ff) << 0x10 |
                     (uint)*(byte *)((int)puVar8 + 5) << 0x1e;
        uVar1 = *(ushort *)(param_1 + 0x14);
        *(ushort *)(DAT_03001fb0 + 1) = uVar1;
        *(ushort *)(DAT_03001fb0 + 1) = puVar8[3] + *(short *)(param_1 + 0x16) | uVar1;
        DAT_03001fb0 = DAT_03001fb0 + 2;
      }
      if (*(char *)(puVar8 + 5) == '\x01') break;
      puVar8 = puVar8 + 6;
    }
  }
  return in_lr;
}

