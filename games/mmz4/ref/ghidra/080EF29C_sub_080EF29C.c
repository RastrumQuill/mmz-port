// sub_080EF29C at 0x080EF29C (thumb)

undefined4 sub_080EF29C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0x11)) {
  case 0:
    DAT_0202e3c6 = 0x1e0;
    DAT_0202ddc6 = 4;
    sub_0801CF00(param_1,0xc303);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_080ef2b0_caseD_12;
    *(undefined *)(param_1 + 0x12) = 8;
    uVar2 = 0xc300;
    break;
  case 2:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef2b0_caseD_12;
    uVar2 = 0xc302;
    break;
  case 3:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_080ef2b0_caseD_12;
    *(undefined *)(param_1 + 0x12) = 8;
    uVar2 = 0xc300;
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef2b0_caseD_12;
    uVar2 = 0xc301;
    break;
  case 5:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) goto switchD_080ef2b0_caseD_12;
    *(undefined *)(param_1 + 0x12) = 8;
    uVar2 = 0xc300;
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef2b0_caseD_12;
    uVar2 = 0xc303;
    break;
  case 7:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) goto switchD_080ef2b0_caseD_12;
    *(undefined *)(param_1 + 0x12) = 8;
    uVar2 = 0xc300;
    break;
  case 8:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef2b0_caseD_12;
    sub_0801CF00(param_1,0xc301);
    *(undefined *)(param_1 + 0x12) = 0x10;
    goto LAB_080ef51c;
  case 9:
    if (*(char *)(param_1 + 0x12) == '\t') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef2b0_caseD_12;
    uVar2 = 0xc300;
    break;
  case 10:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) goto switchD_080ef2b0_caseD_12;
    *(undefined *)(param_1 + 0x12) = 8;
    uVar2 = 0xc301;
    break;
  case 0xb:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef2b0_caseD_12;
    sub_0801CF00(param_1,0xc300);
    *(undefined *)(param_1 + 0x12) = 4;
    goto LAB_080ef51c;
  case 0xc:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef2b0_caseD_12;
    uVar2 = 0xc303;
    break;
  case 0xd:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x20) == 0) goto switchD_080ef2b0_caseD_12;
    *(undefined *)(param_1 + 0x12) = 8;
    uVar2 = 0xc300;
    break;
  case 0xe:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef2b0_caseD_12;
    sub_0801CF00(param_1,0xc301);
    *(undefined *)(param_1 + 0x12) = 0x10;
    goto LAB_080ef51c;
  case 0xf:
    if (*(char *)(param_1 + 0x12) == '\t') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef2b0_caseD_12;
    sub_0801CF00(param_1,0xc300);
    *(undefined *)(param_1 + 0x12) = 0x10;
    goto LAB_080ef51c;
  case 0x10:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef2b0_caseD_12;
    uVar2 = 0xc304;
    break;
  case 0x11:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
  default:
    goto switchD_080ef2b0_caseD_12;
  }
  sub_0801CF00(param_1,uVar2);
LAB_080ef51c:
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080ef2b0_caseD_12:
  sub_0801CFF0(param_1);
  return in_lr;
}

