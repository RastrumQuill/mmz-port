// sub_080B3594 at 0x080B3594 (thumb)

void sub_080B3594(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  if (*(char *)(iVar1 + 8) == '\0') {
    *(int *)(*(int *)(param_1 + 0x40) + 0xbc) = iVar1;
  }
  return;
}

