// sub_08097F28 at 0x08097F28 (thumb)

undefined4 sub_08097F28(int param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x42;
    *(undefined4 *)(iVar1 + 0x14) = 0x8097f89;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023094;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023102;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

