// sub_08073AFC at 0x08073AFC (thumb)

undefined8 sub_08073AFC(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x3e;
    *(undefined4 *)(iVar1 + 0x14) = 0x8073b59;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f1c;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f6e;
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(int *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

