// sub_0804DDC8 at 0x0804DDC8 (thumb)

undefined4 sub_0804DDC8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 1:
    sub_080127E4(param_1,0x310b);
    sub_080032EC(0xfa);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x71) == '\a')) {
      sub_080032EC(0xfa);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x10;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 3:
    cVar1 = sub_08002EA0(8);
    if (cVar1 != '\x03') {
      return in_lr;
    }
    sub_08002EF0(8);
    *(undefined4 *)(param_1 + 0x60) = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 4:
    sub_080128D4(param_1);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    iVar2 = *(int *)(param_1 + 0x58) + iVar2;
    *(int *)(param_1 + 0x58) = iVar2;
    if (iVar2 <= *(int *)(param_1 + 0xb8)) {
      return in_lr;
    }
    sub_080032EC(0x46);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 5:
    sub_080127E4(param_1,0x3100);
    sub_08015518(1,param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 4;
    cVar1 = '\0';
    break;
  default:
    goto switchD_0804dddc_caseD_7;
  }
  *(char *)(param_1 + 0xe) = cVar1;
switchD_0804dddc_caseD_7:
  return in_lr;
}

