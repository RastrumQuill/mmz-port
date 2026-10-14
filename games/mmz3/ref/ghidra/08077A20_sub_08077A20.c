// sub_08077A20 at 0x08077A20 (thumb)

undefined4 sub_08077A20(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  pcVar1 = (char *)(param_1 + 0xb9);
  if (*pcVar1 == '\0') {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = sub_08009F80(iVar3,*(int *)(param_1 + 0x58) + -0x800);
      if (iVar3 < 1) goto LAB_08077a88;
    }
    else {
      iVar3 = sub_08009E14(iVar3,*(int *)(param_1 + 0x58) + -0x800);
      if (-1 < iVar3) goto LAB_08077a88;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  }
LAB_08077a88:
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
  if (iVar3 < 0) {
    uVar2 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (((uVar2 & 0x10) == 0) && (*pcVar1 == '\0')) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    else {
      *pcVar1 = '\x01';
    }
  }
  uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x6000 < uVar2) {
    if (iVar4 != 0) {
      pcVar1 = (char *)(iVar4 + 0xb8);
      *pcVar1 = *pcVar1 + -1;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_080177F4(param_1);
  return in_lr;
}

