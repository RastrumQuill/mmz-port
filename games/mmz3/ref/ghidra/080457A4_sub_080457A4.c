// sub_080457A4 at 0x080457A4 (thumb)

undefined4 sub_080457A4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x81);
    sub_08017700(param_1,0xa504);
    iVar2 = sub_080047C0(0x7f);
    if (iVar2 != 0) {
      sub_08004768(0x7f);
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
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if ((DAT_02002650 & 0x7f) == 0xd) {
      iVar2 = 0x2d024;
    }
    else {
      iVar2 = 0x2d026;
    }
    (&DAT_02002480)[iVar2] = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -8 >> 8);
  iVar2 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if ((0 < *(int *)(param_1 + 0x5c)) &&
     (iVar2 = sub_08009ED0(iVar2 + 0x1200,iVar3 + -0x800), iVar2 != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
  }
  if ((*(int *)(param_1 + 0x5c) < 0) &&
     (iVar2 = sub_0800A04C(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + -0x800),
     iVar2 != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
  }
  iVar2 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  }
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0xff;
  }
  return in_lr;
}

