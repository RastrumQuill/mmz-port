// sub_080EF738 at 0x080EF738 (thumb)

undefined4 sub_080EF738(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0x11)) {
  case 0:
    DAT_0202e3c4 = 0x294;
    DAT_0202ddc4 = 7;
    sub_0801CF00(param_1,0xc202);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_080ef74c_caseD_10;
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x54) + 0x180;
    *(int *)(param_1 + 0x54) = iVar2;
    if (iVar2 < 0x1b0001) goto switchD_080ef74c_caseD_10;
    sub_0801CF00(param_1,0xc200);
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef74c_caseD_10;
    sub_0801CF00(param_1,0xc201);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef74c_caseD_10;
    uVar3 = 0xc206;
    goto LAB_080ef96a;
  case 5:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_080ef74c_caseD_10;
    sub_0801CF00(param_1,0xc200);
    *(undefined *)(param_1 + 0x12) = 4;
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef74c_caseD_10;
    sub_0801CF00(param_1,0xc201);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef74c_caseD_10;
    uVar3 = 0xc200;
    goto LAB_080ef96a;
  case 8:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) goto switchD_080ef74c_caseD_10;
    uVar3 = 0xc206;
    goto LAB_080ef96a;
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) goto switchD_080ef74c_caseD_10;
    sub_0801CF00(param_1,0xc200);
    *(undefined *)(param_1 + 0x12) = 4;
    break;
  case 10:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef74c_caseD_10;
    sub_0801CF00(param_1,0xc201);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 0xb:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef74c_caseD_10;
    uVar3 = 0xc200;
    goto LAB_080ef96a;
  case 0xc:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) goto switchD_080ef74c_caseD_10;
    sub_0801CF00(param_1,0xc201);
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x12) == '\t') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef74c_caseD_10;
    sub_0801CF00(param_1,0xc200);
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 0xe:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080ef74c_caseD_10;
    uVar3 = 0xc20e;
LAB_080ef96a:
    sub_0801CF00(param_1,uVar3);
    break;
  case 0xf:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
  default:
    goto switchD_080ef74c_caseD_10;
  }
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080ef74c_caseD_10:
  sub_0801CFF0(param_1);
  return in_lr;
}

