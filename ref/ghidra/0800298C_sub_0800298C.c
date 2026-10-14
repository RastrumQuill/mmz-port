// sub_0800298C at 0x0800298C (thumb)

undefined4 sub_0800298C(int param_1,int param_2)

{
  ushort uVar1;
  short **ppsVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  undefined4 in_lr;
  
  ppsVar2 = (short **)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x1a) * 8);
  psVar9 = *ppsVar2;
  if ((uint)*(byte *)(ppsVar2 + 1) <= (uint)((int)&DAT_03001fb0 - (int)DAT_03001fb0) >> 3) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfc;
    while( true ) {
      iVar3 = ((uint)*(byte *)(psVar9 + 2) << 2 | (uint)*(byte *)((int)psVar9 + 5)) * 2;
      iVar5 = (int)(((uint)(ushort)psVar9[1] + (uint)*(ushort *)(&DAT_08290c00 + iVar3)) * 0x10000)
              >> 0x10;
      iVar6 = iVar5;
      if (*(char *)(param_1 + 0x19) == '\0') {
        iVar6 = -iVar5;
      }
      uVar7 = (iVar6 + (psVar9[1] - iVar5) + (*(int **)(param_1 + 0xc))[1]) -
              *(int *)(param_2 + 0xc) >> 8;
      if (uVar7 + 0x40 < 0xe0) {
        iVar3 = (int)(short)(*psVar9 + *(short *)(&DAT_08290be8 + iVar3));
        iVar6 = iVar3;
        if (*(char *)(param_1 + 0x18) == '\0') {
          iVar6 = -iVar3;
        }
        uVar8 = (iVar6 + (*psVar9 - iVar3) + **(int **)(param_1 + 0xc)) - *(int *)(param_2 + 8) >> 8
        ;
        if (uVar8 + 0x80 < 0x170) {
          uVar4 = *(uint *)(param_1 + 0x10) & 0xcfffffff;
          *DAT_03001fb0 = uVar4;
          *DAT_03001fb0 =
               uVar4 | uVar7 & 0xff | (uint)*(byte *)(psVar9 + 2) << 0xe | (uVar8 & 0x1ff) << 0x10 |
                       ((*(byte *)(param_1 + 0x18) ^ *(byte *)(psVar9 + 4)) ^ 1) << 0x1c |
                       ((*(byte *)(param_1 + 0x19) ^ *(byte *)((int)psVar9 + 9)) ^ 1) << 0x1d |
                       (uint)*(byte *)((int)psVar9 + 5) << 0x1e;
          uVar1 = *(ushort *)(param_1 + 0x14);
          *(ushort *)(DAT_03001fb0 + 1) = uVar1;
          *(ushort *)(DAT_03001fb0 + 1) = psVar9[3] + *(short *)(param_1 + 0x16) | uVar1;
          DAT_03001fb0 = DAT_03001fb0 + 2;
        }
      }
      if (*(char *)(psVar9 + 5) == '\x01') break;
      psVar9 = psVar9 + 6;
    }
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 3;
  }
  return in_lr;
}

