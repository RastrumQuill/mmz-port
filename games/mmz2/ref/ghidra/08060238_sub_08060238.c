// sub_08060238 at 0x08060238 (thumb)

undefined4 sub_08060238(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xab00);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar1 < 0x800) {
      *(int *)(param_1 + 0x5c) = iVar1 + 0x20;
    }
    if (*(int *)(param_1 + 0xc4) + 0x5000 < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0xd) = 0x10;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    if (-0x800 < iVar1) {
      *(int *)(param_1 + 0x5c) = iVar1 + -0x20;
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc0) + -0x5000) {
      *(undefined *)(param_1 + 0xd) = 0x10;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

