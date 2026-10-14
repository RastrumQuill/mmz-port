// sub_08052454 at 0x08052454 (thumb)

undefined4 sub_08052454(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08004768(0x10d);
    sub_08017700(param_1,0x4d12);
    pcVar6 = (char *)(param_1 + 0xb8);
    if (*pcVar6 != '\0') {
      sub_08004230();
      *pcVar6 = '\0';
    }
    iVar3 = sub_08017B8C(param_1);
    sub_080040A8(0x54,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
    *pcVar6 = 'T';
    sub_080041E4();
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0x13) = 2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    if ((*(char *)(param_1 + 0x13) == '\x01') && (*(char *)(param_1 + 0xb8) != '\0')) {
      sub_08004230();
      *(char *)(param_1 + 0xb8) = '\0';
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  sub_080177F4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_24 = (uVar4 * 2 >> 0x11 & 0x3fff) + *(int *)(param_1 + 0x54) + -0x2000;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    local_20 = (uVar4 * 2 >> 0x11 & 0x3fff) + *(int *)(param_1 + 0x58) + -0x2000;
    sub_080B2484(1,&local_24);
  }
  if ((*(char *)(param_1 + 0x12) + 2U & 1) == 0) {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    sub_080BFDC0(*(int *)(param_1 + 0x54) + ((uVar4 * 4 >> 0x12) - 0x2000),
                 *(int *)(param_1 + 0x58) - ((uVar5 * 8 >> 0x13) + 0x1000));
  }
  cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0x14);
  if (cVar1 == '\0') {
    sub_0800471C(0x31);
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
    DAT_020301b2 = DAT_020301b2 | 2;
    sub_08024FE4(0xd,param_1 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

