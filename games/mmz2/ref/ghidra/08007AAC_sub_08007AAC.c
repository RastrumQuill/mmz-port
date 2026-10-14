// sub_08007AAC at 0x08007AAC (thumb)

undefined4 sub_08007AAC(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar8 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 8);
  if (((DAT_030032e0 & 0x80) == 0) && (*(char *)(*(int *)(param_1 + 4) + 2) != '\x04')) {
    pbVar5 = (byte *)(iVar8 + 0x39);
    if ((*(byte *)(iVar8 + 0x36) & 4) == 0) {
      *pbVar5 = *(byte *)(*(int *)(param_1 + 4) + 6);
    }
    uVar3 = *pbVar5 & 0x80;
    if ((*pbVar5 & 0x80) == 0) {
      *(uint *)(iVar8 + 0x14) = uVar3;
      *(uint *)(iVar2 + 0x14) = uVar3;
      *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_2 + 4);
      if ((*(byte *)(iVar8 + 0x36) & 4) == 0) {
        *pbVar5 = *(byte *)(*(int *)(param_1 + 4) + 6);
      }
      if ((*(uint *)(iVar8 + 0x18) & 0x100) == 0) {
        *(undefined2 *)(iVar8 + 0x32) = 0x8000;
        *(undefined2 *)(iVar8 + 0x34) = 0x7fff;
      }
      iVar4 = **(int **)(iVar8 + 8);
      if (iVar4 < **(int **)(iVar2 + 8)) {
        *(short *)(iVar8 + 0x34) =
             (short)((*(int *)(param_2 + 0xc) - (uint)*(ushort *)(param_2 + 0x14)) - iVar4 >> 8);
      }
      else {
        *(short *)(iVar8 + 0x32) =
             (short)((*(int *)(param_2 + 0xc) + (uint)*(ushort *)(param_2 + 0x14)) - iVar4 >> 8);
      }
      iVar4 = *(int *)(iVar8 + 4);
      if (((*(char *)(iVar4 + 2) == '\x01') && (*(char *)(iVar4 + 4) != '\0')) &&
         ((*(uint *)(iVar2 + 0x1c) & 0xc0) != 0)) {
        *(int *)(iVar2 + 0xc) = iVar8;
        *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 0x80;
      }
      else {
        if ((*(byte *)(*(int *)(iVar2 + 4) + 9) & 1) != 0) {
          *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0x2000;
        }
        *(int *)(iVar2 + 0xc) = iVar8;
        *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0x40;
        if ((byte)(*(char *)(iVar4 + 4) - 1U) < 2) {
          DAT_030032e2 = 4;
        }
      }
      *(int *)(iVar8 + 0xc) = iVar2;
      uVar3 = *(uint *)(iVar8 + 0x14);
      *(uint *)(iVar8 + 0x14) = uVar3 | 0x120;
      iVar4 = *(int *)(iVar2 + 4);
      if ((*(byte *)(iVar4 + 9) & 1) != 0) {
        *(uint *)(iVar8 + 0x14) = uVar3 | 0x1120;
      }
      if ((((*pbVar5 & 0x20) != 0) && ((*(uint *)(iVar8 + 0x18) & 0x380000) == 0)) &&
         (*(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0x40000,
         (*(byte *)(iVar4 + 9) & 8) != 0)) {
        uVar3 = *(uint *)(iVar8 + 0x14);
        *(uint *)(iVar8 + 0x14) = uVar3 | 0x80000;
        if (((*(byte *)(iVar4 + 9) & 8) != 0) &&
           (*(uint *)(iVar8 + 0x14) = uVar3 | 0x180000, (*(byte *)(iVar4 + 9) & 8) != 0)) {
          *(uint *)(iVar8 + 0x14) = uVar3 | 0x380000;
        }
      }
      *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) | *(uint *)(iVar8 + 0x14);
      *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | *(uint *)(iVar2 + 0x14);
      if (((*(int *)(iVar8 + 0x24) != 0) || (*(int *)(iVar2 + 0x24) != 0)) &&
         ((*(int *)(iVar8 + 0x14) != 0 || (*(uint *)(iVar2 + 0x14) != 0)))) {
        iVar6 = *(int *)(param_2 + 0xc);
        local_30 = *(int *)(param_1 + 0xc) - iVar6;
        iVar7 = *(int *)(param_2 + 0x10);
        iVar4 = *(int *)(param_1 + 0x10) - iVar7;
        local_2c = iVar4;
        local_28 = sub_080EF150((uint)*(ushort *)(param_2 + 0x14) * local_30,
                                (uint)*(ushort *)(param_1 + 0x14) +
                                (uint)*(ushort *)(param_2 + 0x14));
        local_28 = iVar6 + local_28;
        local_24 = sub_080EF150(iVar4 * (uint)*(ushort *)(param_2 + 0x16),
                                (uint)*(ushort *)(param_1 + 0x16) +
                                (uint)*(ushort *)(param_2 + 0x16));
        local_24 = iVar7 + local_24;
        uVar1 = sub_080EEF7C(local_30 * local_30 + local_2c * local_2c);
        local_30 = sub_080EF150(local_30 << 8,uVar1);
        local_2c = sub_080EF150(local_2c << 8,uVar1);
        if ((*(int *)(iVar8 + 0x24) != 0) && (*(int *)(iVar8 + 0x14) != 0)) {
          sub_080EF120(iVar8,&local_28,&local_30);
        }
        if ((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(iVar2 + 0x14) != 0)) {
          local_30 = -local_30;
          local_2c = -local_2c;
          sub_080EF120(iVar2,&local_28,&local_30);
        }
      }
    }
  }
  return in_lr;
}

