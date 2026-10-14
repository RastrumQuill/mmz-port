// sub_080BB98C at 0x080BB98C (thumb)

undefined8 sub_080BB98C(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B50(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x38;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bbaed;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

