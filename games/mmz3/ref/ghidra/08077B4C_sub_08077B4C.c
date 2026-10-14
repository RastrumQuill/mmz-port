// sub_08077B4C at 0x08077B4C (thumb)

undefined4 sub_08077B4C(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sub_08007390(param_1 + 0x74,&DAT_08363b88);
      sub_08017700(param_1,0x2e00);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08363ba0);
      sub_080177CC(param_1,0x2e05,4,1);
    }
    iVar2 = DAT_0202f5c0;
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar2 = (*(int *)(param_1 + 0x58) + -0x1800) - *(int *)(iVar2 + 0x58);
    *(int *)(param_1 + 0x60) = iVar2;
    iVar4 = iVar4 >> 8;
    iVar2 = iVar2 >> 8;
    iVar2 = sub_080FE124(iVar4 * iVar4 + iVar2 * iVar2);
    uVar3 = (uint)(iVar2 << 0x10) >> 8;
    if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar3);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar3);
      *(int *)(param_1 + 0x5c) = iVar2 * 6;
      *(int *)(param_1 + 0x60) = iVar4 * 6;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  pcVar1 = (char *)(param_1 + 0xb9);
  if (*pcVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  if ((0 < *(int *)(param_1 + 0x60)) &&
     (iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar2), iVar2 < 0)) {
    uVar3 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (((uVar3 & 0x10) == 0) && (*pcVar1 == '\0')) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
      sub_08077C88(param_1);
      return in_lr;
    }
    *pcVar1 = '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

