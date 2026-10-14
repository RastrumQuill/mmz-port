// sub_08105CBC at 0x08105CBC (thumb)

undefined4 sub_08105CBC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar3 = sub_08008534(DAT_0202ea30 + -0x7800,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = DAT_0202ea30 + -0x9c00;
    DAT_0202e3c4 = 0x3b1;
    DAT_0202ddc4 = 1;
    sub_0801CF00(param_1,0xc202);
    *(undefined *)(param_1 + 0x25) = 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    iVar2 = *(int *)(param_1 + 0x54) + 0x140;
    *(int *)(param_1 + 0x54) = iVar2;
    if (DAT_0202ea30 + -0x7800 <= iVar2) {
      uVar3 = sub_08008534(iVar2,*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
    if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 100) + -0x4000) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc20e);
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 2:
    sub_0801CFF0(param_1);
    iVar2 = *(int *)(param_1 + 0x54) + 0xc0;
    *(int *)(param_1 + 0x54) = iVar2;
    uVar3 = sub_08008534(iVar2,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 100) + -0x1800) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc201);
    *(undefined *)(param_1 + 0x12) = 6;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 3:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc217);
    *(undefined *)(param_1 + 0x12) = 4;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 4:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc21a);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0x13) = 0xd7;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 5:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x13) = 0xd7;
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 != '\x01') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc20d);
    *(undefined *)(param_1 + 0x12) = 0x2d;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 6:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc20c);
    *(undefined *)(param_1 + 0x12) = 8;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 7:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc218);
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 8:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc215);
    *(undefined *)(param_1 + 0x12) = 4;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 9:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc216);
    *(undefined *)(param_1 + 0x12) = 0x40;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 10:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc215);
    *(undefined *)(param_1 + 0x12) = 8;
    cVar1 = *(char *)(param_1 + 0xd) + -1;
    break;
  default:
    goto switchD_08105cd0_caseD_b;
  }
  *(char *)(param_1 + 0xd) = cVar1;
switchD_08105cd0_caseD_b:
  return in_lr;
}

