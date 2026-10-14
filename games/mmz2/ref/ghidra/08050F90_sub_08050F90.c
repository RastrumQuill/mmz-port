// sub_08050F90 at 0x08050F90 (thumb)

undefined4 sub_08050F90(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar10 = *(undefined4 *)(param_1 + 200);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    DAT_0202ebbd = DAT_0202ebbd | 8;
    sub_0809F624(uVar10,0x13);
    sub_08006E08(param_1 + 0x74,&DAT_0833bf6c);
    iVar5 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0xcd) = 3;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,0xa41f);
    *(undefined *)(param_1 + 0x12) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08050faa_caseD_1:
    sub_080128D4(param_1);
    if ((*(char *)(param_1 + 0x73) == '\x04') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0')) {
LAB_080510bc:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_08050faa_caseD_8:
    return in_lr;
  case 1:
    goto switchD_08050faa_caseD_1;
  case 2:
    sub_0809F624(uVar10,0x14);
    sub_080127E4(param_1,0xa420);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_080510bc;
  case 4:
    uVar10 = 0xffffffa0;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffa0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar10 = 0x60;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar10;
    sub_080127E4(param_1,0xa421);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if ((*(char *)(param_1 + 0x71) == '\x03') || (*(char *)(param_1 + 0x71) == '\x06')) {
      if (*(char *)(param_1 + 0x12) == '\0') {
        local_1c = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        iVar5 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        iVar5 = iVar5 - local_1c;
        do {
          while( true ) {
            uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
            DAT_0202e188 = uVar6 & 0x7fffffff;
            iVar7 = sub_080EF330(uVar6 * 2 >> 0x11,iVar5 >> 8);
            iVar11 = iVar7 * 0x100;
            iVar8 = *(int *)(param_1 + 0xbc);
            iVar9 = iVar11 - iVar8;
            if (iVar9 < 0) break;
            if (0x2fff < iVar9) goto LAB_0805115e;
          }
        } while (iVar8 + iVar7 * -0x100 < 0x3000);
LAB_0805115e:
        local_1c = iVar11 + local_1c;
        *(int *)(param_1 + 0xbc) = iVar11;
        local_18 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        local_18 = local_18 + -0x800;
        sub_0809F738(&local_1c);
        *(undefined *)(param_1 + 0x12) = 1;
        sub_080032EC(0xe1);
        sub_08015518(3,param_1 + 0x54);
      }
    }
    else {
      *(undefined *)(param_1 + 0x12) = 0;
      iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar5;
      iVar7 = iVar5 + -0x3800;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar7 = iVar5 + 0x3800;
      }
      sVar4 = sub_08008CFC(iVar7,*(undefined4 *)(param_1 + 0x58));
      if (sVar4 != 0) {
        *(undefined *)(param_1 + 0xcd) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    sub_080128D4(param_1);
    return in_lr;
  case 6:
    sub_0809F624(uVar10,2);
    sub_08006E08(param_1 + 0x74,&DAT_0833b87c);
    iVar5 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    bVar1 = 0 < *(int *)(iVar5 + 0x54) - *(int *)(param_1 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080127E4(param_1,0xa400);
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080128D4(param_1);
    if ((*(char *)(param_1 + 0x73) == '\x04') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0')) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08050faa_caseD_8;
  }
}

