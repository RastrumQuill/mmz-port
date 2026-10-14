// sub_080B1354 at 0x080B1354 (thumb)

void sub_080B1354(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((*(char *)(iVar1 + 0x12) == '\0') &&
     (*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 8) == '\0')) {
    if ((*(byte *)(iVar1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(iVar1 + 0x4c) + -0x2400;
      if (*(int *)(DAT_0202286c + 0x4c) <= iVar1) {
        return;
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x4c) + 0x2400;
      if (iVar1 <= *(int *)(DAT_0202286c + 0x4c)) {
        return;
      }
    }
    *(int *)(DAT_0202286c + 0x4c) = iVar1;
  }
  return;
}

