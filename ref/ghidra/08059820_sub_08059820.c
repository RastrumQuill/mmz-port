// sub_08059820 at 0x08059820 (thumb)

void sub_08059820(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(ushort *)(param_1 + 0x1a) & 1) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
    if (*(int *)(DAT_0202286c + 0x4c) - *(int *)(*(int *)(param_1 + 0x40) + 0x4c) < 1) {
      iVar2 = 0x280;
    }
    else {
      iVar2 = -0x280;
    }
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + iVar2;
  }
  return;
}

