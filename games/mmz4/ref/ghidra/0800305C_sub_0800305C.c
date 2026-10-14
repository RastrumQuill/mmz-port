// sub_0800305C at 0x0800305C (thumb)

undefined4 sub_0800305C(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_lr;
  int *local_38;
  uint *local_34;
  uint local_30;
  
  puVar4 = (ushort *)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x1a) * 4);
  local_38 = (int *)(*(int *)(param_1 + 8) + (uint)*puVar4);
  local_34 = DAT_030032d0;
  local_30 = (uint)*(byte *)(puVar4 + 1);
  if (local_30 <= (uint)((int)&DAT_030032d0 - (int)DAT_030032d0) >> 3) {
    if (local_30 != 0) {
      piVar2 = *(int **)(param_1 + 0xc);
      do {
        uVar5 = (uint)(*(byte *)(param_1 + 0x18) ^ *(byte *)(param_1 + 0x19));
        uVar8 = (uVar5 * 0xff ^ (uint)*(byte *)(param_1 + 0x1b)) + uVar5 & 0xff;
        iVar3 = *(char *)((int)local_38 + 2) * 0x100;
        iVar6 = (((uint)(*local_38 << 0x10) >> 0x1e) << 2 | (uint)(*local_38 << 0x12) >> 0x1e) * 2;
        uVar10 = iVar3 + *(short *)(&DAT_08827aa0 + iVar6);
        iVar9 = *(char *)((int)local_38 + 3) * 0x100;
        uVar5 = *(short *)(&DAT_08827ab8 + iVar6) + iVar9;
        uVar12 = (uint)*(byte *)(param_1 + 0x18);
        uVar7 = (uint)*(byte *)(param_1 + 0x19);
        iVar6 = (int)*(short *)((int)&DAT_08128c10 + ((uVar8 + 0x40) * 0x1000000 >> 0x17));
        uVar11 = (int)(((((int)((int)(short)(&DAT_08128c10)[uVar8] *
                                (((int)(uVar12 << 0x1f) >> 0x1f ^ uVar10) + uVar12) *
                               (uint)*(ushort *)(param_1 + 0x1c)) >> 8) +
                         ((int)(iVar6 * (((int)(uVar7 << 0x1f) >> 0x1f ^ uVar5) + uVar7) *
                               (uint)*(ushort *)(param_1 + 0x1e)) >> 8) >> 8) + (iVar9 - uVar5) +
                       piVar2[1]) - *(int *)(param_2 + 0xc)) >> 8;
        if ((uVar11 + 0x40 < 0xe0) &&
           (uVar5 = (int)(((((int)(iVar6 * (((int)(uVar12 << 0x1f) >> 0x1f ^ uVar10) + uVar12) *
                                  (uint)*(ushort *)(param_1 + 0x1c)) >> 8) +
                            ((int)(-(int)(short)(&DAT_08128c10)[uVar8] *
                                   (((int)(uVar7 << 0x1f) >> 0x1f ^ uVar5) + uVar7) *
                                  (uint)*(ushort *)(param_1 + 0x1e)) >> 8) >> 8) + (iVar3 - uVar10)
                          + *piVar2) - *(int *)(param_2 + 8)) >> 8, uVar5 + 0x80 < 0x170)) {
          *local_34 = *(uint *)(param_1 + 0x10) |
                      (*(ushort *)local_38 & 0x3c00) << 0x12 | *(ushort *)local_38 & 0xc000 |
                      uVar11 & 0xff | (uVar5 & 0x1ff) << 0x10;
          sVar1 = *(short *)(param_1 + 0x14);
          *(short *)(local_34 + 1) = sVar1;
          *(ushort *)(local_34 + 1) = sVar1 + (*(ushort *)local_38 & 0x3ff);
          local_34 = local_34 + 2;
        }
        local_38 = local_38 + 1;
        local_30 = local_30 - 1 & 0xff;
      } while (local_30 != 0);
    }
    DAT_030032d0 = local_34;
  }
  return in_lr;
}

