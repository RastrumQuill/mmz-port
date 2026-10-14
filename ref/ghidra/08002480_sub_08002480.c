// sub_08002480 at 0x08002480 (thumb)

undefined4 sub_08002480(int param_1,int param_2)

{
  ushort uVar1;
  short **ppsVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 in_lr;
  
  ppsVar2 = (short **)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x1a) * 8);
  psVar5 = *ppsVar2;
  if ((uint)*(byte *)(ppsVar2 + 1) <= (uint)((int)&DAT_03001fb0 - (int)DAT_03001fb0) >> 3) {
    piVar7 = *(int **)(param_1 + 0xc);
    while( true ) {
      iVar3 = ((uint)*(byte *)(psVar5 + 2) << 2 | (uint)*(byte *)((int)psVar5 + 5)) * 2;
      uVar8 = ((((piVar7[1] - (int)psVar5[1]) + *(short *)(&DAT_08290c00 + iVar3) * -2) -
                *(int *)(param_2 + 0xc) >> 8) + 1) * 0x10000 >> 0x10;
      if ((uVar8 + 0x40 < 0xe0) &&
         (uVar6 = ((((*piVar7 - (int)*psVar5) + *(short *)(&DAT_08290be8 + iVar3) * -2) -
                    *(int *)(param_2 + 8) >> 8) + 1) * 0x10000 >> 0x10, uVar6 + 0x80 < 0x170)) {
        uVar4 = *(uint *)(param_1 + 0x10);
        *DAT_03001fb0 = uVar4;
        *DAT_03001fb0 =
             uVar4 | uVar8 & 0xff | (uint)*(byte *)(psVar5 + 2) << 0xe | (uVar6 & 0x1ff) << 0x10 |
                     (*(byte *)(psVar5 + 4) ^ 1) << 0x1c | (*(byte *)((int)psVar5 + 9) ^ 1) << 0x1d
                     | (uint)*(byte *)((int)psVar5 + 5) << 0x1e;
        uVar1 = *(ushort *)(param_1 + 0x14);
        *(ushort *)(DAT_03001fb0 + 1) = uVar1;
        *(ushort *)(DAT_03001fb0 + 1) = psVar5[3] + *(short *)(param_1 + 0x16) | uVar1;
        DAT_03001fb0 = DAT_03001fb0 + 2;
      }
      if (*(char *)(psVar5 + 5) == '\x01') break;
      psVar5 = psVar5 + 6;
    }
  }
  return in_lr;
}

