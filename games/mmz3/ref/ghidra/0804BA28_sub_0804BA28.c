// sub_0804BA28 at 0x0804BA28 (thumb)

undefined4 sub_0804BA28(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 < *(int *)(DAT_0202f5c0 + 0x54)) {
      iVar4 = iVar4 + 0x8000;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      iVar4 = iVar4 + -0x8000;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    *(undefined *)(param_1 + 0x12) = 0x3c;
    uVar3 = FUN_080fe2f8(iVar4 - *(int *)(param_1 + 0x54),0x3c);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    uVar3 = FUN_080fe2f8(0x7e90,0x3c);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x3b;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (*(char *)(param_1 + 0x13) != '\0') {
      cVar1 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar1;
LAB_0804bb20:
      if (cVar1 != '\0') {
        return in_lr;
      }
    }
    break;
  case 2:
    sub_08017700(param_1,0xa805);
    sub_0800471C(0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar4 = *(int *)(param_1 + 0x60) + -0x12;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      goto LAB_0804bb20;
    }
    break;
  case 4:
    if ((*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xd0) + 0x3000) ||
       (*(int *)(param_1 + 0xd0) + 0xe000 < *(int *)(param_1 + 0x54))) {
      uVar2 = 5;
    }
    else {
      uVar2 = 3;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  default:
    goto switchD_0804ba3c_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804ba3c_caseD_5:
  return in_lr;
}

