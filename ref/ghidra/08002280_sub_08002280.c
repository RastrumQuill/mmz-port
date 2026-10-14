// sub_08002280 at 0x08002280 (thumb)

undefined4 sub_08002280(int param_1,int param_2)

{
  ushort uVar1;
  short **ppsVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  int *piVar6;
  uint uVar7;
  undefined4 in_lr;
  
  ppsVar2 = (short **)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x1a) * 8);
  psVar5 = *ppsVar2;
  if ((uint)*(byte *)(ppsVar2 + 1) <= (uint)((int)&DAT_03001fb0 - (int)DAT_03001fb0) >> 3) {
    piVar6 = *(int **)(param_1 + 0xc);
    while( true ) {
      uVar7 = ((((piVar6[1] - (int)psVar5[1]) +
                *(short *)(&DAT_08290c00 +
                          ((uint)*(byte *)(psVar5 + 2) << 2 | (uint)*(byte *)((int)psVar5 + 5)) * 2)
                * -2) - *(int *)(param_2 + 0xc) >> 8) + 1) * 0x10000 >> 0x10;
      if ((uVar7 + 0x40 < 0xe0) &&
         (uVar4 = (((int)*psVar5 + *piVar6) - *(int *)(param_2 + 8)) * 0x100 >> 0x10,
         uVar4 + 0x80 < 0x170)) {
        uVar3 = *(uint *)(param_1 + 0x10);
        *DAT_03001fb0 = uVar3;
        *DAT_03001fb0 =
             uVar3 | uVar7 & 0xff | (uint)*(byte *)(psVar5 + 2) << 0xe | (uVar4 & 0x1ff) << 0x10 |
                     (uint)*(byte *)(psVar5 + 4) << 0x1c | (*(byte *)((int)psVar5 + 9) ^ 1) << 0x1d
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

