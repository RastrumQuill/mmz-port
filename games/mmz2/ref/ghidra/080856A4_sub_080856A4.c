// sub_080856A4 at 0x080856A4 (thumb)

undefined4 sub_080856A4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x7210);
    uVar3 = 0x300;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0xfffffd00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
    *(undefined *)(param_1 + 0xb9) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  sVar1 = sub_08008CFC(iVar2,*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    if (*(int *)(param_1 + 0x5c) < 0) {
      uVar3 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      uVar3 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    uVar3 = 0x100;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(int *)(param_1 + 0x60) < 0) {
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
    if (sVar1 != 0) {
      iVar2 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar2 + 0x800;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 != 0) {
      uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(undefined *)(param_1 + 0xd) = 0x16;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

