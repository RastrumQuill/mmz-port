// sub_08040C6C at 0x08040C6C (thumb)

undefined4 sub_08040C6C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xa400);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 1;
    break;
  case 2:
    sub_0800471C(0x65);
    *(undefined *)(param_1 + 0x12) = 4;
    sub_08017700(param_1,0xa41b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    break;
  case 4:
    sub_0800471C(0x67);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08017700(param_1,0xa41c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if ((*(char *)(param_1 + 0x12) == '\0') && (0 < *(int *)(param_1 + 0x60))) {
      *(undefined *)(param_1 + 0x12) = 1;
      sub_08017700(param_1,0xa41d);
    }
    local_30 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x58);
    if ((local_30 < 0) && (0 < *(int *)(param_1 + 0x60))) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_30;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    return in_lr;
  case 6:
    *(undefined *)(param_1 + 0x12) = 4;
    sub_08017700(param_1,0xa41b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    break;
  case 8:
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08017700(param_1,0xa419);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\x05') {
      sub_0800471C(0x66);
    }
    cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),5);
    if ((cVar2 == '\0') &&
       (((cVar2 = *(char *)(param_1 + 0x71), cVar2 == '\x01' || (cVar2 == '\x04')) ||
        (cVar2 == '\x05')))) {
      local_30 = *(int *)(param_1 + 0x54) + 0x300;
      local_2c = *(int *)(param_1 + 0x58) + -0x1400;
      local_28 = 0x100;
      uVar4 = (DAT_0202f608 * 0x343fd + 0x269ec3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      local_24 = -0x55 - (uVar4 * 2 >> 0x11 & 0xff);
      sub_080B7E18(param_1,&local_30,&local_28,0,&DAT_0835e834,0x18);
      local_30 = *(int *)(param_1 + 0x54) + -0x800;
      local_2c = *(int *)(param_1 + 0x58) + -0x1400;
      local_28 = 0x60;
      uVar4 = (DAT_0202f608 * 0x343fd + 0x269ec3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      local_24 = -0x20 - (uVar4 * 2 >> 0x11 & 0xff);
      sub_080B7F20(param_1,&local_30,&local_28,0,&DAT_0835e834,0x18,0x19);
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08040ecc;
  case 10:
    sub_08017700(param_1,0xa400);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    bVar1 = DAT_020301b2 & 1;
    if ((DAT_020301b2 & 1) == 0) {
      *(byte *)(param_1 + 0xd) = bVar1;
      *(byte *)(param_1 + 0xe) = bVar1;
    }
  default:
    goto switchD_08040c8a_caseD_c;
  }
  if (bVar1 == 0) {
LAB_08040ecc:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08040c8a_caseD_c:
  return in_lr;
}

