// sub_080DE1DC at 0x080DE1DC (thumb)

undefined8 sub_080DE1DC(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x30;
    *(undefined4 *)(iVar1 + 0x14) = 0x80de25d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x2c) = param_1;
  }
  iVar2 = sub_08005500(DAT_0202ed9c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 1;
    *(undefined *)(iVar2 + 9) = 0x30;
    *(undefined4 *)(iVar2 + 0x14) = 0x80de25d;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(undefined *)(iVar2 + 0x10) = 1;
    *(undefined *)(iVar2 + 0x11) = 0;
    *(int *)(iVar2 + 0x28) = iVar1;
    *(undefined4 *)(iVar2 + 0x2c) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

