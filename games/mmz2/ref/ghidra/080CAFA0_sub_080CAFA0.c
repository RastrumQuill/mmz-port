// sub_080CAFA0 at 0x080CAFA0 (thumb)

undefined4 sub_080CAFA0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0xb4)) {
          return in_lr;
        }
        iVar1 = *(int *)(param_1 + 0x54) + -0x40;
      }
      else {
        if (*(int *)(param_1 + 0xb4) <= *(int *)(param_1 + 0x54)) {
          return in_lr;
        }
        iVar1 = *(int *)(param_1 + 0x54) + 0x40;
      }
      *(int *)(param_1 + 0x54) = iVar1;
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
  }
  return in_lr;
}

