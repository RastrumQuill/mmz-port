// sub_08060DDC at 0x08060DDC (thumb)

undefined4 sub_08060DDC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_08004230(0xa7);
      sub_08004230(0xa8);
      sub_08004230(0xa9);
      sub_08004230(0xaa);
      DAT_020301b2 = DAT_020301b2 | 2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      DAT_0202f4a5 = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 0xb6;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined *)(param_1 + 0xf) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080041E4(0xa7);
  sub_080041E4(0xa8);
  sub_080041E4(0xa9);
  sub_080041E4(0xaa);
  iVar3 = *(int *)(param_1 + 0x68) + 8;
  *(int *)(param_1 + 0x68) = iVar3;
  if (0x140 < iVar3) {
    *(undefined4 *)(param_1 + 0x68) = 0x140;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    local_24 = *(int *)(param_1 + 0x54);
    iVar5 = *(int *)(param_1 + 0x58) + 0x3200;
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar6 = uVar4 & 0x7fffffff;
    DAT_0202f608 = uVar6;
    local_20 = iVar5;
    iVar3 = sub_080FE4D8(uVar4 * 2 >> 0x11,0xaa);
    local_24 = (iVar3 + -0x55) * 0x100 + local_24;
    uVar4 = uVar6 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    iVar3 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x96);
    local_20 = (iVar3 + -0x5f) * 0x100 + iVar5;
    sub_080B2484(1,&local_24);
  }
  cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),*(undefined *)(param_1 + 0xf));
  if (cVar2 == '\0') {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    cVar2 = sub_080FE4D8(uVar4 * 2 >> 0x11,6);
    *(char *)(param_1 + 0xf) = cVar2 + '\b';
    sub_0800471C(0x2a);
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

