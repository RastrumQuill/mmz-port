// sub_0805C418 at 0x0805C418 (thumb)

undefined4 sub_0805C418(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa903);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  if (0x300 < iVar1) {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0x26;
      *(undefined *)(param_1 + 0x13) = 3;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x27;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

