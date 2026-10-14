// sub_08049EE4 at 0x08049EE4 (thumb)

undefined4 sub_08049EE4(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(int *)(param_1 + 0x5c) < 0x700) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x80;
  }
  pcVar3 = (char *)(param_1 + 0xd0);
  if (*pcVar3 != '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar2;
      if (*(int *)(param_1 + 0xc0) + 0x3000 <= iVar2) {
        return in_lr;
      }
      cVar1 = *pcVar3;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar2;
      if (iVar2 <= *(int *)(param_1 + 0xc4) + -0x3000) {
        return in_lr;
      }
      cVar1 = *pcVar3;
    }
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0x13;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x10;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if (*(int *)(param_1 + 0xc0) + 0x8200 <= iVar2) {
      return in_lr;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if (iVar2 <= *(int *)(param_1 + 0xc4) + -0x8200) {
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_08049894(param_1);
  return in_lr;
}

