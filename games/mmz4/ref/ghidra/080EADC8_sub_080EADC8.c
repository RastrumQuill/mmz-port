// sub_080EADC8 at 0x080EADC8 (thumb)

undefined4 sub_080EADC8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar1 + 8) == '\0') {
    *(int *)(*(int *)(param_1 + 0x2c) + 0xb4) = iVar1;
    DAT_0202e924 = DAT_0202e924 | 1;
    *(undefined *)(iVar1 + 0x143) = 1;
  }
  return in_lr;
}

