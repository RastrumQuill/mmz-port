// sub_080BB0BC at 0x080BB0BC (thumb)

undefined4 sub_080BB0BC(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      if (*(int *)(param_1 + 0x60) < 1) {
        return in_lr;
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
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar3;
    if (iVar3 == 0) {
      sub_080BB1B8(param_1);
    }
    else {
      sVar1 = sub_08008CFC(iVar4,*(undefined4 *)(param_1 + 0x58));
      if (sVar1 == 0) {
        sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
        if (sVar1 != 0) {
          return in_lr;
        }
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined4 *)(param_1 + 0x60) = 0x100;
        return in_lr;
      }
      if (*(int *)(param_1 + 0x5c) < 0) {
        uVar2 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      }
      else {
        uVar2 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      }
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      sub_080BB260(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  sub_080BAE74(param_1);
  return in_lr;
}

