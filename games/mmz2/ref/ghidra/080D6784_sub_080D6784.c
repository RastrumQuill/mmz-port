// sub_080D6784 at 0x080D6784 (thumb)

undefined8 sub_080D6784(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f090);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80d66e9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    if ((param_1 == 0) || (*(char *)(param_1 + 8) != '\0')) {
      param_1 = DAT_0202e130;
    }
    *(int *)(iVar1 + 0x28) = param_1;
    *(int *)(param_1 + 0x2a4) = iVar1;
  }
  return CONCAT44(in_lr,iVar1);
}

