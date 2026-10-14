// sub_080E0E60 at 0x080E0E60 (thumb)

undefined4 sub_080E0E60(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar1 + 8) == '\0') {
    *(int *)(*(int *)(param_1 + 0x2c) + 0xb8) = iVar1;
  }
  return in_lr;
}

