// sub_080C1E98 at 0x080C1E98 (thumb)

undefined4 sub_080C1E98(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x60) == -0x200) {
    sub_0801CF00(param_1,0x3d01);
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if ((*(char *)(param_1 + 0x12) == '\v') && (*(char *)(param_1 + 0xbd) != '\0')) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar4 = -0x2000;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar4 = 0x2000;
    }
    sub_080C1694(iVar3 + iVar4,*(undefined4 *)(param_1 + 0xb8),*(undefined *)(param_1 + 0x11),
                 *(char *)(param_1 + 0xbd));
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar2 = *(byte *)(param_1 + 10);
    bVar5 = bVar2 & 0xfb;
    *(byte *)(param_1 + 10) = bVar5;
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((bVar1 & 1) == 0) {
      bVar2 = bVar5 | 1;
    }
    else {
      bVar2 = bVar2 & 0xfa;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if (0x40 < bVar2) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C17F4(param_1);
  }
  return in_lr;
}

