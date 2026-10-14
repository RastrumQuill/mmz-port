// sub_080CB488 at 0x080CB488 (thumb)

undefined4 sub_080CB488(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if (*(char *)(iVar4 + 0xbc) == '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x40;
    break;
  case 1:
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 3) < 2) {
      iVar4 = *(int *)(param_1 + 0xb8) + -0x200;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xb8);
    }
    *(int *)(param_1 + 0x58) = iVar4;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080032EC(0xe4);
    break;
  case 2:
    iVar4 = *(int *)(param_1 + 0x58) + 0x300;
    *(int *)(param_1 + 0x58) = iVar4;
    iVar3 = *(int *)(param_1 + 0xb8) + 0x1800;
    if (iVar4 <= iVar3) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined *)(param_1 + 0x12) = 0x20;
    break;
  case 3:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_080CB210(iVar4,1,*(undefined *)(param_1 + 0x11));
    break;
  case 4:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0x54) + 0x300;
      *(int *)(param_1 + 0x54) = iVar4;
      iVar3 = *(int *)(param_1 + 0xb4) + 0x9000;
      if (iVar4 <= iVar3) {
        return in_lr;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54) + -0x300;
      *(int *)(param_1 + 0x54) = iVar4;
      iVar3 = *(int *)(param_1 + 0xb4) + -0x9000;
      if (iVar3 <= iVar4) {
        return in_lr;
      }
    }
    *(int *)(param_1 + 0x54) = iVar3;
    break;
  default:
    goto switchD_080cb4a0_caseD_5;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080cb4a0_caseD_5:
  return in_lr;
}

