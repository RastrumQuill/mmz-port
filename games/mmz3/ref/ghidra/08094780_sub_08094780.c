// sub_08094780 at 0x08094780 (thumb)

undefined4 sub_08094780(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x13) = 2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08094792_caseD_1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
LAB_080947fc:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_08094792_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08094792_caseD_1;
  case 2:
    sub_08094554(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                 *(undefined *)(param_1 + 0x10));
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0xe) = 2;
      return in_lr;
    }
    goto LAB_080947fc;
  case 4:
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),9);
    if (cVar1 == '\0') {
      sub_080944D4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                   *(undefined *)(param_1 + 0x10));
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0x12) = 0x78;
    }
  default:
    goto switchD_08094792_caseD_6;
  }
}

