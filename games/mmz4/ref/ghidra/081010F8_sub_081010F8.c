// sub_081010F8 at 0x081010F8 (thumb)

undefined4 sub_081010F8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if ((((*(uint *)(param_1 + 0x14) & 4) != 0) && (*(char *)(iVar1 + 8) == '\0')) &&
     (*(char *)(iVar1 + 0x1b9) != '\0')) {
    *(int *)(*(int *)(param_1 + 0x2c) + 0x2c) = iVar1;
  }
  return in_lr;
}

