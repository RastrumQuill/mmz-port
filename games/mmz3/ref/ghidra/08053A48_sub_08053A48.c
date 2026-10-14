// sub_08053A48 at 0x08053A48 (thumb)

undefined4 sub_08053A48(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(int *)(param_1 + 0xd8) < *(int *)(DAT_0202f5c0 + 0x54)) {
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
LAB_08053ad0:
        *(undefined *)(param_1 + 0xe) = 3;
        return in_lr;
      }
    }
    else if ((*(byte *)(param_1 + 10) & 0x10) == 0) goto LAB_08053ad0;
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
    uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    break;
  case 3:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x1c00,*(int *)(param_1 + 0x58) + -0x800);
    }
    else {
      iVar5 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x1c00,*(int *)(param_1 + 0x58) + -0x800);
    }
    if (iVar5 != 0) {
      *(undefined *)(param_1 + 0xe) = 9;
      return in_lr;
    }
    break;
  case 4:
    sub_08017700(param_1,0xb004);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x73);
joined_r0x08053cce:
    if (cVar2 != '\x03') {
      return in_lr;
    }
    break;
  case 6:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0x40;
    }
    else {
      uVar3 = 0xffffffc0;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08017700(param_1,0xb005);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar5;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (0x400 < iVar5) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0x400;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x2400,*(int *)(param_1 + 0x58) + -0x800);
    }
    else {
      iVar5 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x2400,*(int *)(param_1 + 0x58) + -0x800);
    }
    if (iVar5 == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x14;
    break;
  case 8:
    iVar5 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0x40 >> 8);
    *(int *)(param_1 + 0x5c) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    break;
  case 9:
    sub_08017700(param_1,0xb00d);
    *(undefined *)(param_1 + 0x12) = 9;
    *(undefined *)(param_1 + 0x13) = 4;
    uVar3 = sub_080A5AF8(param_1);
    *(undefined4 *)(param_1 + 0xcc) = uVar3;
    sub_0800471C(0xcd);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 10:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x73);
    goto joined_r0x08053cce;
  case 0xb:
    sub_08017700(param_1,0xb00e);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xc:
    sub_080177F4(param_1);
    if (*(byte *)(*(int *)(param_1 + 0xcc) + 0xc) < 2) {
      return in_lr;
    }
    break;
  case 0xd:
    sub_08017700(param_1,0xb001);
    *(undefined *)(param_1 + 0x12) = 0xe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xe:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08053a5c_caseD_f;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08053a5c_caseD_f:
  return in_lr;
}

