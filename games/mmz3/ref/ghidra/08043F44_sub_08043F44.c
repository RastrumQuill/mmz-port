// sub_08043F44 at 0x08043F44 (thumb)

undefined4 sub_08043F44(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) + -0x1200;
    iVar3 = sub_0800A1F4(iVar5,*(int *)(param_1 + 0x58) + -0x5000);
    iVar6 = 0x7fffffff;
    if ((iVar3 < 0x7fffffff) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar3)) {
      iVar6 = iVar3;
    }
    iVar7 = *(int *)(DAT_0202f5c0 + 0x54) + 0x1200;
    iVar3 = sub_0800A1F4(iVar7,*(int *)(param_1 + 0x58) + -0x5000);
    if ((iVar3 < iVar6) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar3)) {
      iVar5 = iVar7;
      iVar6 = iVar3;
    }
    iVar7 = *(int *)(DAT_0202f5c0 + 0x54);
    iVar3 = sub_0800A1F4(iVar7,*(int *)(param_1 + 0x58) + -0x5000);
    if ((iVar3 < iVar6) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar3)) {
      iVar5 = iVar7;
      iVar6 = iVar3;
    }
    *(undefined *)(param_1 + 0x12) = 0x50;
    uVar4 = FUN_080fe2f8(iVar5 - *(int *)(param_1 + 0x54),0x50);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar5 = FUN_080fe2f8(0xc800 - (iVar6 - *(int *)(param_1 + 0x58)),0x50);
    *(int *)(param_1 + 0x60) = -iVar5;
    *(undefined *)(param_1 + 0x12) = 0x4f;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08043f58_caseD_1:
    sub_08045C4C(param_1);
    if ((*(char *)(param_1 + 0x13) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar2, cVar2 == '\0')) {
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08044230:
      *(char *)(param_1 + 0xe) = cVar2;
    }
switchD_08043f58_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08043f58_caseD_1;
  case 2:
    sub_08017700(param_1,0xa501);
    sub_08007390(param_1 + 0x74,&DAT_0835eb40);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    bVar1 = false;
    iVar6 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar6;
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    iVar5 = sub_08009BE4(iVar5 + 0x1200);
    if (iVar5 != 0) {
      iVar6 = iVar5;
      if (iVar5 < 0) {
        iVar6 = -iVar5;
      }
      if (iVar6 < 0x800) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
        bVar1 = true;
      }
    }
    iVar5 = sub_08009BE4(*(int *)(param_1 + 0x54) + -0x1200,*(undefined4 *)(param_1 + 0x58));
    if (iVar5 != 0) {
      iVar6 = iVar5;
      if (iVar5 < 0) {
        iVar6 = -iVar5;
      }
      if (iVar6 < 0x800) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
        bVar1 = true;
      }
    }
    iVar5 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar5 != 0) {
      iVar6 = iVar5;
      if (iVar5 < 0) {
        iVar6 = -iVar5;
      }
      if (iVar6 < 0x800) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
        bVar1 = true;
      }
    }
    iVar5 = sub_08009ED0(*(int *)(param_1 + 0x54) + 0x1200,*(undefined4 *)(param_1 + 0x58));
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    }
    sub_0800A04C(*(int *)(param_1 + 0x54) + -0x1200,*(undefined4 *)(param_1 + 0x58));
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    }
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5afe) &&
       (0 < *(int *)(param_1 + 0x60))) {
      sub_08017700(param_1);
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      if (!bVar1) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    }
    goto LAB_08044230;
  case 4:
    sub_08017700(param_1,0xa503);
    sub_08007390(param_1 + 0x74,&DAT_0835eb10);
    iVar6 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
    iVar5 = 0x7fffffff;
    if ((iVar6 < 0x7fffffff) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar6)) {
      *(int *)(param_1 + 0x58) = iVar6;
      iVar5 = iVar6;
    }
    iVar6 = sub_0800A1F4(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + -0x1000);
    if ((iVar6 < iVar5) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar6)) {
      *(int *)(param_1 + 0x58) = iVar6;
      iVar5 = iVar6;
    }
    iVar6 = sub_0800A1F4(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + -0x1000);
    if ((iVar6 < iVar5) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar6)) {
      *(int *)(param_1 + 0x58) = iVar6;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_08044230;
  default:
    goto switchD_08043f58_caseD_6;
  }
}

