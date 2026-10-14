// sub_080622D8 at 0x080622D8 (thumb)

undefined4 sub_080622D8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 3;
  iVar1 = (uint)*(byte *)(param_1 + 0x10) * 0x20 + 0x10;
  *(int *)(param_1 + 100) = iVar1;
  iVar1 = *(int *)(param_1 + 0x5c) + iVar1;
  *(int *)(param_1 + 0x5c) = iVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  *(undefined *)(param_1 + 0xc1) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 0xb8) + 0x2400 <= *(int *)(param_1 + 0x54)) {
      return in_lr;
    }
  }
  else if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0xb8) + -0x2400) {
    return in_lr;
  }
  *(undefined *)(param_1 + 0xc1) = 1;
  return in_lr;
}

