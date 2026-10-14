// sub_0804F67C at 0x0804F67C (thumb)

undefined4 sub_0804F67C(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080040A8(0x4c,0x2e0);
    sub_08017700(param_1,0xab1c);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804f692_caseD_1:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x73) == '\x03') &&
       ((*(char *)(param_1 + 0x12) == '\0' ||
        (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')))
       ) {
LAB_0804f84c:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0804f692_caseD_8:
    return in_lr;
  case 1:
    goto switchD_0804f692_caseD_1;
  case 2:
    sub_08017700(param_1,0xab1e);
    sub_08007390(param_1 + 0x74,&DAT_0835fc20);
    sub_0800471C(0xd9);
    *(undefined *)(param_1 + 0x12) = 2;
    *(undefined *)(param_1 + 0x13) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080041E4(0x4c);
    sub_080177F4(param_1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (iVar3 = sub_080FE390(*(byte *)(param_1 + 0xf) - 1,0x50), iVar3 == 0)) {
      local_1c = *(int *)(param_1 + 0x54) + -0x3000;
      local_18 = *(int *)(param_1 + 0x58) + -0x4000;
      sub_080A30C4(param_1,&local_1c,0);
      local_1c = *(int *)(param_1 + 0x54) + 0x3000;
      sub_080A30C4(param_1,&local_1c,1);
      sub_0800471C(0xda);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    if ((*(char *)(param_1 + 0x13) != '\0') &&
       (iVar3 = sub_080FE390(*(byte *)(param_1 + 0xf) - 1,0x3c), iVar3 == 0)) {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + -0x2a00;
      sub_080A30C4(param_1,&local_14,2);
      sub_080A30C4(param_1,&local_14,3);
      sub_0800471C(0xda);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    }
    if (*(short *)(param_1 + 0x12) != 0) {
      return in_lr;
    }
    uVar2 = 0x14;
LAB_0804f84a:
    *(undefined *)(param_1 + 0x12) = uVar2;
    goto LAB_0804f84c;
  case 4:
    sub_080041E4(0x4c);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    goto LAB_0804f84c;
  case 5:
    sub_08017700(param_1,0xab1f);
    sub_08007390(param_1 + 0x74,&DAT_0835fb90);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    sub_080041E4(0x4c);
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar2 = 0x32;
    goto LAB_0804f84a;
  case 7:
    sub_080041E4(0x4c);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      sub_08004230(0x4c);
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0804f692_caseD_8;
  }
}

