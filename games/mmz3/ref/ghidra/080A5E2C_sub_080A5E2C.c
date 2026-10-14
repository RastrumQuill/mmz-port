// sub_080A5E2C at 0x080A5E2C (thumb)

undefined4 sub_080A5E2C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (((1 < *(byte *)(iVar3 + 0xc)) || (*(int *)(iVar3 + 0xc0) != 0)) ||
     (*(char *)(iVar3 + 0xd) == '\v')) goto LAB_080a6170;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_083683e4,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_08017700(param_1,0xb103);
    if (*(byte *)(param_1 + 0xb6) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar5 = *(byte *)(param_1 + 0xb6) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
    *(undefined *)(param_1 + 0x13) = 5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    break;
  case 2:
    sub_08017700(param_1,0xb104);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
joined_r0x080a600a:
      if (cVar2 != '\0') {
        return in_lr;
      }
    }
    goto LAB_080a60c0;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0xff;
    sub_08007390(param_1 + 0x74,&DAT_083683e4);
    uVar5 = 0;
    piVar4 = &DAT_083684ec;
    do {
      local_20 = *piVar4 + *(int *)(param_1 + 0x54);
      local_1c = piVar4[1] + *(int *)(param_1 + 0x58);
      sub_080A59D4(param_1,&local_20,uVar5 & 0xff,*(undefined *)(param_1 + 0xb5));
      piVar4 = piVar4 + 2;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 5);
    *(undefined *)(param_1 + 0xb4) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if (*(char *)(param_1 + 0xb4) == '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x13) = 0;
    goto LAB_080a60c0;
  case 6:
    if ((*(char *)(param_1 + 0x13) == '\0') && (*(char *)(param_1 + 0xb4) == '\x05')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_0800471C(0xcc);
    }
    cVar2 = *(char *)(param_1 + 0xb4);
    goto joined_r0x080a600a;
  case 7:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
    *(undefined *)(param_1 + 0x13) = 5;
    sub_08017700(param_1,0xb103);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_080177F4(param_1);
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x71);
    if (((((cVar2 == '\x01') || (cVar2 == '\x05')) || (cVar2 == '\t')) ||
        ((cVar2 == '\r' || (cVar2 == '\x11')))) && ((byte)(*(char *)(param_1 + 0x72) - 1U) < 2)) {
      sub_0800471C(0xcb);
    }
    cVar2 = *(char *)(param_1 + 0x71);
    goto LAB_080a6078;
  case 9:
    sub_08017700(param_1,0xb105);
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(undefined *)(param_1 + 0x13) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 10:
    sub_080177F4(param_1);
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x71);
    if ((((cVar2 == '\x01') || (cVar2 == '\x05')) ||
        ((cVar2 == '\t' || ((cVar2 == '\r' || (cVar2 == '\x11')))))) &&
       ((byte)(*(char *)(param_1 + 0x72) - 1U) < 2)) {
      sub_08007390(param_1 + 0x74,&DAT_083683e4 + (uint)*(byte *)(param_1 + 0x13) * 0x18);
      bVar1 = *(byte *)(param_1 + 0x13);
      if (bVar1 < 5) {
        if (bVar1 == 0) goto LAB_080a6166;
        cVar2 = bVar1 + 1;
      }
      else {
        cVar2 = '\0';
      }
      *(char *)(param_1 + 0x13) = cVar2;
    }
LAB_080a6166:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
LAB_080a6170:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  case 0xb:
    sub_08017700(param_1,0xb105);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xc:
    sub_080177F4(param_1);
    goto LAB_080a6166;
  default:
    goto switchD_080a5e64_caseD_d;
  }
  sub_080177F4(param_1);
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 0x71);
LAB_080a6078:
  if (((((cVar2 == '\x01') || (cVar2 == '\x05')) || (cVar2 == '\t')) ||
      ((cVar2 == '\r' || (cVar2 == '\x11')))) && ((byte)(*(char *)(param_1 + 0x72) - 1U) < 2)) {
    sub_08007390(param_1 + 0x74,&DAT_083683e4 + (uint)*(byte *)(param_1 + 0x13) * 0x18);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080a60c0:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_080a5e64_caseD_d:
  return in_lr;
}

