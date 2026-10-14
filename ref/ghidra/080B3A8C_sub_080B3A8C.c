// sub_080B3A8C at 0x080B3A8C (thumb)

void sub_080B3A8C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  if (*(char *)(iVar1 + 8) == '\0') {
    *(int *)(*(int *)(param_1 + 0x40) + 0xc0) = iVar1;
  }
  return;
}

