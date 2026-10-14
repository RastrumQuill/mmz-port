// sub_08008210 at 0x08008210 (thumb)

undefined4 sub_08008210(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
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
  iVar4 = *(int *)(param_2 + 8);
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
  *(undefined4 *)(iVar4 + 0x14) = 0;
  *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_2 + 4);
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
    goto LAB_0800839c;
  }
  iVar6 = *(int *)(param_1 + 4);
  bVar2 = *(byte *)(iVar6 + 4);
  if (bVar2 < 4) {
    if ((*(byte *)(iVar9 + 0x39) & 1) == 0) {
      cVar1 = *(char *)(iVar6 + 4) * '\x05';
      if ((*(byte *)(iVar9 + 0x39) & 2) == 0) {
        bVar2 = cVar1 + *(char *)(iVar9 + 0x38);
      }
      else {
        bVar2 = cVar1 + *(char *)(iVar9 + 0x38) + '\x01';
      }
      goto LAB_0800833e;
    }
    iVar6 = -0x80000000;
  }
  else if (bVar2 == 4) {
    iVar6 = 0x10000;
  }
  else if (bVar2 < 8) {
    bVar2 = *(char *)(iVar6 + 4) - 3;
LAB_0800833e:
    iVar6 = 1 << (uint)bVar2;
  }
  else if (bVar2 < 0xc) {
    if (*(char *)(iVar9 + 0x38) != '\0') {
      bVar2 = *(char *)(iVar9 + 0x38) + 6;
      goto LAB_0800833e;
    }
    iVar6 = 0x40;
  }
  else if (bVar2 == 0xc) {
    iVar6 = 0x100;
  }
  else if (bVar2 == 0xd) {
    iVar6 = 0x200000;
    if (*(char *)(iVar9 + 0x38) == '\x02') {
      iVar6 = 0x400000;
    }
  }
  else if (bVar2 == 0xe) {
    iVar6 = 0x10000;
    if (*(char *)(iVar9 + 0x38) == '\x01') {
      iVar6 = 0x20000;
    }
  }
  else {
    iVar6 = 0x10000;
    if (*(char *)(iVar9 + 0x38) == '\x03') {
      iVar6 = 0x40000;
    }
  }
  *(int *)(iVar9 + 0x3c) = iVar6;
LAB_0800839c:
  sub_080077F0(iVar9,iVar4);
  if (((*(int *)(iVar9 + 0x24) != 0) || (*(int *)(iVar4 + 0x24) != 0)) &&
     ((*(int *)(iVar9 + 0x14) != 0 || (*(int *)(iVar4 + 0x14) != 0)))) {
    iVar7 = *(int *)(param_2 + 0xc);
    local_30 = *(int *)(param_1 + 0xc) - iVar7;
    iVar8 = *(int *)(param_2 + 0x10);
    iVar6 = *(int *)(param_1 + 0x10) - iVar8;
    local_2c = iVar6;
    local_28 = FUN_080fe2f8((uint)*(ushort *)(param_2 + 0x14) * local_30,
                            (uint)*(ushort *)(param_1 + 0x14) + (uint)*(ushort *)(param_2 + 0x14));
    local_28 = iVar7 + local_28;
    local_24 = FUN_080fe2f8(iVar6 * (uint)*(ushort *)(param_2 + 0x16),
                            (uint)*(ushort *)(param_1 + 0x16) + (uint)*(ushort *)(param_2 + 0x16));
    local_24 = iVar8 + local_24;
    uVar3 = sub_080FE124(local_30 * local_30 + local_2c * local_2c);
    local_30 = FUN_080fe2f8(local_30 << 8,uVar3);
    local_2c = FUN_080fe2f8(local_2c << 8,uVar3);
    if ((*(int *)(iVar9 + 0x24) != 0) && (*(int *)(iVar9 + 0x14) != 0)) {
      sub_080FE2C8(iVar9,&local_28,&local_30);
    }
    if ((*(int *)(iVar4 + 0x24) != 0) && (*(int *)(iVar4 + 0x14) != 0)) {
      local_30 = -local_30;
      local_2c = -local_2c;
      sub_080FE2C8(iVar4,&local_28,&local_30);
    }
  }
  return in_lr;
}

