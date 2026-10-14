// sub_0804CBC8 at 0x0804CBC8 (thumb)

undefined4 sub_0804CBC8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x8a);
    sub_08017700(param_1,0xa80b);
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
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 | 1;
    if ((bVar1 & 0x20) != 0) {
      *(undefined *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x3900;
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  iVar3 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -8 >> 8);
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar4 = *(int *)(param_1 + 0x54) + iVar3;
  *(int *)(param_1 + 0x54) = iVar4;
  if ((0 < iVar3) &&
     (iVar3 = sub_08009E14(iVar4 + 0x1800,*(int *)(param_1 + 0x58) + -0x800), iVar3 != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  }
  if ((*(int *)(param_1 + 0x5c) < 0) &&
     (iVar3 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x1800,*(int *)(param_1 + 0x58) + -0x800),
     iVar3 != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  }
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

