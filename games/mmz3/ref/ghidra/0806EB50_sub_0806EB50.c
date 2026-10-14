// sub_0806EB50 at 0x0806EB50 (thumb)

undefined4 sub_0806EB50(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sub_08017700(param_1,0x1d07);
    }
    if (*(char *)(param_1 + 0x10) == '\x03') {
      sub_08017700(param_1,0x1d0d);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x10) == '\x01') || (*(char *)(param_1 + 0x10) == '\x03')) {
    sub_080177F4(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar1 = sub_08009F80(iVar1 + -0x400,*(undefined4 *)(param_1 + 0x58));
    if (iVar1 < 1) goto LAB_0806ebe2;
  }
  else {
    iVar1 = sub_08009E14(iVar1 + 0x400,*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar1) goto LAB_0806ebe2;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
LAB_0806ebe2:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
  if (iVar1 < 0) {
    uVar2 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((uVar2 & 0x10) == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      if (*(int *)(param_1 + 0x28) != 0) {
        puVar3 = (uint *)(*(int *)(param_1 + 0x28) + 0xb4);
        *puVar3 = *puVar3 & ~(1 << *(sbyte *)(param_1 + 0x11));
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 0;
    }
  }
  return in_lr;
}

