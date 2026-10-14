// sub_08044E48 at 0x08044E48 (thumb)

undefined4 sub_08044E48(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = sub_0800A104(*(int *)(param_1 + 0x54) + 0x3600,*(int *)(param_1 + 0x58) + -0x800);
      if (iVar3 == *(int *)(param_1 + 0x58)) {
        cVar1 = '\n';
      }
      else {
        cVar1 = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      iVar3 = sub_0800A104(*(int *)(param_1 + 0x54) + -0x3600,*(int *)(param_1 + 0x58) + -0x800);
      if (iVar3 == *(int *)(param_1 + 0x58)) {
        cVar1 = '\n';
      }
      else {
        cVar1 = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    goto LAB_08045080;
  case 1:
    sub_08017700(param_1,0xa507);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08044e5c_caseD_2:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      cVar1 = '\n';
LAB_08045080:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_08044e5c_caseD_3:
    return in_lr;
  case 2:
    goto switchD_08044e5c_caseD_2;
  default:
    goto switchD_08044e5c_caseD_3;
  case 10:
    *(undefined *)(param_1 + 0x12) = 0x46;
    sub_08017700(param_1,0xa508);
    sub_08007390(param_1 + 0x74,&DAT_0835eb10);
    *(undefined *)(param_1 + 0x13) = 0x12;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x13) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08045080;
  case 0xc:
    sub_08017700(param_1,0xa509);
    sub_08007390(param_1 + 0x74,&DAT_0835eb70);
    if ((DAT_02002650 & 0x7f) == 0xd) {
      iVar3 = 0x2d024;
    }
    else {
      iVar3 = 0x2d026;
    }
    (&DAT_02002480)[iVar3] = 1;
    sub_0800471C(0x7d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xd:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08045080;
  case 0xe:
    sub_08017700(param_1,0xa50a);
    if ((DAT_02002650 & 0x7f) == 0xd) {
      iVar3 = 0x2d024;
    }
    else {
      iVar3 = 0x2d026;
    }
    (&DAT_02002480)[iVar3] = 0;
    sub_08007390(param_1 + 0x74,&DAT_0835eb10);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xf:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_08045080;
  }
}

