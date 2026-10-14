// sub_08053EF8 at 0x08053EF8 (thumb)

undefined4 sub_08053EF8(int param_1)

{
  bool bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x57);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    uVar5 = (uint)bVar1;
    sub_08055058(param_1,4,uVar5);
    sub_0801CF00(param_1,0x2c00);
    *(bool *)(param_1 + 0x13) = bVar1;
    *(uint *)(param_1 + 0xcc) = *(int *)(param_1 + 0xc0) + (uVar5 * 2 + -1) * 0x7800;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08054FBC(param_1);
  iVar3 = sub_08055074(param_1,*(undefined4 *)(param_1 + 0xcc));
  iVar7 = *(int *)(param_1 + 100);
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar4 = FUN_081288bc(iVar6,-iVar7);
  iVar4 = *(int *)(param_1 + 0x54) + ((iVar6 * 2 + -iVar7 * (-iVar4 + 1)) * -iVar4 >> 1);
  if (((iVar4 - *(int *)(DAT_0202dbf0 + 0x54)) - 0x1e00U < 0x6001) &&
     ((*(int *)(param_1 + 0x58) - *(int *)(DAT_0202dbf0 + 0x58)) + 0x603eU < 0x6001)) {
    uVar2 = 3;
  }
  else {
    if ((0x6000 < (iVar4 - *(int *)(DAT_0202dbf0 + 0x54)) + 0x7e00U) ||
       (0x6000 < (*(int *)(param_1 + 0x58) - *(int *)(DAT_0202dbf0 + 0x58)) + 0x603eU)) {
      if ((bool)*(char *)(param_1 + 0x13) !=
          *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
        *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 4;
      }
      if (iVar3 != 0) {
        return in_lr;
      }
      sub_08054FFC(param_1);
      return in_lr;
    }
    uVar2 = 4;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

