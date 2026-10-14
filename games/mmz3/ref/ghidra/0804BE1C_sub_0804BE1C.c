// sub_0804BE1C at 0x0804BE1C (thumb)

undefined4 sub_0804BE1C(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835f730);
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(undefined *)(param_1 + 0x13) = 0;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + 0x3000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804be32_caseD_1:
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x10 >> 8);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0804bff0:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_0804be32_caseD_7:
    return in_lr;
  case 1:
    goto switchD_0804be32_caseD_1;
  case 2:
    sub_0800471C(0x85);
    sub_08017700(param_1,0xa811);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x10 >> 8);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x71) == '\x03') && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08007390(param_1 + 0x74,&DAT_0835f7a8);
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 6;
    *(undefined *)(param_1 + 0x13) = 0x10;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804bff0;
  case 4:
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x10 >> 8);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_18 = -0x1800;
    }
    else {
      local_18 = 0x1800;
    }
    local_18 = *(int *)(param_1 + 0x54) + local_18;
    local_14 = *(int *)(param_1 + 0x58) + -0x2000;
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    sub_080A0E9C(param_1,&local_18,uVar2 * 2 >> 0x11 & 3,uVar3 * 2 >> 0x11 & 3);
    *(undefined *)(param_1 + 0x12) = 6;
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804bff0;
  case 5:
    sub_08017700(param_1,0xa812);
    sub_08007390(param_1 + 0x74,&DAT_0835f730);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_0804bff0;
  default:
    goto switchD_0804be32_caseD_7;
  }
}

