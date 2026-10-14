// sub_0801FCE4 at 0x0801FCE4 (thumb)

undefined4 sub_0801FCE4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined *)(param_1 + 0x1c) = 1;
  }
  local_24 = *(int *)(param_1 + 0x30);
  local_20 = *(int *)(param_1 + 0x34);
  iVar2 = local_24 - (**(int **)(param_1 + 0x48) + *(int *)(param_1 + 0x4c));
  if (0 < iVar2) {
    local_24 = local_24 - iVar2;
  }
  if (iVar2 < 0) {
    local_24 = local_24 - iVar2;
  }
  iVar2 = local_20 - ((*(int **)(param_1 + 0x48))[1] + *(int *)(param_1 + 0x54));
  if (-0x1000 < iVar2) {
    local_20 = (local_20 + -0x1000) - iVar2;
  }
  if (iVar2 < -0x1800) {
    local_20 = (local_20 + -0x1800) - iVar2;
  }
  sub_080070C8(&local_24,&local_1c);
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
    iVar1 = *(int *)(param_1 + 0x30) + 0x400;
    if ((iVar1 < iVar2) || (iVar1 = *(int *)(param_1 + 0x30) + -0x400, iVar2 < iVar1)) {
      *(int *)(param_1 + 0x30) = iVar1;
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
  sub_0801F998(param_1,*(undefined *)(param_1 + 0x19));
  return in_lr;
}

