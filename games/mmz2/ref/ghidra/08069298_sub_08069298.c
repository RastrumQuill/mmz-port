// sub_08069298 at 0x08069298 (thumb)

undefined4 sub_08069298(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined4 *)(param_1 + 0x60) = 0xfffff900;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pcVar2 = (char *)(*(int *)(param_1 + 0xb8) + 0xe3);
  if (*pcVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else if (*(byte *)(param_1 + 0x10) == 4) {
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    if (iVar1 < *(int *)(*(int *)(param_1 + 0xb8) + 0x58) + -0xf000) {
      *pcVar2 = '\0';
    }
  }
  else if (1 < *(byte *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x2c) + 0x58) + -0x3000;
  }
  return in_lr;
}

