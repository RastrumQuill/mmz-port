// sub_080890C0 at 0x080890C0 (thumb)

undefined4 sub_080890C0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xdd01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080890d2_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08089192:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_080890d2_caseD_8:
    uVar2 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
    sub_080887E0(param_1,uVar2,0x800);
    return in_lr;
  case 1:
    goto switchD_080890d2_caseD_1;
  case 2:
    sub_08017700(param_1,0xdd02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080890d2_caseD_8;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08089192;
  case 4:
    sub_08017700(param_1,0xdd0d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080890d2_caseD_8;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08089192;
  case 6:
    sub_08017700(param_1,0xdd02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080890d2_caseD_8;
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_08089192;
  default:
    goto switchD_080890d2_caseD_8;
  }
}

