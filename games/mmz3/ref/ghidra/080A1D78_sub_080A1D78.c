// sub_080A1D78 at 0x080A1D78 (thumb)

undefined4 sub_080A1D78(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0xa905);
    sub_08007390(param_1 + 0x74,&DAT_08367a8c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar3 = 0x1400;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar3 = -0x1400;
    }
    *(int *)(param_1 + 0x54) = iVar2 + iVar3;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 100) = iVar2;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if ((0x1400 < iVar2) && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      iVar2 = sub_080A1014(param_1,param_1 + 0x54,1);
      *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    }
  }
  sub_080177F4(param_1);
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar2 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x400,*(undefined4 *)(param_1 + 0x58));
  }
  else {
    iVar2 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x400,*(undefined4 *)(param_1 + 0x58));
  }
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

