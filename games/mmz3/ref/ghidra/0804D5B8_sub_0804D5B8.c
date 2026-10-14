// sub_0804D5B8 at 0x0804D5B8 (thumb)

undefined4 sub_0804D5B8(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08004230(0x45);
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_1c = (uVar3 * 4 >> 0x12) + *(int *)(param_1 + 0x54) + -0x2000;
    iVar4 = *(int *)(param_1 + 0x58) + -0x2e00;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    local_18 = iVar4;
    local_18 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x5c00);
    local_18 = local_18 + iVar4;
    sub_080B2484(1,&local_1c);
  }
  cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0x14);
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
    sub_08024FE4(0xc,param_1 + 0x54);
    DAT_020301b2 = DAT_020301b2 | 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

