// sub_0801C7B0 at 0x0801C7B0 (thumb)

undefined8 sub_0801C7B0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    if (*(int *)(param_1 + 0x154) == 0) goto switchD_0801c828_caseD_5;
LAB_0801c7d8:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar2 = 1;
    goto LAB_0801c91c;
  }
  if (*(short *)(DAT_0202f084 + 10) == 0) goto LAB_0801c7d8;
  iVar3 = *(int *)(param_1 + 0x154);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
    *(undefined4 *)(iVar3 + 0xc) = 3;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar3 + 9)] + 0xc);
  }
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 1:
    if ((DAT_0202ebb4 & 0x10) == 0) {
      sVar1 = *(short *)(*(int *)(param_1 + 0xc) + 2);
      if (sVar1 == 1) {
        sub_080032EC(0x1d);
      }
      else if (sVar1 == 2) {
        sub_080032EC(0x1e);
      }
      else {
        sub_080032EC(0x1c);
      }
      uVar2 = sub_080AFD10(0);
      *(undefined4 *)(param_1 + 0x154) = uVar2;
      if (*(short *)(*(int *)(param_1 + 0xc) + 2) != 3) {
        sub_080BD4F4(*DAT_0202ebf0);
      }
    }
    else {
      uVar2 = sub_080BD4F4(*DAT_0202ebf0);
      *(undefined4 *)(param_1 + 0x154) = uVar2;
      sub_080032EC(0x1c);
    }
    break;
  case 2:
  case 6:
    if (*DAT_0202ebf0 == '\0') {
      uVar2 = 4;
      goto LAB_0801c90e;
    }
    if ((DAT_0202ebb4 & 0x10) == 0) {
      uVar2 = 1;
      goto LAB_0801c90e;
    }
    uVar2 = 0;
    goto LAB_0801c918;
  case 3:
    uVar2 = 2;
    goto LAB_0801c90e;
  case 4:
    sub_080032EC(0x2e);
    if (iVar4 != 0) {
      DAT_0202f64c = iVar4;
    }
    uVar2 = 3;
LAB_0801c90e:
    uVar2 = sub_080AFD10(uVar2);
LAB_0801c918:
    *(undefined4 *)(param_1 + 0x154) = uVar2;
  }
switchD_0801c828_caseD_5:
  uVar2 = 0;
LAB_0801c91c:
  return CONCAT44(in_lr,uVar2);
}

