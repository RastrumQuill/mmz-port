// sub_08099FFC at 0x08099FFC (thumb)

undefined4 sub_08099FFC(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x4e;
    *(undefined4 *)(iVar1 + 0x14) = 0x809a109;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020230ac;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202310e;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(int *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  }
  return in_lr;
}

