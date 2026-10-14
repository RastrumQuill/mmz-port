// sub_08042914 at 0x08042914 (thumb)

undefined4 sub_08042914(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  bVar2 = *(byte *)(param_1 + 0xd);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0x2b08);
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    iVar4 = *(int *)(param_1 + 0x54) + -0x1400;
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar5 = uVar3 & 0x7fffffff;
    DAT_0202f608 = uVar5;
    local_24 = iVar4;
    local_24 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x3000);
    local_24 = local_24 + iVar4;
    uVar3 = uVar5 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x58) - (uVar3 * 4 >> 0x12);
    sub_080B2484(1,&local_24);
  }
  cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0xc);
  if (cVar1 == '\0') {
    sub_0800471C(0x2a);
  }
  if (-1 < *(char *)(param_1 + 0x12)) {
    if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  if (*(byte *)(param_1 + 0x12) == 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08024FE4(10,param_1 + 0x54);
    }
    else {
      sub_08024FE4(0xb,param_1 + 0x54);
    }
    DAT_020301b2 = DAT_020301b2 | 2;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

