// sub_080BAFF8 at 0x080BAFF8 (thumb)

undefined4 sub_080BAFF8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar2 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar2;
      if (0x700 < iVar2) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar1 == 0) {
        return in_lr;
      }
      sub_080BB1B8(param_1);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080BAE74(param_1);
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar2;
    if (iVar2 != 0) {
      sVar1 = sub_08008CFC(iVar3,*(int *)(param_1 + 0x58) + 0x800);
      if (sVar1 != 0) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined4 *)(param_1 + 0x60) = 0x80;
      return in_lr;
    }
    sub_080BB1B8(param_1);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  sub_080BAE74(param_1);
  return in_lr;
}

