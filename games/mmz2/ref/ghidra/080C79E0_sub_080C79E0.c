// sub_080C79E0 at 0x080C79E0 (thumb)

undefined4 sub_080C79E0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xc406);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc402);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 2:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 3:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    uVar2 = 0xc401;
    goto LAB_080c7ada;
  case 4:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 5:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    uVar2 = 0xc406;
LAB_080c7ada:
    sub_080127E4(param_1,uVar2);
    break;
  case 6:
    sub_080128D4(param_1);
  default:
    goto switchD_080c79f4_caseD_7;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c79f4_caseD_7:
  return in_lr;
}

