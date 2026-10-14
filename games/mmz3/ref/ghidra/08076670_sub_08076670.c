// sub_08076670 at 0x08076670 (thumb)

undefined4 sub_08076670(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08363990);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      sub_08017700(param_1,0x2a02);
    }
    else {
      sub_08017700(param_1,0x2a04);
    }
    iVar1 = DAT_0202f5c0;
    iVar2 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar1 = (*(int *)(param_1 + 0x58) + -0x1800) - *(int *)(iVar1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar1;
    iVar2 = iVar2 >> 8;
    iVar1 = iVar1 >> 8;
    iVar1 = sub_080FE124(iVar2 * iVar2 + iVar1 * iVar1);
    uVar3 = (uint)(iVar1 << 0x10) >> 8;
    if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar1 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar3);
      *(int *)(param_1 + 0x5c) = iVar1;
      iVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar3);
      *(int *)(param_1 + 0x5c) = iVar1 * 6;
      *(int *)(param_1 + 0x60) = iVar2 * 6;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    sub_08017700(param_1,0x2a02);
  }
  else {
    sub_08017700(param_1,0x2a04);
  }
  sub_080177F4(param_1);
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  if (*(int *)(param_1 + 0x5c) < 0) {
    iVar1 = sub_08009F80(iVar1,*(undefined4 *)(param_1 + 0x58));
    if (0 < iVar1) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
      goto LAB_0807679a;
    }
  }
  else {
    iVar1 = sub_08009E14(iVar1,*(undefined4 *)(param_1 + 0x58));
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
      goto LAB_0807679a;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    if (*(int *)(param_1 + 0x60) < 1) {
      return in_lr;
    }
    iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar1);
    if (-1 < iVar1) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    sub_080768C0(param_1);
    return in_lr;
  }
LAB_0807679a:
  sub_080768C0(param_1);
  return in_lr;
}

