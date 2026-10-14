// sub_080908F8 at 0x080908F8 (thumb)

undefined4 sub_080908F8(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_08365ed8);
    *(undefined *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809090c_caseD_1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08090a1e:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_0809090c_caseD_8:
    return in_lr;
  case 1:
    goto switchD_0809090c_caseD_1;
  case 2:
    sub_08007390(param_1 + 0x74,&DAT_08365ec0);
    sub_08017700(param_1,0x7e16);
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08090a1e;
  case 4:
    sub_08017700(param_1,0x7e18);
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    cVar1 = sub_080FE4D8(uVar2 * 2 >> 0x11,0x14);
    *(char *)(param_1 + 0x12) = cVar1 + '\n';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08090a1e;
  case 6:
    sub_08017700(param_1,0x7e19);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_08090a1e;
  default:
    goto switchD_0809090c_caseD_8;
  }
}

