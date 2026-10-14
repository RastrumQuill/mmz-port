// sub_080AD000 at 0x080AD000 (thumb)

undefined4 sub_080AD000(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (((DAT_02022ae9 & 0x40) == 0) &&
     (*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 8) == '\0')) {
    if ((*(byte *)(iVar1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(iVar1 + 0x4c) + -0x2400;
      if (*(int *)(DAT_0202286c + 0x4c) <= iVar1) {
        return in_lr;
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x4c) + 0x2400;
      if (iVar1 <= *(int *)(DAT_0202286c + 0x4c)) {
        return in_lr;
      }
    }
    *(int *)(DAT_0202286c + 0x4c) = iVar1;
  }
  return in_lr;
}

