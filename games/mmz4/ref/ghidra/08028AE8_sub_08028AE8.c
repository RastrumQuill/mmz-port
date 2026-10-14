// sub_08028AE8 at 0x08028AE8 (thumb)

undefined8 sub_08028AE8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    if (*(int *)(param_1 + 0x154) == 0) goto switchD_08028b60_caseD_5;
LAB_08028b10:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar2 = 1;
    goto LAB_08028c56;
  }
  if (*(short *)(DAT_0202ed9c + 10) == 0) goto LAB_08028b10;
  iVar3 = *(int *)(param_1 + 0x154);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
    *(undefined4 *)(iVar3 + 0xc) = 3;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(iVar3 + 9)] + 0xc);
  }
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 1:
    if ((DAT_0202e8b4 & 0x20) != 0) {
      uVar2 = sub_080D13C8(*DAT_0202e8e0);
      goto LAB_08028c28;
    }
    sVar1 = *(short *)(*(int *)(param_1 + 0xc) + 2);
    if (sVar1 == 1) {
      sub_08002B10(0x1aa);
    }
    else if (sVar1 == 2) {
      sub_08002B10(0x1e);
    }
    else {
      sub_08002B10(0x1d);
    }
    uVar2 = sub_080D3AC8(0);
    *(undefined4 *)(param_1 + 0x154) = uVar2;
    if (*(short *)(*(int *)(param_1 + 0xc) + 2) != 3) {
      sub_080D13C8(*DAT_0202e8e0);
    }
    break;
  case 2:
  case 6:
    if (*DAT_0202e8e0 == '\0') {
      uVar2 = 4;
      goto LAB_08028c48;
    }
    if ((DAT_0202e8b4 & 0x20) == 0) {
      uVar2 = 1;
      goto LAB_08028c48;
    }
    uVar2 = 0;
    goto LAB_08028c52;
  case 3:
    uVar2 = sub_080D3AC8(2);
LAB_08028c28:
    *(undefined4 *)(param_1 + 0x154) = uVar2;
    sub_08002B10(0x1d);
    break;
  case 4:
    sub_08002B10(0x2e);
    if (iVar4 != 0) {
      DAT_0202f36c = iVar4;
    }
    uVar2 = 3;
LAB_08028c48:
    uVar2 = sub_080D3AC8(uVar2);
LAB_08028c52:
    *(undefined4 *)(param_1 + 0x154) = uVar2;
  }
switchD_08028b60_caseD_5:
  uVar2 = 0;
LAB_08028c56:
  return CONCAT44(in_lr,uVar2);
}

