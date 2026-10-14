// sub_08014CB0 at 0x08014CB0 (thumb)

undefined4 sub_08014CB0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar1 + 1) == '\0') {
    if ((*(uint *)(iVar1 + 4) & (uint)DAT_02022b6e) != 0) goto LAB_08014cdc;
  }
  else if ((*(uint *)(iVar1 + 4) & (uint)DAT_02022b6e) == 0) {
LAB_08014cdc:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    return 1;
  }
  return 0;
}

