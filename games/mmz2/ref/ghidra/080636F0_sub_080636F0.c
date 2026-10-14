// sub_080636F0 at 0x080636F0 (thumb)

undefined4 sub_080636F0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x2500);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    sub_080032EC(0x39);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (-0x200 < *(int *)(param_1 + 0x5c)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -8;
    }
    iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar1;
    if (iVar1 < *(int *)(param_1 + 0xc4) + -0x4000) {
      *(undefined *)(param_1 + 0xd) = 10;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else {
    if (*(int *)(param_1 + 0x5c) < 0x200) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 8;
    }
    iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar1;
    if (*(int *)(param_1 + 200) + 0x4000 < iVar1) {
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

