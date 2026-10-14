// sub_08076238 at 0x08076238 (thumb)

undefined4 sub_08076238(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CE54();
    sub_0801CEEC(param_1);
    sub_0801CF00(param_1,0xaf0f);
    if (*(int *)(param_1 + 0xcc) < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2700;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined2 *)(param_1 + 0xd6) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08005784(param_1 + 0x74,&DAT_08859ac0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar3 = *(int *)(param_1 + 0xd0);
  iVar1 = sub_08128A9C(iVar3,6);
  *(int *)(param_1 + 0xd0) = iVar3 + 1;
  pbVar4 = (byte *)(param_1 + 0x24);
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = (*pbVar4 + 0x20) * 0x1000000;
      local_18 = *(int *)(param_1 + 0x54) +
                 *(short *)((int)&DAT_08128c10 + (uVar2 + 0x40000000 >> 0x17)) * 0x14;
      local_14 = *(int *)(param_1 + 0x58) + *(short *)((int)&DAT_08128c10 + (uVar2 >> 0x17)) * 0x14;
      sub_080CBB38(&local_18,2,*pbVar4 + 0x30,0);
      uVar2 = (*pbVar4 + 0xa0) * 0x1000000;
      local_18 = *(int *)(param_1 + 0x54) +
                 *(short *)((int)&DAT_08128c10 + (uVar2 + 0x40000000 >> 0x17)) * 0x14;
      local_14 = *(int *)(param_1 + 0x58) + *(short *)((int)&DAT_08128c10 + (uVar2 >> 0x17)) * 0x14;
      sub_080CBB38(&local_18,2,*pbVar4 + 0xb0,1);
    }
    else {
      uVar2 = (0x60 - (uint)*pbVar4) * 0x1000000;
      local_18 = *(int *)(param_1 + 0x54) +
                 *(short *)((int)&DAT_08128c10 + (uVar2 + 0x40000000 >> 0x17)) * 0x14;
      local_14 = *(int *)(param_1 + 0x58) + *(short *)((int)&DAT_08128c10 + (uVar2 >> 0x17)) * 0x14;
      sub_080CBB38(&local_18,2,'P' - *pbVar4,0);
      uVar2 = (0xe0 - (uint)*pbVar4) * 0x1000000;
      local_18 = *(int *)(param_1 + 0x54) +
                 *(short *)((int)&DAT_08128c10 + (uVar2 + 0x40000000 >> 0x17)) * 0x14;
      local_14 = *(int *)(param_1 + 0x58) + *(short *)((int)&DAT_08128c10 + (uVar2 >> 0x17)) * 0x14;
      sub_080CBB38(&local_18,2,-0x30 - *pbVar4,1);
    }
  }
  iVar1 = *(int *)(param_1 + 100) + 8;
  *(int *)(param_1 + 100) = iVar1;
  if (0x180 < iVar1) {
    *(undefined4 *)(param_1 + 100) = 0x180;
  }
  iVar1 = (uint)*(ushort *)(param_1 + 0xd6) + *(int *)(param_1 + 100);
  *(short *)(param_1 + 0xd6) = (short)iVar1;
  *pbVar4 = (byte)((uint)iVar1 >> 8);
  if (0x1000 < *(ushort *)(param_1 + 0xd6)) {
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

