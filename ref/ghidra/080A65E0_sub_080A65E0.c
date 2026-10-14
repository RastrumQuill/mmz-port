// sub_080A65E0 at 0x080A65E0 (thumb)

void sub_080A65E0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  if ((*(char *)(iVar1 + 8) == '\0') && (*(char *)(iVar1 + 0xd) == '\0')) {
    *(undefined *)(*(int *)(param_1 + 0x40) + 0xd) = 1;
  }
  return;
}

