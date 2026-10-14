// sub_08048780 at 0x08048780 (thumb)

void sub_08048780(int param_1)

{
  int iVar1;
  
  if ((&DAT_082ae9ac)[*(byte *)(param_1 + 0xd)] == '\0') {
    iVar1 = *(int *)(param_1 + 0xe0) + 0x1400;
    if (*(int *)(param_1 + 0x4c) < iVar1) {
      *(int *)(param_1 + 0x4c) = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0xd8) + -0x1400;
    if (iVar1 < *(int *)(param_1 + 0x4c)) {
      *(int *)(param_1 + 0x4c) = iVar1;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe0) + 0x400;
    if (*(int *)(param_1 + 0x4c) < iVar1) {
      *(int *)(param_1 + 0x4c) = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0xd8) + -0x400;
    if (iVar1 < *(int *)(param_1 + 0x4c)) {
      *(int *)(param_1 + 0x4c) = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0xc4) + -0x400;
    if (*(int *)(param_1 + 0x50) < iVar1) {
      *(int *)(param_1 + 0x50) = iVar1;
    }
  }
  return;
}

