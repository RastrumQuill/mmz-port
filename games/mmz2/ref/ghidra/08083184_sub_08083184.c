// sub_08083184 at 0x08083184 (thumb)

undefined4 sub_08083184(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6e00);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (((bVar1 & 7) == 0) &&
     (uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar2 & 0x7fffffff,
     (uVar2 * 2 >> 0x11 & 3) == 0)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = -0xc00;
    }
    else {
      iVar3 = 0xc00;
    }
    sub_080AC8A4(*(int *)(param_1 + 0x54) + iVar3,*(undefined4 *)(param_1 + 0x58),0);
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if (DAT_0202d004 + 0x1000 < iVar3) {
    if (*(int *)(DAT_0202e130 + 0x58) < iVar3) {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x11) == (*(byte *)(param_1 + 10) >> 4 & 1)) {
      *(undefined *)(param_1 + 0xd) = 0xe;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xbf) = 0xe;
    }
  }
  else if (*(byte *)(param_1 + 0x11) == (*(byte *)(param_1 + 10) >> 4 & 1)) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xbf) = 1;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

