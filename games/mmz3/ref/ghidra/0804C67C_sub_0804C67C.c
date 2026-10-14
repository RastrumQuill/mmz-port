// sub_0804C67C at 0x0804C67C (thumb)

undefined4 sub_0804C67C(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_28 [4];
  int local_18;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xa80f);
    sub_08007390(param_1 + 0x74,&DAT_0835f910);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    bVar2 = *(byte *)(param_1 + 0x12);
    if ((bVar2 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((bVar2 != 0) && (*(byte *)(param_1 + 0x12) = bVar2 - 1, (byte)(bVar2 - 1) != '\0')) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f718);
    sub_0800471C(0x84);
    *(undefined *)(param_1 + 0x12) = 10;
    break;
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0')) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 3:
    bVar2 = *(byte *)(param_1 + 0x12);
    if ((bVar2 & 1) == 0) {
      iVar5 = *(int *)(param_1 + 0x5c) + (((uint)bVar2 << 0x18) >> 0x1a) * -0x100;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x5c) + (uint)(bVar2 >> 2) * 0x100;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    sub_080177F4(param_1);
    bVar2 = *(byte *)(param_1 + 0x12);
    if ((bVar2 < 0x28) && (*(byte *)(param_1 + 0x12) = bVar2 + 1, (byte)(bVar2 + 1) < 0x28)) {
      return in_lr;
    }
    goto LAB_0804c7fc;
  case 4:
    sub_08017700(param_1,0xa803);
    sub_0800471C(0x88);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xd4) + -0x8e00;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x20;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0')) {
      return in_lr;
    }
LAB_0804c7fc:
    *(undefined *)(param_1 + 0x12) = 0x30;
    break;
  case 6:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080177F4(param_1);
    local_28[2] = *(int *)(param_1 + 0xd0);
    local_28[0] = local_28[2] + 0x7000;
    local_28[1] = local_28[2] + 0xb000;
    local_28[2] = local_28[2] + 0xf000;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    iVar5 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
    *(undefined4 *)(param_1 + 0x54) =
         *(undefined4 *)((int)local_28 + ((uint)(iVar5 << 0x18) >> 0x16));
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0')) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x13) = 3;
    break;
  case 7:
    piVar4 = (int *)(param_1 + 0xd0);
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) + -0x7000;
    iVar6 = *piVar4;
    local_28[0] = iVar6 - iVar5;
    if (local_28[0] < 1) {
      local_28[0] = iVar5 - iVar6;
    }
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) + -0xb000;
    local_28[1] = iVar6 - iVar5;
    if (local_28[1] < 1) {
      local_28[1] = iVar5 - iVar6;
    }
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) + -0xf000;
    local_28[2] = iVar6 - iVar5;
    if (local_28[2] < 1) {
      local_28[2] = iVar5 - iVar6;
    }
    if (local_28[1] < local_28[0]) {
      if (local_28[2] < local_28[0]) goto LAB_0804c934;
      iVar5 = 2;
      if (local_28[1] <= local_28[2]) goto LAB_0804c930;
      iVar5 = 1;
LAB_0804c93e:
      if (iVar5 == 1) {
        iVar5 = *piVar4 + 0xb000;
      }
      else {
        iVar5 = *piVar4 + 0xf000;
      }
    }
    else {
      iVar5 = 2;
      if (local_28[2] < local_28[1]) {
        iVar5 = 1;
      }
LAB_0804c930:
      if (iVar5 != 0) goto LAB_0804c93e;
LAB_0804c934:
      iVar5 = *piVar4 + 0x7000;
    }
    *(int *)(param_1 + 100) = iVar5;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_080BD904(param_1,param_1 + 0x54,0,0);
    sub_08007390(param_1 + 0x74,&DAT_0835f970);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
  case 0x18:
switchD_0804c692_caseD_8:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0')) {
      return in_lr;
    }
    break;
  case 9:
    local_28[3] = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + 0x2e00;
    sub_080A0FB8(param_1,local_28 + 3,0);
    sub_0800471C(0x89);
    if ((*(char *)(param_1 + 0x13) == '\0') ||
       (cVar3 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar3, cVar3 == '\0')) {
      *(undefined *)(param_1 + 0xe) = 0x14;
      return in_lr;
    }
    break;
  case 10:
    sub_08007390(param_1 + 0x74,&DAT_0835f718);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    local_28[2] = *(int *)(param_1 + 0xd0);
    local_28[0] = local_28[2] + 0x7000;
    local_28[1] = local_28[2] + 0xb000;
    local_28[2] = local_28[2] + 0xf000;
    iVar5 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),3);
    *(undefined4 *)(param_1 + 0x54) =
         *(undefined4 *)((int)local_28 + ((uint)(iVar5 << 0x18) >> 0x16));
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0')) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 7;
    return in_lr;
  default:
    goto switchD_0804c692_caseD_c;
  case 0x14:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    sub_080177F4(param_1);
    goto switchD_0804c692_caseD_8;
  case 0x16:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0xa801);
    sub_08007390(param_1 + 0x74,&DAT_0835f718);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + 0x2000;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x17:
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    sub_080177F4(param_1);
    bVar2 = *(byte *)(param_1 + 0x12);
    if ((bVar2 & 1) == 0) {
      iVar5 = *(int *)(param_1 + 100) + (((uint)bVar2 << 0x18) >> 0x1a) * -0x100;
    }
    else {
      iVar5 = *(int *)(param_1 + 100) + (uint)(bVar2 >> 2) * 0x100;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    bVar2 = *(byte *)(param_1 + 0x12);
    if ((bVar2 < 0x1e) && (*(byte *)(param_1 + 0x12) = bVar2 + 1, (byte)(bVar2 + 1) < 0x1e)) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 0x19:
    *(undefined *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 5;
    *(undefined *)(param_1 + 0xf) = 0;
    goto switchD_0804c692_caseD_c;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804c692_caseD_c:
  return in_lr;
}

