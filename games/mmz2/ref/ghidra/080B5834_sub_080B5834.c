// sub_080B5834 at 0x080B5834 (thumb)

undefined4 sub_080B5834(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == -1) {
LAB_080b58e6:
    sub_080B5ACC(param_1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B5814(param_1);
  }
  else {
    sub_080128D4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar5 = -0xc00;
      }
      else {
        iVar5 = 0xc00;
      }
      uVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + iVar5,*(int *)(param_1 + 0x58) + 0x800);
      uVar3 = uVar3 & 0xffff;
      if (uVar3 != 0) {
        if (*(byte *)(param_1 + 0x12) < 0x10) {
          return in_lr;
        }
        goto LAB_080b58e6;
      }
    }
    else {
      if (1 < bVar1) {
        if (bVar1 != 2) {
          return in_lr;
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        iVar5 = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x60) = iVar5;
        if (0x700 < iVar5) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar5 = -0xc00;
        }
        else {
          iVar5 = 0xc00;
        }
        sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + iVar5,*(int *)(param_1 + 0x58) + -0x400);
        if (sVar2 == 0) {
          return in_lr;
        }
        sub_080B5ACC(param_1);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
        sub_080B5814(param_1);
        return in_lr;
      }
      if (bVar1 != 0) {
        return in_lr;
      }
      iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar5;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar4 = -0xc00;
      }
      else {
        iVar4 = 0xc00;
      }
      uVar3 = sub_08008CFC(iVar5 + iVar4,*(int *)(param_1 + 0x58) + 0x800);
      uVar3 = uVar3 & 0xffff;
      if (uVar3 != 0) {
        if (*(int *)(param_1 + 0x5c) != 0) {
          return in_lr;
        }
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        return in_lr;
      }
    }
    *(uint *)(param_1 + 0x5c) = uVar3;
    *(uint *)(param_1 + 0x60) = uVar3;
    *(undefined *)(param_1 + 0xd) = 2;
  }
  return in_lr;
}

