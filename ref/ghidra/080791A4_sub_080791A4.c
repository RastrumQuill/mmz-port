// sub_080791A4 at 0x080791A4 (thumb)

undefined4 sub_080791A4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 10;
    *(undefined4 *)(iVar1 + 0x14) = 0x80791fd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f94;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fea;
    *(int *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined *)(iVar1 + 0x10) = 2;
    *(undefined *)(iVar1 + 0x11) = *(undefined *)(param_1 + 0x11);
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

