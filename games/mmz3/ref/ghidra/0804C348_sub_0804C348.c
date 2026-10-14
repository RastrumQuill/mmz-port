// sub_0804C348 at 0x0804C348 (thumb)

undefined4 sub_0804C348(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xa802);
    sub_08007390(param_1 + 0x74,&DAT_0835f730);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3 + 0x400;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 2:
    sub_08017700(param_1,0xa803);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0804c664:
      *(char *)(param_1 + 0xe) = cVar1;
    }
    break;
  case 4:
    *(undefined *)(param_1 + 0x13) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08017700(param_1,0xa813);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804c35e_caseD_6:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x71) != '\x05') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x72) != '\x01') {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f7a8);
    iVar4 = *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x58);
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    local_18 = iVar4;
    local_14 = iVar3;
    uVar2 = sub_080FE4D8(uVar2 * 2 >> 0x11,3);
    if (uVar2 == 0) {
      local_14 = iVar3 + -0x800;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) goto LAB_0804c524;
      local_18 = -0x2800;
    }
    else if (uVar2 == 1) {
      local_14 = iVar3 + -0x2000;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_18 = -0x2800;
      }
      else {
LAB_0804c524:
        local_18 = 0x2800;
      }
    }
    else {
      local_14 = iVar3 + -0x3000;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) goto LAB_0804c524;
      local_18 = -0x2800;
    }
    local_18 = iVar4 + local_18;
    sub_080A0F5C(param_1,&local_18,uVar2 & 0xff);
    sub_0800471C(0x87);
    break;
  case 6:
    goto switchD_0804c35e_caseD_6;
  case 7:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f730);
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      cVar1 = '\x05';
    }
    goto LAB_0804c664;
  case 9:
    sub_08017700(param_1,0xa814);
    sub_08007390(param_1 + 0x74,&DAT_0835f730);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 10:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804c664;
  case 0xb:
    sub_08017700(param_1,0xa801);
    sub_08007390(param_1 + 0x74,&DAT_0835f730);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xc:
    iVar4 = *(int *)(param_1 + 0xd4) + -0x4800;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + ((iVar4 - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    sub_080177F4(param_1);
    iVar3 = iVar4 - *(int *)(param_1 + 0x58);
    if (iVar3 < 1) {
      iVar3 = *(int *)(param_1 + 0x58) - iVar4;
    }
    if (0x3ff < iVar3) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0804c664;
  case 0xd:
    sub_08017700(param_1,0xa802);
    sub_08007390(param_1 + 0x74,&DAT_0835f730);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xe:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_0804c664;
  default:
    break;
  }
  return in_lr;
}

