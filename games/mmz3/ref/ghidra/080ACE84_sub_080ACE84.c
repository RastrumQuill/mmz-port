// sub_080ACE84 at 0x080ACE84 (thumb)

undefined4 sub_080ACE84(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x60) + ((0x10 - *(int *)(param_1 + 0x60)) * 0x10 >> 8);
      *(int *)(param_1 + 0x60) = iVar3;
      *(short *)(param_1 + 0x50) = (short)iVar3;
      *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 0x60);
      if ((*(char *)(param_1 + 0x13) != '\0') &&
         (cVar2 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar2, cVar2 != '\0'))
      {
        return in_lr;
      }
      bVar1 = *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 2;
      goto LAB_080ad006;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0836905c);
    sub_08017700(param_1,0x690e);
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd80;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x280;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(undefined *)(param_1 + 0x13) = 0x24;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  if (*(byte *)(param_1 + 0x13) < 10) {
    iVar3 = *(int *)(param_1 + 0x60) + ((0x10 - *(int *)(param_1 + 0x60)) * 0x10 >> 8);
    *(int *)(param_1 + 0x60) = iVar3;
    *(short *)(param_1 + 0x50) = (short)iVar3;
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 0x60);
  }
  if (*(char *)(param_1 + 0x13) == '\x04') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  else {
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar3 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x800,*(undefined4 *)(param_1 + 0x58));
    }
    else {
      iVar3 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
    }
    if (iVar3 != 0) {
      if (10 < *(byte *)(param_1 + 0x13)) {
        *(undefined *)(param_1 + 0x13) = 10;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 9);
  *(undefined4 *)(param_1 + 0xc) = 2;
LAB_080ad006:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[bVar1] + 8);
  return in_lr;
}

