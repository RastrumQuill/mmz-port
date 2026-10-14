// sub_080CCDD4 at 0x080CCDD4 (thumb)

undefined4 sub_080CCDD4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar1 + 8) == '\0') {
    *(int *)(*(int *)(param_1 + 0x2c) + 0xb4) = iVar1;
    DAT_020301b4 = DAT_020301b4 | 1;
    *(undefined *)(iVar1 + 0x119) = 1;
  }
  return in_lr;
}

