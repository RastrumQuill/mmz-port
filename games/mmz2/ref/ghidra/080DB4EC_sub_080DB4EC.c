// sub_080DB4EC at 0x080DB4EC (thumb)

undefined4 sub_080DB4EC(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 6;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = sub_08006B50(DAT_0202f094);
    if (iVar1 == 0) {
      return in_lr;
    }
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0x80dac79;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(char *)(iVar1 + 0x10) = (char)iVar2;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  } while (iVar2 != 0);
  return in_lr;
}

