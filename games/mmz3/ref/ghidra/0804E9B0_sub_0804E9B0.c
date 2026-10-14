// sub_0804E9B0 at 0x0804E9B0 (thumb)

undefined4 sub_0804E9B0(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xab0c);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x54) < iVar5) {
LAB_0804ea2e:
        sub_08017700(param_1,0xab0b);
        *(undefined *)(param_1 + 0x13) = 1;
      }
    }
    else if (iVar5 < *(int *)(param_1 + 0x54)) goto LAB_0804ea2e;
    *(undefined *)(param_1 + 0x12) = 0x38;
    uVar3 = FUN_080fe2f8(iVar5 - *(int *)(param_1 + 0x54),0x38);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    iVar5 = FUN_080fe2f8(0xc400,0x38);
    *(int *)(param_1 + 0x60) = -iVar5;
    *(undefined *)(param_1 + 0x12) = 0x37;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (*(char *)(param_1 + 0x13) == '\x01') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      cVar1 = '\x04';
    }
    break;
  case 2:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if (uVar4 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 3:
    sub_08017700(param_1,0xab0c);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 5:
    sub_08017700(param_1,0xab0d);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    iVar5 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    if ((0 < iVar5) && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08007390(param_1 + 0x74,&DAT_0835fbd8);
    }
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar5 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x2800,*(undefined4 *)(param_1 + 0x58));
    }
    else {
      iVar5 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x2800,*(undefined4 *)(param_1 + 0x58));
    }
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 7:
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    sub_08017700(param_1,0xab0f);
    uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    sub_0800471C(0xde);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    break;
  default:
    goto switchD_0804e9c4_caseD_9;
  }
  *(char *)(param_1 + 0xe) = cVar1;
switchD_0804e9c4_caseD_9:
  return in_lr;
}

