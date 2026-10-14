// sub_08066FF8 at 0x08066FF8 (thumb)

undefined8 sub_08066FF8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_02022e98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x2d;
    *(undefined4 *)(iVar1 + 0x14) = 0x8067059;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022efa;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f5d;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return CONCAT44(in_lr,iVar1);
}

