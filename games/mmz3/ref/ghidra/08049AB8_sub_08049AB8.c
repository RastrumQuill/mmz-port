// sub_08049AB8 at 0x08049AB8 (thumb)

undefined4 sub_08049AB8(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835f10c);
    piVar7 = (int *)(param_1 + 0xb4);
    if (*(int *)(param_1 + 0x54) < *piVar7) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      iVar5 = *piVar7;
      iVar4 = 0x5400;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      iVar5 = *piVar7;
      iVar4 = -0x5400;
    }
    *(int *)(param_1 + 100) = iVar5 + iVar4;
    cVar1 = sub_080FE124(0x666);
    *(char *)(param_1 + 0x12) = cVar1 + '\x10';
    uVar3 = FUN_080fe2f8((iVar5 + iVar4) - *(int *)(param_1 + 0x54),*(undefined *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    uVar6 = sub_080FE124(0x666);
    *(uint *)(param_1 + 0x60) = (uVar6 & 0xffff) * -0x19;
    sub_08017700(param_1,0xa70a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08049acc_caseD_1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x60) + 0x19;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    bVar2 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (bVar2 < 0x15) {
LAB_08049c5a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_08049acc_caseD_8:
    return in_lr;
  case 1:
    goto switchD_08049acc_caseD_1;
  case 2:
    sub_08007390(param_1 + 0x74,&DAT_0835f19c);
    sub_08017700(param_1,0xa720);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x60) + 0x19;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    goto LAB_08049c5a;
  case 4:
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4)) {
      iVar5 = -0x5400;
    }
    else {
      iVar5 = 0x5400;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + iVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08049c5a;
  case 6:
    sub_08007390(param_1 + 0x74,&DAT_0835f1e4);
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar6 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    if (uVar6 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08017700(param_1,0xa721);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08049acc_caseD_8;
  }
}

