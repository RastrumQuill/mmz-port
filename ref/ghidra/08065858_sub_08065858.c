// sub_08065858 at 0x08065858 (thumb)

undefined4 sub_08065858(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  if (*(char *)(iVar1 + 8) == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x4c) < *(int *)(DAT_0202286c + 0x4c)) {
      iVar2 = 0x240;
    }
    else {
      iVar2 = -0x240;
    }
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + iVar2;
  }
  return in_lr;
}

