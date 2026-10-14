// sub_08094AB0 at 0x08094AB0 (thumb)

undefined4 sub_08094AB0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080127E4(param_1,0x9801);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08094ac2_caseD_1:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08094b82:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_08094ac2_caseD_8:
    sub_08094370(param_1,0,0x100);
    return in_lr;
  case 1:
    goto switchD_08094ac2_caseD_1;
  case 2:
    sub_080127E4(param_1,0x9802);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_08094ac2_caseD_8;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08094b82;
  case 4:
    sub_080127E4(param_1,0x980d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_08094ac2_caseD_8;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08094b82;
  case 6:
    sub_080127E4(param_1,0x9802);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_08094ac2_caseD_8;
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_08094b82;
  default:
    goto switchD_08094ac2_caseD_8;
  }
}

