// sub_080B17A8 at 0x080B17A8 (thumb)

undefined4 sub_080B17A8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 8) == '\0') {
    iVar2 = 0x2a00;
    if (*(char *)(iVar1 + 0x10) == '\0') {
      iVar2 = 0x3200;
    }
    if ((*(byte *)(iVar1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(iVar1 + 0x4c) - iVar2;
      if (*(int *)(DAT_0202286c + 0x4c) <= iVar2) {
        return in_lr;
      }
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x4c) + iVar2;
      if (iVar2 <= *(int *)(DAT_0202286c + 0x4c)) {
        return in_lr;
      }
    }
    *(int *)(DAT_0202286c + 0x4c) = iVar2;
  }
  return in_lr;
}

