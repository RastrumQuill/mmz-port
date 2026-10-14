// sub_08013F90 at 0x08013F90 (thumb)

undefined4 sub_08013F90(int param_1)

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
  cVar1 = sub_080066AC();
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
    sub_080066F8(&local_24,&local_1c);
    iVar2 = local_24;
    if ((*(byte *)(param_1 + 0x19) & 0x10) == 0) {
      iVar2 = local_24 + local_1c;
    }
    local_18 = local_20 + local_18;
    if (iVar2 + -0x7800 < *(int *)(param_1 + 0x5c)) {
      iVar2 = *(int *)(param_1 + 0x5c) + 0x7800;
    }
    if (*(int *)(param_1 + 0x60) < iVar2 + 0x7800) {
      iVar2 = *(int *)(param_1 + 0x60) + -0x7800;
    }
    if (local_18 + -0x5000 < *(int *)(param_1 + 100)) {
      local_18 = *(int *)(param_1 + 100) + 0x5000;
    }
    if (*(int *)(param_1 + 0x68) < local_18 + 0x5000) {
      local_18 = *(int *)(param_1 + 0x68) + -0x5000;
    }
    if ((*(byte *)(param_1 + 0x19) & 8) == 0) {
      iVar3 = *(int *)(param_1 + 0x30) + 0x380;
      if ((iVar3 < iVar2) || (iVar3 = *(int *)(param_1 + 0x30) + -0x380, iVar2 < iVar3)) {
        *(int *)(param_1 + 0x30) = iVar3;
      }
      else {
        *(int *)(param_1 + 0x30) = iVar2;
      }
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 - local_18 < 0) {
        local_18 = iVar2 * 7 + local_18 + 7;
      }
      else {
        local_18 = iVar2 * 7 + local_18;
      }
      *(int *)(param_1 + 0x34) = local_18 >> 3;
    }
    else {
      *(int *)(param_1 + 0x34) = local_18;
      *(int *)(param_1 + 0x30) = iVar2;
    }
    sub_08013C94(param_1,*(undefined *)(param_1 + 0x19));
  }
  else {
    sub_08013C94(param_1,*(undefined *)(param_1 + 0x19));
  }
  return in_lr;
}

