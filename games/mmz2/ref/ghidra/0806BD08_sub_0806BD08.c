// sub_0806BD08 at 0x0806BD08 (thumb)

undefined4 sub_0806BD08(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_0806bda2;
  iVar2 = sub_080EF150(*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54),0x24);
  *(int *)(param_1 + 0x5c) = iVar2;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = -iVar2;
  }
  uVar4 = 0x800;
  if (0x800 < iVar3) {
    if (iVar2 < 0) {
      uVar4 = 0xfffff800;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  if (((*(byte *)(param_1 + 10) & 0x10) == 0) || (-1 < *(int *)(param_1 + 0x5c))) {
    if (*(char *)(param_1 + 0xbd) != '\0') {
      uVar4 = 0x81c;
      goto LAB_0806bd84;
    }
    sub_080127E4(param_1,0x81f);
  }
  else {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      uVar4 = 0x80e;
    }
    else {
      uVar4 = 0x806;
    }
LAB_0806bd84:
    sub_080127E4(param_1,uVar4);
  }
  *(undefined *)(param_1 + 0xf) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0806bda2:
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar3 = *(int *)(param_1 + 0x54) + -0xc00;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54) + 0xc00;
    }
    sVar1 = sub_08008CFC(iVar3,*(undefined4 *)(param_1 + 0x58));
    if (sVar1 != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    if (*(int *)(param_1 + 0x60) < 1) {
      sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x2000);
      if (sVar1 != 0) {
        *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      }
    }
    else {
      sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar1 != 0) {
        uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar4;
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined *)(param_1 + 0xd) = 0xd;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}

