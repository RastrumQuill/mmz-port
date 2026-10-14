// sub_08082AFC at 0x08082AFC (thumb)

undefined4 sub_08082AFC(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 1;
      *(undefined *)(param_1 + 0x4c) = 0;
      pbVar6 = (byte *)(param_1 + 0x4a);
      *pbVar6 = *pbVar6 & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *pbVar6 = *pbVar6 & 0xdf;
      *(undefined *)(param_1 + 0x24) = 0;
      sub_08017700(param_1,0x901);
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 1;
      *(undefined *)(param_1 + 0x4c) = 0;
      pbVar6 = (byte *)(param_1 + 0x4a);
      *pbVar6 = *pbVar6 & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *pbVar6 = *pbVar6 & 0xdf;
      *(undefined *)(param_1 + 0x24) = 0;
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 200);
      if (*(char *)(iVar3 + 0xc0) == '\x01') {
        uVar5 = *(undefined4 *)(iVar3 + 0x58);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
        *(undefined4 *)(param_1 + 0x58) = uVar5;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x3200;
      }
      else if (*(char *)(param_1 + 0xc0) == '\0') {
        uVar5 = *(undefined4 *)(iVar3 + 0x58);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
        *(undefined4 *)(param_1 + 0x58) = uVar5;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2200;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1e00;
      }
      sub_08017700(param_1,0x900);
      *(undefined *)(param_1 + 0xe) = 0x14;
    }
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x14;
    break;
  case 1:
    uVar1 = 0x14;
    goto LAB_08082cba;
  case 2:
  case 0xb:
    goto switchD_08082b10_caseD_2;
  case 3:
    if (*(char *)(param_1 + 0x10) == '\x01') {
      iVar3 = *(int *)(param_1 + 0x60) + 0x20;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x1800);
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffee0;
        sub_0801ACF8(4,param_1 + 0x54);
        sub_0800471C(0x91);
        uVar1 = 10;
LAB_08082e8a:
        *(undefined *)(param_1 + 0x13) = uVar1;
        *(undefined *)(param_1 + 0x24) = uVar1;
        *(undefined *)(param_1 + 0xe) = 0x1e;
      }
    }
    goto LAB_08082e96;
  case 10:
    uVar1 = 0xc;
LAB_08082cba:
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08082b10_caseD_2:
    iVar3 = *(int *)(param_1 + 0x60) + 4;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  case 0x15:
switchD_08082b10_caseD_15:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 0xc:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto switchD_08082b10_caseD_15;
  case 0xd:
    iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 200);
    uVar5 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x2e00;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
    sub_08017700(param_1,0x900);
    sub_080177F4(param_1);
    goto LAB_08082e14;
  case 0xf:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x73) == '\x03') &&
       ((*(char *)(param_1 + 0x12) == '\0' ||
        (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')))
       ) {
      if (*(byte *)(param_1 + 0x13) < 0xfc) {
        *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 3;
      }
      else {
        *(undefined *)(param_1 + 0x13) = 0xff;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x13);
    }
    break;
  case 0x10:
    sub_08017700(param_1,0x900);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x11:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
LAB_08082e14:
      *(undefined *)(param_1 + 0xe) = 0x14;
    }
    break;
  case 0x14:
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    goto switchD_08082b10_caseD_15;
  case 0x16:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar3 = *(int *)(param_1 + 0x60) + 0x10;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x1800);
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffe40;
        sub_0801ACF8(4,param_1 + 0x54);
        sub_0800471C(0x91);
        uVar1 = 0xf3;
        goto LAB_08082e8a;
      }
    }
LAB_08082e96:
    sub_080177F4(param_1);
    break;
  case 0x1e:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    iVar3 = *(int *)(param_1 + 0x60) + 0xc;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(char *)(param_1 + 0x10) == '\0') {
      cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),3);
      if (cVar2 == '\0') {
        cVar2 = *(char *)(param_1 + 0x13) + -1;
LAB_08082eee:
        *(char *)(param_1 + 0x13) = cVar2;
      }
    }
    else {
      cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),3);
      if (cVar2 == '\0') {
        cVar2 = *(char *)(param_1 + 0x13) + '\x01';
        goto LAB_08082eee;
      }
    }
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x13);
    uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x4000 < uVar4) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

