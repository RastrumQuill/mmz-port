// sub_0804F370 at 0x0804F370 (thumb)

undefined4 sub_0804F370(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xab1c);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xd0) + 0x3200) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else if (*(int *)(param_1 + 0xdc) + -0x3200 < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_0804f386_caseD_f;
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
joined_r0x0804f4a2:
      if (cVar1 != '\0') goto switchD_0804f386_caseD_f;
    }
    goto LAB_0804f620;
  case 2:
    sub_08017700(param_1,0xab1d);
    sub_08007390(param_1 + 0x74,&DAT_0835fc20);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      goto joined_r0x0804f4a2;
    }
    goto LAB_0804f620;
  case 4:
    local_10 = *(int *)(param_1 + 0x58) + -0x2b00;
    local_14 = *(int *)(param_1 + 0x54) + -0x1100;
    iVar2 = sub_0807DF5C(param_1,&local_14,1,1);
    piVar3 = (int *)(param_1 + 200);
    *piVar3 = iVar2;
    local_14 = *(int *)(param_1 + 0x54) + 0x1100;
    iVar2 = sub_0807DF5C(param_1,&local_14,1,0);
    *(int *)(param_1 + 0xcc) = iVar2;
    *(int *)(iVar2 + 0x2c) = *piVar3;
    *(int *)(*piVar3 + 0x2c) = *(int *)(param_1 + 0xcc);
    sub_0800471C(0xd6);
    sub_08017700(param_1,0xab1a);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'))
    goto switchD_0804f386_caseD_f;
    break;
  case 6:
    sub_08017700(param_1,0xab03);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if ((*(char *)(*(int *)(param_1 + 200) + 0xb9) != '\x01') ||
       (*(char *)(*(int *)(param_1 + 0xcc) + 0xb9) != '\x01')) goto switchD_0804f386_caseD_f;
    goto LAB_0804f620;
  case 8:
    sub_08017700(param_1,0xab04);
    sub_08007390(param_1 + 0x74,&DAT_0835fc20);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_0804f386_caseD_f;
    *(undefined *)(*(int *)(param_1 + 200) + 0xb9) = 2;
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0xb9) = 2;
    goto LAB_0804f620;
  case 10:
    sub_080177F4(param_1);
    if ((*(char *)(*(int *)(param_1 + 200) + 0xb9) != '\x03') ||
       (*(char *)(*(int *)(param_1 + 0xcc) + 0xb9) != '\x03')) goto switchD_0804f386_caseD_f;
    sub_08017700(param_1,0xab08);
    sub_080177F4(param_1);
    goto LAB_0804f620;
  case 0xb:
    sub_0800471C(0xd7);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 0xc:
    break;
  case 0xd:
    sub_08017700(param_1,0xab1f);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xe:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0804f386_caseD_f;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0804f620:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_0804f386_caseD_f:
  *(undefined *)(param_1 + 0xe2) = *(undefined *)(param_1 + 0xe);
  return in_lr;
}

