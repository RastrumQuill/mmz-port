// sub_080898B0 at 0x080898B0 (thumb)

undefined4 sub_080898B0(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0836500c);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    bVar1 = 0 < *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sub_08088864(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar4 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x1c0 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x1c0;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') {
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    break;
  case 2:
    uVar5 = 0xdd0a;
    goto LAB_080899e4;
  case 3:
  case 7:
    goto switchD_080898c4_caseD_3;
  case 4:
    sub_08017700(param_1,0xdd0b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080887E0(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    cVar3 = sub_080887C0(param_1);
    if (cVar3 != '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 6:
    sub_08007390(param_1 + 0x74,&DAT_08364fdc);
    uVar5 = 0xdd0f;
LAB_080899e4:
    sub_08017700(param_1,uVar5);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080898c4_caseD_3:
    sub_08088864(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar4 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x1c0 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x1c0;
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 8:
    sub_08017700(param_1,0xdd0b);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_08088864(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar4 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x1c0 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x1c0;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080177F4(param_1);
    return in_lr;
  default:
    goto switchD_080898c4_caseD_a;
  }
  sub_080177F4(param_1);
switchD_080898c4_caseD_a:
  return in_lr;
}

