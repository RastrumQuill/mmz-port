// sub_080C3B9C at 0x080C3B9C (thumb)

undefined4 sub_080C3B9C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xc400);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc406);
    break;
  case 2:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc402);
    break;
  case 3:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x80;
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc400);
    break;
  case 4:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc406);
    break;
  case 5:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 6:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc402);
    break;
  case 7:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
    uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar2 < 0x1000) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080c3bb0_caseD_8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c3bb0_caseD_8:
  return in_lr;
}

