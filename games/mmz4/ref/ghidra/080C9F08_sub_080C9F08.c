// sub_080C9F08 at 0x080C9F08 (thumb)

undefined4 sub_080C9F08(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((*(char *)(param_1 + 0xb7) == '\0') && (*(char *)(param_1 + 0x11) == '\x03')) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
    }
    if (*(char *)(param_1 + 0xb7) == '\x01') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
      }
      else if (*(char *)(param_1 + 0x11) == '\x03') {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xb6) == '\x01') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x100;
      }
      if (*(char *)(param_1 + 0x11) != '\x03') {
        return in_lr;
      }
      iVar1 = *(int *)(param_1 + 0x58);
      iVar2 = 0x200;
    }
    else {
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
      }
      if (*(char *)(param_1 + 0x11) != '\x03') {
        return in_lr;
      }
      iVar1 = *(int *)(param_1 + 0x58);
      iVar2 = -0x200;
    }
    *(int *)(param_1 + 0x58) = iVar1 + iVar2;
  }
  return in_lr;
}

