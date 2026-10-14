// sub_08003BF8 at 0x08003BF8 (thumb)

undefined4 sub_08003BF8(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 in_lr;
  uint *local_38;
  uint local_34;
  
  puVar5 = (ushort *)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x1a) * 4);
  puVar9 = (uint *)(*(int *)(param_1 + 8) + (uint)*puVar5);
  local_38 = DAT_030032d0;
  local_34 = (uint)*(byte *)(puVar5 + 1);
  if (local_34 <= (uint)((int)&DAT_030032d0 - (int)DAT_030032d0) >> 3) {
    if (local_34 != 0) {
      piVar2 = *(int **)(param_1 + 0xc);
      do {
        uVar6 = (uint)(*(byte *)(param_1 + 0x18) ^ *(byte *)(param_1 + 0x19));
        uVar10 = (uVar6 * 0xff ^ (uint)*(byte *)(param_1 + 0x1b)) + uVar6 & 0xff;
        iVar3 = *(char *)((int)puVar9 + 6) * 0x100;
        iVar7 = ((uint)(*(byte *)((int)puVar9 + 1) >> 6) << 2 |
                (uint)(*(byte *)((int)puVar9 + 3) >> 6)) * 2;
        uVar6 = iVar3 + *(short *)(&DAT_083123b8 + iVar7);
        iVar11 = *(char *)((int)puVar9 + 7) * 0x100;
        uVar4 = *(short *)(&DAT_083123d0 + iVar7) + iVar11;
        uVar13 = (uint)*(byte *)(param_1 + 0x18);
        uVar8 = (uint)*(byte *)(param_1 + 0x19);
        uVar12 = (int)(((((int)((uint)*(ushort *)(param_1 + 0x1c) *
                               (int)(short)(&DAT_080ef450)[uVar10] *
                               (((int)(uVar13 << 0x1f) >> 0x1f ^ uVar6) + uVar13)) >> 8) +
                         ((int)((((int)(uVar8 << 0x1f) >> 0x1f ^ uVar4) + uVar8) *
                                (int)(short)(&DAT_080ef450)[uVar10 + 0x40 & 0xff] *
                               (uint)*(ushort *)(param_1 + 0x1e)) >> 8) >> 8) + (iVar11 - uVar4) +
                       piVar2[1]) - *(int *)(param_2 + 0xc)) >> 8;
        if ((uVar12 + 0x40 < 0xe0) &&
           (uVar6 = (int)(((((int)((uint)*(ushort *)(param_1 + 0x1c) *
                                  (((int)(uVar13 << 0x1f) >> 0x1f ^ uVar6) + uVar13) *
                                  (int)(short)(&DAT_080ef450)[uVar10 + 0x40 & 0xff]) >> 8) +
                            ((int)(-(int)(short)(&DAT_080ef450)[uVar10] *
                                   (((int)(uVar8 << 0x1f) >> 0x1f ^ uVar4) + uVar8) *
                                  (uint)*(ushort *)(param_1 + 0x1e)) >> 8) >> 8) + (iVar3 - uVar6) +
                          *piVar2) - *(int *)(param_2 + 8)) >> 8, uVar6 + 0x80 < 0x170)) {
          uVar4 = *(uint *)(param_1 + 0x10);
          *local_38 = uVar4;
          *local_38 = uVar4 | *puVar9 | uVar12 & 0xff | (uVar6 & 0x1ff) << 0x10;
          sVar1 = *(short *)(param_1 + 0x14);
          *(short *)(local_38 + 1) = sVar1;
          *(short *)(local_38 + 1) = sVar1 + *(short *)(puVar9 + 1);
          local_38 = local_38 + 2;
        }
        puVar9 = puVar9 + 2;
        local_34 = local_34 - 1 & 0xff;
      } while (local_34 != 0);
    }
    DAT_030032d0 = local_38;
  }
  return in_lr;
}

