// sub_080879C8 at 0x080879C8 (thumb)

undefined4 sub_080879C8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0xb8);
    if (iVar1 <= *(int *)(param_1 + 0x54)) {
      return in_lr;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0xb8);
    if (*(int *)(param_1 + 0x54) <= iVar1) {
      return in_lr;
    }
  }
  *(int *)(param_1 + 0x54) = iVar1;
  return in_lr;
}

