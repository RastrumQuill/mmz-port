// sub_080BBAF4 at 0x080BBAF4 (thumb)

undefined4 sub_080BBAF4(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  local_18[0] = 0xb601;
  local_18[1] = 0xb603;
  bVar2 = *(byte *)(param_1 + 0x10);
  uVar4 = (uint)*(byte *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x194);
    sub_08005784(param_1 + 0x74,&DAT_08861150);
    sub_0801CF00(param_1,*(undefined2 *)(local_18 + bVar2));
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    uVar4 = (uint)bVar1;
    *(uint *)(param_1 + 0x5c) = (uVar4 * 2 + -1) * 0x380;
    *(bool *)(param_1 + 0x12) = bVar1;
    *(undefined *)(param_1 + 0x13) = 1;
    *(undefined4 *)(param_1 + 0x68) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(int *)(param_1 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if (-1 < (int)((iVar3 - *(int *)(DAT_0202dbf0 + 0x54)) * (uVar4 * 2 + -1))) {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    if (*(char *)(param_1 + 0x13) != '\0') {
      return in_lr;
    }
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

