// sub_080BAEA0 at 0x080BAEA0 (thumb)

undefined4 sub_080BAEA0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      iVar5 = *(int *)(param_1 + 0x7c) + ((0x180 - *(int *)(param_1 + 0x7c)) * 0x28 >> 8);
      *(int *)(param_1 + 0x7c) = iVar5;
      *(short *)(param_1 + 0x50) = (short)iVar5;
      *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 0x7c);
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      *(char *)(param_1 + 0x24) = (char)(uVar4 * 2 >> 0x11);
      iVar6 = *(int *)(param_1 + 0x60) +
              ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60)) * 0x10 >> 8);
      *(int *)(param_1 + 0x60) = iVar6;
      iVar5 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -6 >> 8);
      *(int *)(param_1 + 0x5c) = iVar5;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar7 = uVar4 & 0x7fffffff;
    DAT_0202f608 = uVar7;
    cVar2 = sub_080FE4D8(uVar4 * 2 >> 0x11,0xc);
    *(char *)(param_1 + 0x12) = cVar2 + '\x14';
    uVar4 = uVar7 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    uVar3 = sub_080FE4D8(uVar4 * 2 >> 0x11,0xc);
    *(undefined *)(param_1 + 0x13) = uVar3;
    sub_08017700(param_1,0x270c);
    if (*(short *)(param_1 + 0x80) == 0) {
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      iVar5 = (uVar4 * 2 >> 0x11 & 0x7f) + 0x1c0;
    }
    else {
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      iVar5 = -0x1c0 - (uVar4 * 2 >> 0x11 & 0x7f);
    }
    DAT_0202f608 = uVar4 & 0x7fffffff;
    *(int *)(param_1 + 0x5c) = iVar5;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      iVar5 = (uVar4 * 2 >> 0x11 & 0xff) + 0x20;
    }
    else {
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      iVar5 = -0x20 - (uVar4 * 2 >> 0x11 & 0xff);
    }
    DAT_0202f608 = uVar4 & 0x7fffffff;
    *(int *)(param_1 + 0x68) = iVar5;
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x13) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar2, cVar2 == '\0')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

