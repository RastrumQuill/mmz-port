// sub_080C1564 at 0x080C1564 (thumb)

undefined4 sub_080C1564(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080127E4(param_1,0x1d05);
    if (*(char *)(param_1 + 0xd) == '\x19') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
    }
    *(undefined *)(iVar3 + 0xc1) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080c157a_caseD_1:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_0809D474(param_1,0,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080032EC(0x38);
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080c16b0:
      *(char *)(param_1 + 0xe) = cVar2;
    }
switchD_080c157a_caseD_7:
    return in_lr;
  case 1:
    goto switchD_080c157a_caseD_1;
  case 2:
    sub_080127E4(param_1,0x1d07);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_080c16b0;
  case 4:
    sub_080127E4(param_1,0x1d08);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_080c16b0;
  case 6:
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfe;
    if (*(char *)(param_1 + 0xd) == '\x19') {
      *(byte *)(param_1 + 10) = bVar1 & 0xee;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
    }
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_080c16b0;
  default:
    goto switchD_080c157a_caseD_7;
  }
}

