// sub_0806ED74 at 0x0806ED74 (thumb)

undefined4 sub_0806ED74(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1700);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x5c) + 0x10;
      *(int *)(param_1 + 0x5c) = iVar1;
      iVar1 = *(int *)(param_1 + 0x54) - iVar1;
      *(int *)(param_1 + 0x54) = iVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x40);
    iVar1 = sub_080093C4(iVar1,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar1 + -0x1000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = *(int *)(param_1 + 0x5c) + -0x10;
    *(int *)(param_1 + 0x5c) = iVar1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
    if (iVar1 == 0) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x58) + 0x100;
    *(int *)(param_1 + 0x58) = iVar1;
    if (*(int *)(param_1 + 0xb8) < iVar1) {
      sub_080127E4(param_1,0x1701);
      sub_080128D4(param_1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 6;
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  return in_lr;
}

