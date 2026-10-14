// sub_08042D38 at 0x08042D38 (thumb)

undefined4 sub_08042D38(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835e938 + (uint)*(byte *)(param_1 + 0x10) * 0xa8);
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 3) == 0) {
      sub_08017700(param_1,0x2b04);
    }
    else {
      sub_08017700(param_1,0x2b03);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08042d4c_caseD_2:
    sub_080177F4(param_1);
    if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        cVar1 = *(char *)(param_1 + 0xe) + '\x01';
      }
      else {
        cVar1 = '\x01';
      }
LAB_08042e5c:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_08042d4c_caseD_5:
    return in_lr;
  case 2:
    goto switchD_08042d4c_caseD_2;
  case 3:
    sub_08017700(param_1,0x2b05);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(char *)(param_1 + 0xbb) == '\0') {
        *(undefined *)(param_1 + 0xd) = 4;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 6;
      }
    }
    else {
      pbVar4 = (byte *)(param_1 + 0xc0);
      if (*pbVar4 == 0) {
        uVar2 = 9;
      }
      else {
        uVar2 = 10;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      *pbVar4 = *pbVar4 ^ 1;
    }
    cVar1 = '\0';
    goto LAB_08042e5c;
  default:
    goto switchD_08042d4c_caseD_5;
  }
}

