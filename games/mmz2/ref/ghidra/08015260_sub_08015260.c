// sub_08015260 at 0x08015260 (thumb)

undefined4 sub_08015260(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined *)(param_1 + 0x1c) = 1;
  }
  iVar2 = **(int **)(param_1 + 0x48);
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar4 = (*(int **)(param_1 + 0x48))[1];
  iVar5 = *(int *)(param_1 + 0x54);
  local_24 = *(int *)(param_1 + 0x30);
  local_20 = *(int *)(param_1 + 0x34);
  cVar1 = sub_080083A0();
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x30) - (iVar2 + iVar3);
    if (0 < iVar2) {
      local_24 = local_24 - iVar2;
    }
    if (iVar2 < 0) {
      local_24 = local_24 - iVar2;
    }
    iVar2 = *(int *)(param_1 + 0x34) - (iVar4 + iVar5);
    if (-0x1000 < iVar2) {
      local_20 = (local_20 + -0x1000) - iVar2;
    }
    if (iVar2 < -0x1800) {
      local_20 = (local_20 + -0x1800) - iVar2;
    }
    sub_080083D4(&local_24,&local_1c);
    iVar2 = local_24;
    if ((*(byte *)(param_1 + 0x19) & 0x10) == 0) {
      iVar2 = local_24 + local_1c;
    }
    iVar3 = local_20;
    if ((*(byte *)(param_1 + 0x19) & 0x20) == 0) {
      iVar3 = local_20 + local_18;
    }
    if ((*(byte *)(param_1 + 0x19) & 8) == 0) {
      iVar4 = *(int *)(param_1 + 0x30) + 0x400;
      if ((iVar4 < iVar2) || (iVar4 = *(int *)(param_1 + 0x30) + -0x400, iVar2 < iVar4)) {
        *(int *)(param_1 + 0x30) = iVar4;
      }
      else {
        *(int *)(param_1 + 0x30) = iVar2;
      }
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 - iVar3 < 0) {
        iVar3 = iVar2 * 7 + iVar3 + 7;
      }
      else {
        iVar3 = iVar2 * 7 + iVar3;
      }
      *(int *)(param_1 + 0x34) = iVar3 >> 3;
    }
    else {
      *(int *)(param_1 + 0x34) = iVar3;
      *(int *)(param_1 + 0x30) = iVar2;
    }
    sub_0801504C(param_1,*(undefined *)(param_1 + 0x19));
  }
  else {
    sub_0801504C(param_1,*(undefined *)(param_1 + 0x19));
  }
  return in_lr;
}

