// sub_08007D40 at 0x08007D40 (thumb)

undefined4 sub_08007D40(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar9 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_2 + 8);
  if ((*(uint *)(iVar9 + 0x18) & 0x100) != 0) {
    if (**(int **)(iVar9 + 8) + *(short *)(iVar9 + 0x34) * 0x100 <
        (int)(*(int *)(param_2 + 0xc) - (uint)*(ushort *)(param_2 + 0x14))) {
      return in_lr;
    }
    if ((int)(*(int *)(param_2 + 0xc) + (uint)*(ushort *)(param_2 + 0x14)) <
        **(int **)(iVar9 + 8) + *(short *)(iVar9 + 0x32) * 0x100) {
      return in_lr;
    }
  }
  *(undefined4 *)(iVar9 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_2 + 4);
  pbVar5 = (byte *)(iVar9 + 0x36);
  if ((*pbVar5 & 1) == 0) {
    *(undefined *)(iVar9 + 0x37) = *(undefined *)(*(int *)(param_1 + 4) + 3);
  }
  if ((*pbVar5 & 2) == 0) {
    *(undefined *)(iVar9 + 0x38) = *(undefined *)(*(int *)(param_1 + 4) + 5);
  }
  if ((*pbVar5 & 4) == 0) {
    *(undefined *)(iVar9 + 0x39) = *(undefined *)(*(int *)(param_1 + 4) + 6);
  }
  if ((*pbVar5 & 8) == 0) {
    *(undefined *)(iVar9 + 0x3a) = *(undefined *)(*(int *)(param_1 + 4) + 7);
  }
  if ((*pbVar5 & 6) == 0) {
    *(undefined4 *)(iVar9 + 0x3c) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
    goto LAB_08007e86;
  }
  iVar6 = *(int *)(param_1 + 4);
  bVar1 = *(byte *)(iVar6 + 4);
  if (bVar1 < 4) {
    if ((*(byte *)(iVar9 + 0x39) & 1) != 0) {
      iVar6 = -0x80000000;
      goto LAB_08007e84;
    }
    iVar6 = (uint)*(byte *)(iVar6 + 4) * 5;
    if ((*(byte *)(iVar9 + 0x39) & 2) == 0) {
      uVar4 = iVar6 + (uint)*(byte *)(iVar9 + 0x38);
    }
    else {
      uVar4 = iVar6 + *(byte *)(iVar9 + 0x38) + 1;
    }
LAB_08007e74:
    iVar6 = 1 << (uVar4 & 0xff);
  }
  else {
    if (bVar1 < 9) {
      uVar4 = *(byte *)(iVar6 + 4) + 0x10;
      goto LAB_08007e74;
    }
    if (bVar1 < 0xc) {
      uVar4 = (uint)*(byte *)(iVar6 + 4);
      if ((uint)*(byte *)(iVar9 + 0x38) == uVar4 - 8) {
        uVar4 = uVar4 + 0x13;
        goto LAB_08007e74;
      }
      iVar6 = 1 << (uVar4 + 0x10 & 0xff);
    }
    else {
      iVar6 = 0x8000;
    }
  }
LAB_08007e84:
  *(int *)(iVar9 + 0x3c) = iVar6;
LAB_08007e86:
  sub_08007258(iVar9,iVar3);
  if (((*(int *)(iVar9 + 0x24) != 0) || (*(int *)(iVar3 + 0x24) != 0)) &&
     ((*(int *)(iVar9 + 0x14) != 0 || (*(int *)(iVar3 + 0x14) != 0)))) {
    iVar7 = *(int *)(param_2 + 0xc);
    local_30 = *(int *)(param_1 + 0xc) - iVar7;
    iVar8 = *(int *)(param_2 + 0x10);
    iVar6 = *(int *)(param_1 + 0x10) - iVar8;
    local_2c = iVar6;
    local_28 = sub_080EF150((uint)*(ushort *)(param_2 + 0x14) * local_30,
                            (uint)*(ushort *)(param_1 + 0x14) + (uint)*(ushort *)(param_2 + 0x14));
    local_28 = iVar7 + local_28;
    local_24 = sub_080EF150(iVar6 * (uint)*(ushort *)(param_2 + 0x16),
                            (uint)*(ushort *)(param_1 + 0x16) + (uint)*(ushort *)(param_2 + 0x16));
    local_24 = iVar8 + local_24;
    uVar2 = sub_080EEF7C(local_30 * local_30 + local_2c * local_2c);
    local_30 = sub_080EF150(local_30 << 8,uVar2);
    local_2c = sub_080EF150(local_2c << 8,uVar2);
    if ((*(int *)(iVar9 + 0x24) != 0) && (*(int *)(iVar9 + 0x14) != 0)) {
      sub_080EF120(iVar9,&local_28,&local_30);
    }
    if ((*(int *)(iVar3 + 0x24) != 0) && (*(int *)(iVar3 + 0x14) != 0)) {
      local_30 = -local_30;
      local_2c = -local_2c;
      sub_080EF120(iVar3,&local_28,&local_30);
    }
  }
  return in_lr;
}

