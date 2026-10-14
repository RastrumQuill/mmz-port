// sub_080AE1E8 at 0x080AE1E8 (thumb)

undefined8 sub_080AE1E8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (DAT_0202e140 == '\0') {
    iVar1 = sub_08006B50(DAT_0202f084);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 1;
      *(undefined *)(iVar1 + 9) = 6;
      *(undefined4 *)(iVar1 + 0x14) = 0x80ae271;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = 0;
      *(undefined *)(iVar1 + 0x11) = 0;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
      *(undefined4 *)(iVar1 + 0x2c) = param_1;
    }
    iVar2 = sub_08006B50(DAT_0202f084);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 1;
      *(undefined *)(iVar2 + 9) = 6;
      *(undefined4 *)(iVar2 + 0x14) = 0x80ae271;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(undefined *)(iVar2 + 0x10) = 1;
      *(undefined *)(iVar2 + 0x11) = 0;
      *(int *)(iVar2 + 0x28) = iVar1;
      *(undefined4 *)(iVar2 + 0x2c) = param_1;
    }
  }
  else {
    iVar1 = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

