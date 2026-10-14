// sub_0804E600 at 0x0804E600 (thumb)

undefined4 sub_0804E600(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xf) == '\0') || (*(char *)(param_1 + 0xf) == '\x02')) {
    switch(*(undefined *)(param_1 + 0xe)) {
    case 0:
      sub_08017700(param_1,0xab0c);
      sub_08007390(param_1 + 0x74,&DAT_0835fb90);
      iVar6 = *(int *)(DAT_0202f5c0 + 0x54);
      if (*(char *)(param_1 + 0xf) != '\x02') {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          if (*(int *)(param_1 + 0x54) < iVar6) goto LAB_0804e836;
          goto LAB_0804e842;
        }
        goto LAB_0804e830;
      }
      uVar2 = 0;
LAB_0804e840:
      *(undefined *)(param_1 + 0x13) = uVar2;
      goto LAB_0804e842;
    case 1:
      goto switchD_0804e7b8_caseD_1;
    case 2:
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      uVar5 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
      if (uVar5 == 0) goto LAB_0804e6d8;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_0804e6de;
    case 3:
      goto switchD_0804e7b8_caseD_3;
    case 4:
      goto switchD_0804e7b8_caseD_4;
    case 5:
      goto switchD_0804e620_caseD_5;
    case 6:
      goto switchD_0804e620_caseD_6;
    case 7:
      sub_08007390(param_1 + 0x74,&DAT_0835fb90);
      sub_08017700(param_1,0xab0f);
      uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      sub_0800471C(0xde);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 8:
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    default:
      goto switchD_0804e7b8_caseD_9;
    }
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xab0c);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    iVar6 = *(int *)(DAT_0202f5c0 + 0x54);
    if (*(int *)(param_1 + 0x54) < iVar6) {
      iVar6 = iVar6 + -0x8700;
    }
    else {
      iVar6 = iVar6 + 0x8700;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x54) < iVar6) {
LAB_0804e836:
        sub_08017700(param_1,0xab0b);
        uVar2 = 1;
        goto LAB_0804e840;
      }
    }
    else {
LAB_0804e830:
      if (iVar6 < *(int *)(param_1 + 0x54)) goto LAB_0804e836;
    }
LAB_0804e842:
    *(undefined *)(param_1 + 0x12) = 0x38;
    uVar4 = FUN_080fe2f8(iVar6 - *(int *)(param_1 + 0x54),0x38);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar6 = FUN_080fe2f8(0xc400,0x38);
    *(int *)(param_1 + 0x60) = -iVar6;
    *(undefined *)(param_1 + 0x12) = 0x37;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804e7b8_caseD_1:
    if (*(char *)(param_1 + 0x13) == '\x01') {
LAB_0804e944:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      *(undefined *)(param_1 + 0xe) = 4;
    }
switchD_0804e7b8_caseD_9:
    return in_lr;
  case 1:
    goto switchD_0804e7b8_caseD_1;
  case 2:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar5 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if (uVar5 == 0) {
LAB_0804e6d8:
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
LAB_0804e6de:
    *(byte *)(param_1 + 10) = bVar1;
    goto LAB_0804e944;
  case 3:
switchD_0804e7b8_caseD_3:
    sub_08017700(param_1,0xab0c);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
switchD_0804e7b8_caseD_4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_0804e944;
  case 5:
    sub_08017700(param_1,0xab0d);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    iVar6 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar6;
    iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar7;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    if (*(int *)(param_1 + 0x5c) < 1) {
LAB_0804e900:
      iVar6 = sub_08009F80(iVar7 + -0x2800);
    }
    else {
      iVar6 = sub_08009E14(iVar7 + 0x2800);
    }
LAB_0804e908:
    if (iVar6 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    }
    if ((0 < *(int *)(param_1 + 0x60)) && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08007390(param_1 + 0x74,&DAT_0835fbd8);
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0')) {
      return in_lr;
    }
    goto LAB_0804e944;
  case 7:
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    sub_08017700(param_1,0xab0f);
    uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    sub_0800471C(0xde);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 2;
    }
  default:
    goto switchD_0804e7b8_caseD_9;
  }
switchD_0804e620_caseD_5:
  sub_08017700(param_1,0xab0d);
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804e620_caseD_6:
  iVar6 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar6;
  iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar7;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
  if (*(int *)(param_1 + 0x5c) < 1) goto LAB_0804e900;
  iVar6 = sub_08009E14(iVar7 + 0x2800);
  goto LAB_0804e908;
}

