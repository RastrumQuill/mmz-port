// sub_08048B74 at 0x08048B74 (thumb)

undefined4 sub_08048B74(int param_1)

{
  undefined uVar1;
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
  if (*pcVar3 == '\0') {
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
    sub_08047F48(param_1);
    sub_080032EC(0x51);
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if (*(int *)(param_1 + 0xc0) + 0x3000 <= iVar2) {
      return in_lr;
    }
    if (*pcVar3 != '\0') {
      uVar1 = 0x18;
      goto LAB_08048c60;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if (iVar2 <= *(int *)(param_1 + 0xc4) + -0x3000) {
      return in_lr;
    }
    if (*pcVar3 != '\0') {
      uVar1 = 0x18;
      goto LAB_08048c60;
    }
  }
  uVar1 = 0x1a;
LAB_08048c60:
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

