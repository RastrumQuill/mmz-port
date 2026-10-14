// sub_080B0918 at 0x080B0918 (thumb)

undefined4 sub_080B0918(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(DAT_0202286c + 0x50) + 0x5000;
  iVar1 = iVar2 - *(int *)(iVar3 + 0x50);
  if (iVar1 < 0) {
    iVar1 = *(int *)(iVar3 + 0x50) - iVar2;
  }
  if (iVar1 < 0x5001) {
    if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(iVar3 + 0x4c) + -0x2400;
      if (*(int *)(DAT_0202286c + 0x4c) <= iVar1) {
        return in_lr;
      }
    }
    else {
      iVar1 = *(int *)(iVar3 + 0x4c) + 0x2400;
      if (iVar1 <= *(int *)(DAT_0202286c + 0x4c)) {
        return in_lr;
      }
    }
    *(int *)(DAT_0202286c + 0x4c) = iVar1;
  }
  return in_lr;
}

