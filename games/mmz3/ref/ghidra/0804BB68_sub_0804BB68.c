// sub_0804BB68 at 0x0804BB68 (thumb)

undefined4 sub_0804BB68(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xa80f);
    sub_08007390(param_1 + 0x74,&DAT_0835f910);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    bVar3 = *(byte *)(param_1 + 0x12);
    if ((bVar3 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((bVar3 != 0) && (*(byte *)(param_1 + 0x12) = bVar3 - 1, (byte)(bVar3 - 1) != '\0')) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f718);
    sub_0800471C(0x84);
    *(undefined *)(param_1 + 0x12) = 10;
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 3:
    bVar3 = *(byte *)(param_1 + 0x12);
    if ((bVar3 & 1) == 0) {
      iVar5 = *(int *)(param_1 + 0x5c) + (((uint)bVar3 << 0x18) >> 0x1a) * -0x100;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x5c) + (uint)(bVar3 >> 2) * 0x100;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    sub_080177F4(param_1);
    bVar3 = *(byte *)(param_1 + 0x12);
    if ((bVar3 < 0x28) && (*(byte *)(param_1 + 0x12) = bVar3 + 1, (byte)(bVar3 + 1) < 0x28)) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 4:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 5:
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    iVar5 = sub_080FE4D8(uVar4 * 2 >> 0x11,5);
    iVar5 = iVar5 * 0x3800 + *(int *)(param_1 + 0xd0) + 0x3000;
    *(int *)(param_1 + 100) = iVar5;
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xd4) + -0x4800;
    if (iVar5 < *(int *)(DAT_0202f5c0 + 0x54)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
LAB_0804bd78:
        *(byte *)(param_1 + 10) = bVar3;
      }
    }
    else if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
      goto LAB_0804bd78;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 6:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0xa810);
    sub_0800471C(0);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    bVar3 = *(byte *)(param_1 + 0x12);
    if ((bVar3 & 1) == 0) {
      iVar5 = *(int *)(param_1 + 100) + (((uint)bVar3 << 0x18) >> 0x19) * -0x100;
    }
    else {
      iVar5 = *(int *)(param_1 + 100) + (uint)(bVar3 >> 1) * 0x100;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f730);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 8:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    break;
  default:
    goto switchD_0804bb7c_caseD_9;
  }
  *(char *)(param_1 + 0xe) = cVar2;
switchD_0804bb7c_caseD_9:
  return in_lr;
}

