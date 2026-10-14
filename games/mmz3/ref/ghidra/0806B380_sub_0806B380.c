// sub_0806B380 at 0x0806B380 (thumb)

undefined4 sub_0806B380(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x902);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    pbVar5 = (byte *)(param_1 + 0x4a);
    *pbVar5 = *pbVar5 & 0xef | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    *pbVar5 = *pbVar5 & 0xdf | 0x20;
    sub_08007390(param_1 + 0x74,&DAT_08362c70);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (*(byte *)(param_1 + 0x13) < 0x40) {
      *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 4;
    }
    *(byte *)(param_1 + 0x24) = ~*(byte *)(param_1 + 0x13);
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x300 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x300;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x200;
    if (iVar4 <= iVar3) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined *)(param_1 + 0x12) = 0x14;
    break;
  case 2:
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x0806b71e;
  case 3:
    *(undefined *)(param_1 + 0xf) = 4;
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_08017700(param_1,0x902);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    sub_08007390(param_1 + 0x74,&DAT_08362c70);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0806b396_caseD_5:
    piVar2 = (int *)(param_1 + 0xbc);
    if ((*piVar2 < -0x2e80) &&
       (iVar3 = *(int *)(param_1 + 0x60) + 0x40, *(int *)(param_1 + 0x60) = iVar3, -0x40 < iVar3)) {
      *(undefined4 *)(param_1 + 0x60) = 0xffffffc0;
    }
    iVar3 = *piVar2 + *(int *)(param_1 + 0x60);
    *piVar2 = iVar3;
    *(int *)(param_1 + 0x58) = iVar3 + *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x200;
    sub_080177F4(param_1);
    if (-0x3001 < *piVar2) {
LAB_0806b62a:
      if (*(char *)(param_1 + 0x12) == '\0') {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 10;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xf) + -1;
    *(char *)(param_1 + 0xf) = cVar1;
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0xe) = 6;
      return in_lr;
    }
LAB_0806b624:
    *(undefined *)(param_1 + 0xe) = 0x14;
    return in_lr;
  case 5:
    goto switchD_0806b396_caseD_5;
  case 6:
    sub_08017700(param_1,0x902);
    sub_08007390(param_1 + 0x74,&DAT_08362c70);
    *(undefined4 *)(param_1 + 0xbc) = 0xffffd000;
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    piVar2 = (int *)(param_1 + 0xbc);
    if ((-0x180 < *piVar2) &&
       (iVar3 = *(int *)(param_1 + 0x60) + -0x40, *(int *)(param_1 + 0x60) = iVar3, iVar3 < 0x40)) {
      *(undefined4 *)(param_1 + 0x60) = 0x40;
    }
    iVar3 = *piVar2 + *(int *)(param_1 + 0x60);
    *piVar2 = iVar3;
    *(int *)(param_1 + 0x58) = iVar3 + *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x200;
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x58) <= *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x200)
    goto LAB_0806b62a;
    cVar1 = *(char *)(param_1 + 0xf) + -1;
    *(char *)(param_1 + 0xf) = cVar1;
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0xe) = 4;
      return in_lr;
    }
    goto LAB_0806b624;
  default:
    goto switchD_0806b396_caseD_8;
  case 10:
    *(undefined *)(param_1 + 0x12) = 0x3c;
    local_14 = *(int *)(param_1 + 0x54) + -0x1200;
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_0800471C(0x12d);
    sub_0809D384(&local_14,0x200,7,param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x0806b71e;
  case 0xc:
    *(undefined *)(param_1 + 0x12) = 0x40;
    if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
      *(undefined *)(param_1 + 0xe) = 7;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 5;
    return in_lr;
  case 0x14:
    sub_08017700(param_1,0x901);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    pbVar5 = (byte *)(param_1 + 0x4a);
    *pbVar5 = *pbVar5 & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *pbVar5 = *pbVar5 & 0xdf;
    *(undefined *)(param_1 + 0x24) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08362c40);
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + 0x1500;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x32;
    break;
  case 0x15:
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
joined_r0x0806b71e:
    if (cVar1 != '\0') {
      return in_lr;
    }
    break;
  case 0x16:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x60) + -4;
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 < -0xa0) {
      *(undefined4 *)(param_1 + 0x60) = 0xffffff60;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x3800;
    if (iVar3 <= iVar4) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    break;
  case 0x17:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x18:
    sub_080177F4(param_1);
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x05') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0806b396_caseD_8:
  return in_lr;
}

