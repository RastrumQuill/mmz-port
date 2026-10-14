// sub_08053764 at 0x08053764 (thumb)

undefined4 sub_08053764(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(int *)(param_1 + 0xd8) < *(int *)(param_1 + 0x54)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
LAB_080537fe:
        *(undefined *)(param_1 + 0xe) = 3;
        return in_lr;
      }
    }
    else if ((*(byte *)(param_1 + 10) & 0x10) != 0) goto LAB_080537fe;
    break;
  case 1:
    sub_08017700(param_1,0xb003);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar3 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    if (uVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    break;
  case 3:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x1c00,*(int *)(param_1 + 0x58) + -0x800);
    }
    else {
      iVar4 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x1c00,*(int *)(param_1 + 0x58) + -0x800);
    }
    if (iVar4 != 0) {
      *(undefined *)(param_1 + 0xe) = 10;
      return in_lr;
    }
    break;
  case 4:
    uVar5 = 0xb004;
    goto LAB_080538b6;
  case 5:
  case 0xb:
  case 0xf:
  case 0x11:
  case 0x13:
    goto switchD_08053778_caseD_5;
  case 6:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar5 = 0x300;
    }
    else {
      uVar5 = 0xfffffd00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    sub_08017700(param_1,0xb005);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    iVar4 = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x58) = iVar4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = sub_08009E14(iVar6 + 0x1800,iVar4 + -0x800);
    }
    else {
      iVar4 = sub_08009F80(iVar6 + -0x1800,iVar4 + -0x800);
    }
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    }
    sub_080177F4(param_1);
    iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar4 == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    break;
  case 8:
    sub_08017700(param_1,0xb006);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 3;
    return in_lr;
  case 10:
    sub_08017700(param_1,0xb00d);
    *(undefined *)(param_1 + 0x12) = 9;
    *(undefined *)(param_1 + 0x13) = 4;
    sub_0800471C(0xcd);
    sub_080A5A44(param_1);
    goto LAB_080538bc;
  case 0xc:
    sub_08017700(param_1,0xb00e);
    *(undefined *)(param_1 + 0x12) = 7;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xd:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 9;
    break;
  case 0xe:
    uVar5 = 0xb007;
    goto LAB_080538b6;
  case 0x10:
    sub_08017700(param_1,0xb008);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    goto LAB_080538bc;
  case 0x12:
    uVar5 = 0xb009;
LAB_080538b6:
    sub_08017700(param_1,uVar5);
LAB_080538bc:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08053778_caseD_5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 0x14:
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(undefined *)(param_1 + 0xe) = 0xe;
      return in_lr;
    }
    break;
  case 0x15:
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_08053778_caseD_16;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08053778_caseD_16:
  return in_lr;
}

