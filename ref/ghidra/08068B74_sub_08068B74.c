// sub_08068B74 at 0x08068B74 (thumb)

undefined4 sub_08068B74(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)param_2;
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x2f;
    *(undefined4 *)(iVar1 + 0x14) = 0x8068c69;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022efe;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f5f;
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    if (uVar2 < 4) {
      *(uint *)(iVar1 + 0x5c) = *(int *)(param_1 + 0x4c) + (uVar2 - 2) * 0x3000 + 0x1800;
    }
    if (4 < uVar2) {
      *(uint *)(iVar1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uVar2 - 7) * 0x3000 + 0x1800;
    }
    *(int *)(iVar1 + 0x20) = param_1;
    sub_0800DEB4(iVar1,param_1);
    *(byte *)(iVar1 + 0x10) = param_2;
  }
  return in_lr;
}

