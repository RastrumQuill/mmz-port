// sub_08087934 at 0x08087934 (thumb)

undefined4 sub_08087934(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x28;
    *(undefined4 *)(iVar1 + 0x14) = 0x8087995;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fd0;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023008;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(int *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

