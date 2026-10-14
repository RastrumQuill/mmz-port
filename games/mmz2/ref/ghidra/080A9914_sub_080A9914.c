// sub_080A9914 at 0x080A9914 (thumb)

undefined4 sub_080A9914(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    sub_080127E4(param_1,0x2303);
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd00;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_080128D4(param_1);
      iVar3 = *(int *)(iVar4 + 0x54) + -0x1400;
      *(int *)(param_1 + 0x54) = iVar3;
      *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x5e00;
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      uVar2 = sub_080093C4(iVar3);
      *(undefined4 *)(param_1 + 0xb8) = uVar2;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
  }
  sub_080128D4(param_1);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x58) + iVar4;
  *(int *)(param_1 + 0x58) = iVar4;
  if (*(int *)(param_1 + 0xb8) < iVar4) {
    sub_080A9734(param_1,1,*(char *)(param_1 + 0x11) + '\x01');
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A97B4(param_1);
  }
  return in_lr;
}

