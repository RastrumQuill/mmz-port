// sub_08036BAC at 0x08036BAC (thumb)

undefined4 sub_08036BAC(int param_1)

{
  undefined uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    pbVar3 = (byte *)(param_1 + 0x287);
    sub_0803D0B4(param_1,*pbVar3,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_08017700(param_1,*(undefined2 *)(&DAT_0835b510 + (uint)*pbVar3 * 2));
    if (*pbVar3 < 6) {
      sub_0800471C(0x36);
      uVar1 = 0;
    }
    else {
      sub_0800471C(0x37);
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0xf) = uVar1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(char *)(param_1 + 0x287) == '\b') {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffa80;
      sub_080177F4(param_1);
      *(undefined *)(param_1 + 0xe) = 10;
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08036bc0_caseD_1:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0xf) == '\x01') && ('\x04' < *(char *)(param_1 + 0x71))) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(char *)(param_1 + 0xf) == '\x01') {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else {
LAB_08036df0:
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
switchD_08036bc0_caseD_4:
    return in_lr;
  case 1:
    goto switchD_08036bc0_caseD_1;
  case 2:
    if ((DAT_02002130 & 0x20) != 0) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    if ((DAT_02002130 & 0x10) != 0) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    sub_0803D0B4(param_1,*(byte *)(param_1 + 0x287) + 1,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_08017700(param_1,*(undefined2 *)(&DAT_0835b510 + (*(byte *)(param_1 + 0x287) + 1) * 2));
    sub_0800471C(0x36);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08036df0;
  default:
    goto switchD_08036bc0_caseD_4;
  case 10:
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(int *)(param_1 + 0x60) < 0) {
        sub_08017700(param_1,0x403);
      }
      else {
        sub_08017700(param_1,0x404);
      }
    }
    if (0 < *(int *)(param_1 + 0x60)) {
      if ((DAT_02002130 & 0x20) != 0) {
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      }
      if ((DAT_02002130 & 0x10) != 0) {
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    sub_080177F4(param_1);
    iVar2 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar2 == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    goto LAB_08036df0;
  }
}

