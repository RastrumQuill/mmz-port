// sub_0804BDA4 at 0x0804BDA4 (thumb)

void sub_0804BDA4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + iVar1;
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + iVar1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

