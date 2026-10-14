// sub_08068C04 at 0x08068C04 (thumb)

undefined4 sub_08068C04(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x2f;
    *(undefined4 *)(iVar1 + 0x14) = 0x8068c69;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022efe;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f5f;
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(bool *)(iVar1 + 0x13) = 0 < *(int *)(param_1 + 0xb8);
  }
  return in_lr;
}

