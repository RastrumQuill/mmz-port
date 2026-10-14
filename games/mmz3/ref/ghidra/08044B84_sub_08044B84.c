// sub_08044B84 at 0x08044B84 (thumb)

undefined4 sub_08044B84(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    piVar5 = (int *)(param_1 + 0xdc);
    iVar8 = *(int *)(DAT_0202f5c0 + 0x54);
    iVar7 = iVar8 - *piVar5;
    if (iVar7 < 1) {
      iVar7 = *piVar5 - iVar8;
    }
    piVar3 = (int *)(param_1 + 0xe0);
    iVar6 = iVar8 - *piVar3;
    if (iVar6 < 1) {
      if (*piVar3 - iVar8 < iVar7) goto LAB_08044bf2;
LAB_08044c26:
      *(int *)(param_1 + 0x54) = *piVar5;
      *(int *)(param_1 + 100) = *piVar3 + -0x4000;
      *(undefined *)(param_1 + 0xca) = 3;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      if (iVar7 <= iVar6) goto LAB_08044c26;
LAB_08044bf2:
      *(int *)(param_1 + 0x54) = *piVar3;
      *(int *)(param_1 + 100) = *piVar5 + 0x4000;
      *(undefined *)(param_1 + 0xca) = 1;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    iVar7 = *(int *)(param_1 + 0xd8) - (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 1);
    *(int *)(param_1 + 0x58) = iVar7 + 0x2400;
    *(undefined4 *)(param_1 + 0x68) = 0x7fffffff;
    iVar7 = sub_0800A1F4(*(undefined4 *)(param_1 + 100),iVar7 + -0x2c00);
    if ((iVar7 < *(int *)(param_1 + 0x68)) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar7)) {
      *(int *)(param_1 + 0x68) = iVar7;
    }
    iVar7 = sub_0800A1F4(*(int *)(param_1 + 100) + 0x1200,*(int *)(param_1 + 0x58) + -0x5000);
    if ((iVar7 < *(int *)(param_1 + 0x68)) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar7)) {
      *(int *)(param_1 + 0x68) = iVar7;
    }
    iVar7 = sub_0800A1F4(*(int *)(param_1 + 100) + -0x1200,*(int *)(param_1 + 0x58) + -0x5000);
    if ((iVar7 < *(int *)(param_1 + 0x68)) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar7)) {
      *(int *)(param_1 + 0x68) = iVar7;
    }
    *(undefined *)(param_1 + 0x12) = 0x50;
    uVar4 = FUN_080fe2f8(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54),0x50);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar7 = FUN_080fe2f8(0xc800 - (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)),0x50);
    *(int *)(param_1 + 0x60) = -iVar7;
    *(undefined *)(param_1 + 0x12) = 0x4f;
    *(undefined *)(param_1 + 0x13) = 0x4f;
    sub_0800471C(0x7a);
    sub_08017700(param_1,0xa512);
    sub_08007390(param_1 + 0x74,&DAT_0835eaf8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar7 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5aed) {
      if (*(byte *)(param_1 + 0x12) < *(byte *)(param_1 + 0x13) >> 1) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_08007390(param_1 + 0x74,&DAT_0835ec60);
        sub_08017700(param_1,0xa513);
      }
      else {
        if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xfe;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 1;
        }
        *(byte *)(param_1 + 10) = bVar1;
      }
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    break;
  case 2:
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_08017700(param_1,0xa502);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar7 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 4:
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

