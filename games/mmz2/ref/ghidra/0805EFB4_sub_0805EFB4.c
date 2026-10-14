// sub_0805EFB4 at 0x0805EFB4 (thumb)

undefined4 sub_0805EFB4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa17);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (DAT_0202e130 != 0) {
    if (0 < *(int *)(param_1 + 0x5c)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x20;
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
      iVar2 = -*(int *)(param_1 + 0x5c);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x5c);
    }
    *(int *)(DAT_0202e130 + 0x54) = *(int *)(DAT_0202e130 + 0x54) + iVar2;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080032EC(0x7b);
      sub_080874C4(param_1,0,0);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x80;
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar2 + 0x2000);
    if (sVar1 != 0) {
      *(undefined *)(param_1 + 0xd) = 0x19;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

