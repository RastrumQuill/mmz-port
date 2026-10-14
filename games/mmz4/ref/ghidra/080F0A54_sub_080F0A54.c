// sub_080F0A54 at 0x080F0A54 (thumb)

undefined4 sub_080F0A54(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0x11)) {
  case 0:
    break;
  case 1:
    goto switchD_080f0a68_caseD_1;
  case 2:
    goto switchD_080f0a68_caseD_2;
  case 3:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_080f0a68_caseD_7;
    sub_0801CF00(param_1,0xc304);
    *(undefined *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  case 4:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0xc0;
    if ((((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) ||
        (*(char *)(param_1 + 0x73) == '\x04')) ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'))
    goto switchD_080f0a68_caseD_7;
    goto LAB_080f0ba4;
  case 5:
    sub_0801CF00(param_1,0xc300);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  case 6:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080f0a68_caseD_7;
    uVar2 = 0xc303;
    goto LAB_080f0b9e;
  default:
    goto switchD_080f0a68_caseD_7;
  }
  DAT_0202e3c6 = 0x220;
  DAT_0202ddc6 = 5;
  sub_0801CF00(param_1,0xc300);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0a68_caseD_1:
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    sub_0801CF00(param_1,0xc301);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0a68_caseD_2:
    if (*(char *)(param_1 + 0x12) == '\t') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      uVar2 = 0xc300;
LAB_080f0b9e:
      sub_0801CF00(param_1,uVar2);
LAB_080f0ba4:
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
    }
  }
switchD_080f0a68_caseD_7:
  sub_0801CFF0(param_1);
  return in_lr;
}

