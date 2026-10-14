// sub_0804FD28 at 0x0804FD28 (thumb)

undefined4 sub_0804FD28(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0xdc);
    if (*(char *)(param_1 + 0xe1) != '\a') {
      sub_08017700(param_1,0xab24);
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08004230(0x49);
    sub_08004230(0x4a);
    sub_08004230(0x4b);
    sub_08004230(0x4c);
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -8 >> 8);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if ((0 < *(int *)(param_1 + 0x5c)) &&
     (iVar3 = sub_08009E14(iVar3 + 0x2e00,iVar4 + -0x800), iVar3 != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  }
  if ((*(int *)(param_1 + 0x5c) < 0) &&
     (iVar3 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x2e00,*(int *)(param_1 + 0x58) + -0x800),
     iVar3 != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  }
  iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  }
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
    return in_lr;
  }
  if ((*(char *)(param_1 + 0xe1) == '\a') && (bVar1 = *(byte *)(param_1 + 0xe2), 4 < bVar1)) {
    if (bVar1 < 8) {
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 6;
      return in_lr;
    }
    if (bVar1 < 10) {
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 8;
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0xff;
  return in_lr;
}

