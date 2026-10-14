// sub_080F4354 at 0x080F4354 (thumb)

undefined4 sub_080F4354(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_0801CF00(param_1,0x4c00);
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xb5);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_08002B10(0x195);
    local_14 = *(int *)(param_1 + 0x54) + 0x400;
    local_10 = *(int *)(param_1 + 0x58) + -0x800;
    sub_080D0894(2,&local_14);
    local_10 = local_10 + 0x1000;
    sub_080D0894(2,&local_14);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f436a_caseD_1:
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    iVar5 = *(int *)(param_1 + 0x5c) +
            (-(int)*(short *)((int)&DAT_08128c10 +
                             (((uint)*(byte *)(param_1 + 0x12) << 0x1b) >> 0x17)) >> 2);
    *(int *)(param_1 + 0x5c) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    uVar4 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)uVar4;
    if ((uVar4 & 0xff) == 0) {
LAB_080f4544:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080f436a_caseD_6:
    sub_0801CFF0(param_1);
    return in_lr;
  case 1:
    goto switchD_080f436a_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    iVar5 = *(int *)(param_1 + 0x60) + 0x60;
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    pbVar6 = (byte *)(param_1 + 0xb6);
    if (*pbVar6 < 8) {
      *pbVar6 = *pbVar6 + 1;
    }
    cVar1 = *(char *)(param_1 + 0xb5) - *pbVar6;
    *(char *)(param_1 + 0xb5) = cVar1;
    *(char *)(param_1 + 0x24) = cVar1;
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      sub_080D0894(2,param_1 + 100);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if ((cVar1 == '\0') || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
      sub_080D0894(1,param_1 + 0x54);
      sub_08002B10(0x35);
      DAT_0202dad4 = DAT_0202dad4 + '\x01';
LAB_080f464a:
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      goto switchD_080f436a_caseD_6;
    }
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar5 = -0x1000;
    }
    else {
      iVar5 = 0x1000;
    }
    if (*(int *)(param_1 + 0x60) < 0) {
      iVar3 = -0x1000;
    }
    else {
      iVar3 = 0x1000;
    }
    sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + iVar5,*(int *)(param_1 + 0x58) + iVar3);
    if (sVar2 == 0) goto switchD_080f436a_caseD_6;
    goto LAB_080f4544;
  case 4:
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60) >> 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    iVar5 = *(int *)(param_1 + 0x60) + 0x60;
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    pbVar6 = (byte *)(param_1 + 0xb6);
    if (*pbVar6 < 8) {
      *pbVar6 = *pbVar6 + 1;
    }
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(char *)(param_1 + 0xb5) = *pbVar6 + *(char *)(param_1 + 0xb5);
    }
    else {
      *(char *)(param_1 + 0xb5) = *(char *)(param_1 + 0xb5) - *pbVar6;
    }
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xb5);
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      sub_080D0894(2,param_1 + 100);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x5c) < 0) {
        iVar5 = -0x1000;
      }
      else {
        iVar5 = 0x1000;
      }
      if (*(int *)(param_1 + 0x60) < 0) {
        iVar3 = -0x1000;
      }
      else {
        iVar3 = 0x1000;
      }
      sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + iVar5,*(int *)(param_1 + 0x58) + iVar3);
      if (sVar2 == 0) goto switchD_080f436a_caseD_6;
    }
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x35);
    DAT_0202dad4 = DAT_0202dad4 + '\x01';
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    goto LAB_080f464a;
  default:
    goto switchD_080f436a_caseD_6;
  }
}

