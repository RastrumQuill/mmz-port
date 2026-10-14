// sub_080C60E0 at 0x080C60E0 (thumb)

undefined4 sub_080C60E0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = param_1;
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar3 = *(int *)(param_1 + 0x28), 1 < *(byte *)(iVar3 + 0xc))) {
    sub_080BF834(param_1);
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    break;
  case 1:
    goto switchD_080c610a_caseD_1;
  case 2:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(iVar3 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0x6703);
    sub_080032EC(0x9c);
    *(undefined *)(param_1 + 0x12) = 0x20;
    goto LAB_080c619c;
  case 3:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    uVar2 = 0x9d;
    goto LAB_080c6198;
  case 4:
    sub_080128D4(param_1);
    return in_lr;
  default:
    return in_lr;
  }
  sub_080127E4(param_1,0x6700);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c610a_caseD_1:
  sub_080128D4(param_1);
  if ((*(byte *)(*(int *)(iVar3 + 0x18) + 9) & 1) != 0) {
    sub_080127E4(param_1,0x6702);
    uVar2 = 0x9c;
LAB_080c6198:
    sub_080032EC(uVar2);
LAB_080c619c:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

