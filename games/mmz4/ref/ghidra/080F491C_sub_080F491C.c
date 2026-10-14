// sub_080F491C at 0x080F491C (thumb)

undefined4 sub_080F491C(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_0801CF00(param_1,0x4c00);
    sub_08002B10(0x195);
    local_10 = *(int *)(param_1 + 0x58) + -0x400;
    local_14 = *(int *)(param_1 + 0x54) + -0x800;
    sub_080D0894(2,&local_14);
    local_14 = local_14 + 0x1000;
    sub_080D0894(2,&local_14);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f4932_caseD_1:
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    iVar7 = *(int *)(param_1 + 0x60) +
            ((int)((uint)*(ushort *)
                          ((int)&DAT_08128c10 + (((uint)*(byte *)(param_1 + 0x12) << 0x1b) >> 0x17))
                  << 0x10) >> 0x12);
    *(int *)(param_1 + 0x60) = iVar7;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
    uVar5 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)uVar5;
    if ((uVar5 & 0xff) == 0) {
LAB_080f4b20:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080f4932_caseD_6:
    sub_0801CFF0(param_1);
    return in_lr;
  case 1:
    goto switchD_080f4932_caseD_1;
  case 2:
    if (*(char *)(param_1 + 0xb4) == '\0') {
      uVar3 = 0x100;
    }
    else {
      uVar3 = 0xffffff00;
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
    iVar7 = *(int *)(param_1 + 0x60) + 0x60;
    *(int *)(param_1 + 0x60) = iVar7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
    pcVar6 = (char *)(param_1 + 0xb5);
    if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
      pbVar8 = (byte *)(param_1 + 0xb6);
      if (*pbVar8 < 8) {
        *pbVar8 = *pbVar8 + 1;
      }
      if (*(char *)(param_1 + 0xb4) == '\0') {
        cVar1 = *pcVar6 - *pbVar8;
      }
      else {
        cVar1 = *pbVar8 + *pcVar6;
      }
      *pcVar6 = cVar1;
    }
    *(char *)(param_1 + 0x24) = *pcVar6;
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      sub_080D0894(2,param_1 + 100);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if ((cVar1 == '\0') || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
      sub_080D0894(1,param_1 + 0x54);
      sub_08002B10(0x35);
      DAT_0202dad4 = DAT_0202dad4 + '\x01';
LAB_080f4c2c:
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      goto switchD_080f4932_caseD_6;
    }
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar7 = -0x1000;
    }
    else {
      iVar7 = 0x1000;
    }
    if (*(int *)(param_1 + 0x60) < 0) {
      iVar4 = -0x1000;
    }
    else {
      iVar4 = 0x1000;
    }
    sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + iVar7,*(int *)(param_1 + 0x58) + iVar4);
    if (sVar2 == 0) goto switchD_080f4932_caseD_6;
    goto LAB_080f4b20;
  case 4:
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60) >> 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    iVar7 = *(int *)(param_1 + 0x60) + 0x60;
    *(int *)(param_1 + 0x60) = iVar7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
    pbVar8 = (byte *)(param_1 + 0xb6);
    if (*pbVar8 < 8) {
      *pbVar8 = *pbVar8 + 1;
    }
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(char *)(param_1 + 0xb5) = *(char *)(param_1 + 0xb5) - *pbVar8;
    }
    else {
      *(char *)(param_1 + 0xb5) = *pbVar8 + *(char *)(param_1 + 0xb5);
    }
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xb5);
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      sub_080D0894(2,param_1 + 100);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x5c) < 0) {
        iVar7 = -0x1000;
      }
      else {
        iVar7 = 0x1000;
      }
      if (*(int *)(param_1 + 0x60) < 0) {
        iVar4 = -0x1000;
      }
      else {
        iVar4 = 0x1000;
      }
      sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + iVar7,*(int *)(param_1 + 0x58) + iVar4);
      if (sVar2 == 0) goto switchD_080f4932_caseD_6;
    }
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x35);
    DAT_0202dad4 = DAT_0202dad4 + '\x01';
    sub_08002B10(0x35);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    goto LAB_080f4c2c;
  default:
    goto switchD_080f4932_caseD_6;
  }
}

