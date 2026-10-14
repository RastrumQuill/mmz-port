// sub_08095214 at 0x08095214 (thumb)

undefined4 sub_08095214(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08006E08(param_1 + 0x74,&DAT_08342b40);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar3 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    if (*(int *)(DAT_0202e130 + 0x54) == *(int *)(param_1 + 0x54) || iVar3 < 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(bool *)(param_1 + 0x4c) = 0 < iVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (0 < iVar3) << 4;
    sub_080943F4(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar3 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x1c0 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x1c0;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    break;
  case 2:
    uVar4 = 0x980a;
    goto LAB_08095344;
  case 3:
  case 7:
    goto switchD_08095228_caseD_3;
  case 4:
    sub_080127E4(param_1,0x980b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08094370(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    cVar2 = sub_08094350(param_1);
    if (cVar2 != '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 6:
    sub_08006E08(param_1 + 0x74,&DAT_08342b10);
    uVar4 = 0x980f;
LAB_08095344:
    sub_080127E4(param_1,uVar4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08095228_caseD_3:
    sub_080943F4(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar3 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x1c0 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x1c0;
    }
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 8:
    sub_080127E4(param_1,0x980b);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_080943F4(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar3 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x1c0 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x1c0;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080128D4(param_1);
    return in_lr;
  default:
    goto switchD_08095228_caseD_a;
  }
  sub_080128D4(param_1);
switchD_08095228_caseD_a:
  return in_lr;
}

