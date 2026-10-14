// sub_080F3DAC at 0x080F3DAC (thumb)

undefined4 sub_080F3DAC(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_0801CF00(param_1,0x4c00);
    sub_08002B10(0x195);
    local_c = *(int *)(param_1 + 0x58) + 0x400;
    local_10 = *(int *)(param_1 + 0x54) + -0x800;
    sub_080D0894(2,&local_10);
    local_10 = local_10 + 0x1000;
    sub_080D0894(2,&local_10);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0xe;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f3dc2_caseD_1:
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    iVar6 = *(int *)(param_1 + 0x60) +
            (-(int)*(short *)((int)&DAT_08128c10 +
                             (((uint)*(byte *)(param_1 + 0x12) << 0x1b) >> 0x17)) >> 2);
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    uVar5 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)uVar5;
    if ((uVar5 & 0xff) == 0) {
LAB_080f3fa6:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080f3dc2_caseD_6:
    sub_0801CFF0(param_1);
    return in_lr;
  case 1:
    goto switchD_080f3dc2_caseD_1;
  case 2:
    if (*(char *)(param_1 + 0xb4) == '\0') {
      uVar3 = 0x200;
    }
    else {
      uVar3 = 0xfffffe00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) << 1;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    iVar6 = *(int *)(param_1 + 0x60) + 0x60;
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    pbVar7 = (byte *)(param_1 + 0xb6);
    if (*pbVar7 < 8) {
      *pbVar7 = *pbVar7 + 1;
    }
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(char *)(param_1 + 0xb5) = *pbVar7 + *(char *)(param_1 + 0xb5);
    }
    else {
      *(char *)(param_1 + 0xb5) = *(char *)(param_1 + 0xb5) - *pbVar7;
    }
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xb5);
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      sub_080D0894(2,param_1 + 100);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if ((cVar1 == '\0') || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
      sub_080D0894(1,param_1 + 0x54);
      sub_08002B10(0x35);
LAB_080f407c:
      DAT_0202dad4 = DAT_0202dad4 + '\x01';
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      goto switchD_080f3dc2_caseD_6;
    }
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar6 = -0x1000;
    }
    else {
      iVar6 = 0x1000;
    }
    if (*(int *)(param_1 + 0x60) < 0) {
      iVar4 = -0x1000;
    }
    else {
      iVar4 = 0x1000;
    }
    sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + iVar6,*(int *)(param_1 + 0x58) + iVar4);
    if (sVar2 == 0) goto switchD_080f3dc2_caseD_6;
    goto LAB_080f3fa6;
  case 4:
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60) >> 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    iVar6 = *(int *)(param_1 + 0x60) + 0x60;
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    pbVar7 = (byte *)(param_1 + 0xb6);
    if (*pbVar7 < 8) {
      *pbVar7 = *pbVar7 + 1;
    }
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(char *)(param_1 + 0xb5) = *pbVar7 + *(char *)(param_1 + 0xb5);
    }
    else {
      *(char *)(param_1 + 0xb5) = *(char *)(param_1 + 0xb5) - *pbVar7;
    }
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xb5);
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      sub_080D0894(2,param_1 + 100);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x5c) < 0) {
        iVar6 = -0x1000;
      }
      else {
        iVar6 = 0x1000;
      }
      if (*(int *)(param_1 + 0x60) < 0) {
        iVar4 = -0x1000;
      }
      else {
        iVar4 = 0x1000;
      }
      sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + iVar6,*(int *)(param_1 + 0x58) + iVar4);
      if (sVar2 == 0) goto switchD_080f3dc2_caseD_6;
    }
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x35);
    goto LAB_080f407c;
  default:
    goto switchD_080f3dc2_caseD_6;
  }
}

