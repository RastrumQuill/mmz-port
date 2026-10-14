// sub_0806E0D8 at 0x0806E0D8 (thumb)

void sub_0806E0D8(int param_1)

{
  char cVar1;
  undefined uVar2;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x100;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    uVar2 = 0x20;
    break;
  case 1:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x100;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
    goto LAB_0806e204;
  case 2:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x100;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    uVar2 = 0x10;
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
    goto LAB_0806e204;
  case 4:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x100;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    uVar2 = 0x20;
    break;
  case 5:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x100;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
    goto LAB_0806e204;
  case 6:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x100;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    uVar2 = 0x10;
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return;
    }
    cVar1 = '\0';
LAB_0806e204:
    *(char *)(param_1 + 0xf) = cVar1;
    uVar2 = 0x40;
    break;
  default:
    goto switchD_0806e0ea_caseD_8;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
switchD_0806e0ea_caseD_8:
  return;
}

