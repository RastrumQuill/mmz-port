// sub_080C1FB4 at 0x080C1FB4 (thumb)

undefined4 sub_080C1FB4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 == 0) {
      uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
  }
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sVar1 = sub_08008CFC(iVar2 + -0x1000,*(int *)(param_1 + 0x58) + -0x800);
    if (sVar1 != 0) {
      sub_080032EC(0x41);
      iVar2 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      *(int *)(param_1 + 0x54) = iVar2 + 0x1000;
      uVar3 = sub_080093C4(iVar2 + 0x1000,*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(undefined *)(param_1 + 0x12) = 2;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    sVar1 = sub_08008CFC(iVar2 + 0x1000,*(int *)(param_1 + 0x58) + -0x800);
    if (sVar1 != 0) {
      sub_080032EC(0x41);
      iVar2 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      *(int *)(param_1 + 0x54) = iVar2 + -0x1000;
      uVar3 = sub_080093C4(iVar2 + -0x1000,*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(undefined *)(param_1 + 0x12) = 2;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

