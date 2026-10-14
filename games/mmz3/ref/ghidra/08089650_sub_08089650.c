// sub_08089650 at 0x08089650 (thumb)

undefined4 sub_08089650(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x10) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08364fdc);
    sub_08017700(param_1,0xdd07);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080887E0(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08089708:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_08017700(param_1,0xdd08);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080887E0(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    cVar1 = sub_080887C0(param_1);
    if (cVar1 != '\0') goto LAB_08089708;
    break;
  case 4:
    sub_08017700(param_1,0xdd0e);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    sub_080887E0(param_1,0,*(undefined4 *)(param_1 + 0x60));
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08089664_caseD_6;
  }
  sub_080177F4(param_1);
switchD_08089664_caseD_6:
  return in_lr;
}

