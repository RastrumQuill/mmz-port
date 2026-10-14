// sub_08023018 at 0x08023018 (thumb)

undefined8 sub_08023018(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    if (*(int *)(param_1 + 0x154) == 0) goto switchD_0802308e_caseD_5;
LAB_08023040:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar1 = 1;
    goto LAB_08023176;
  }
  if (*(short *)(DAT_0203062c + 10) == 0) goto LAB_08023040;
  iVar2 = *(int *)(param_1 + 0x154);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(iVar2 + 9)] + 0xc);
  }
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 1:
    if ((DAT_02030104 & 0x20) != 0) {
      uVar1 = sub_080BDF2C(*DAT_02030160);
      goto LAB_08023148;
    }
    if (*(short *)(*(int *)(param_1 + 0xc) + 2) == 2) {
      sub_0800471C(0x1e);
    }
    else {
      sub_0800471C(0x1d);
    }
    uVar1 = sub_080B5144(0);
    *(undefined4 *)(param_1 + 0x154) = uVar1;
    if (*(short *)(*(int *)(param_1 + 0xc) + 2) != 3) {
      sub_080BDF2C(*DAT_02030160);
    }
    break;
  case 2:
  case 6:
    if (*DAT_02030160 == '\0') {
      uVar1 = 4;
      goto LAB_08023168;
    }
    if ((DAT_02030104 & 0x20) == 0) {
      uVar1 = 1;
      goto LAB_08023168;
    }
    uVar1 = 0;
    goto LAB_08023172;
  case 3:
    uVar1 = sub_080B5144(2);
LAB_08023148:
    *(undefined4 *)(param_1 + 0x154) = uVar1;
    sub_0800471C(0x1d);
    break;
  case 4:
    sub_0800471C(0x2e);
    if (iVar3 != 0) {
      DAT_02030bfc = iVar3;
    }
    uVar1 = 3;
LAB_08023168:
    uVar1 = sub_080B5144(uVar1);
LAB_08023172:
    *(undefined4 *)(param_1 + 0x154) = uVar1;
  }
switchD_0802308e_caseD_5:
  uVar1 = 0;
LAB_08023176:
  return CONCAT44(in_lr,uVar1);
}

