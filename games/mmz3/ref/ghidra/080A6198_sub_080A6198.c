// sub_080A6198 at 0x080A6198 (thumb)

undefined4 sub_080A6198(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 in_lr;
  
  if (((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) ||
      (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\v')) && (*(byte *)(param_1 + 0xe) < 0x14)) {
    *(undefined *)(param_1 + 0xe) = 0x14;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_08368474);
    piVar9 = (int *)(param_1 + 0xb8);
    *piVar9 = 0x300;
    iVar5 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar8 = (*(int *)(&DAT_08368514 + (uint)*(byte *)(param_1 + 0xb4) * 8) + iVar5) -
            *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar8;
    iVar5 = (*(int *)(&DAT_08368518 + (uint)*(byte *)(param_1 + 0xb4) * 8) + iVar3 + -0x7c00) -
            *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar5;
    iVar8 = iVar8 >> 2;
    iVar5 = iVar5 >> 2;
    iVar5 = sub_080FE124(iVar8 * iVar8 + iVar5 * iVar5);
    uVar6 = (uint)(iVar5 << 0x10) >> 0xe;
    if (uVar6 != 0) {
      uVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar6);
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      uVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar6);
      *(undefined4 *)(param_1 + 0x60) = uVar4;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x5c) * *piVar9 >> 8;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60) * *piVar9 >> 8;
    *(uint *)(param_1 + 0xbc) = uVar6;
    iVar5 = *(int *)(param_1 + 100);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 0x101) {
      sub_08017700(param_1,0xb106);
      uVar1 = 0;
    }
    else if (*(int *)(param_1 + 100) < 1) {
      sub_08017700(param_1,0xb107);
      uVar1 = 1;
    }
    else {
      sub_08017700(param_1,0xb108);
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0x13) = uVar1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a61c6_caseD_1:
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + '\x01';
    cVar2 = sub_080FE4D8(cVar2,5);
    if (cVar2 == '\0') {
      sub_080C02B0(param_1 + 0x54,param_1 + 100,*(byte *)(param_1 + 10) >> 4 & 1,
                   *(undefined *)(param_1 + 0x13));
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
    sub_080177F4(param_1);
    iVar5 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0xbc) = iVar5;
    if (iVar5 < 1) {
LAB_080a6744:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_080a61c6_caseD_7:
    return in_lr;
  case 1:
    goto switchD_080a61c6_caseD_1;
  case 2:
    pcVar7 = (char *)(*(int *)(param_1 + 0x28) + 0xb4);
    *pcVar7 = *pcVar7 + '\x01';
    *(undefined *)(param_1 + 0x13) = 0x1e;
    sub_08017700(param_1,0xb106);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xb4) != '\x05') {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x13) != 0) {
      iVar5 = *(byte *)(param_1 + 0x13) - 1;
      *(char *)(param_1 + 0x13) = (char)iVar5;
      uVar6 = iVar5 * 0x1000000;
LAB_080a6740:
      if (uVar6 != 0) {
        return in_lr;
      }
    }
    goto LAB_080a6744;
  case 4:
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    if (*(char *)(param_1 + 0xb4) == '\x02') {
      if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
        *(undefined *)(param_1 + 0x13) = 0;
      }
      else {
        *(undefined *)(param_1 + 0x13) = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0xb4);
    if (cVar2 == '\0') {
      iVar5 = *(int *)(param_1 + 0xbc) + 3;
    }
    else if (cVar2 == '\x01') {
LAB_080a6440:
      iVar5 = *(int *)(param_1 + 0xbc) + -3;
    }
    else if (cVar2 == '\x03') {
      iVar5 = *(int *)(param_1 + 0xbc) + 3;
    }
    else {
      if ((cVar2 == '\x04') || (*(char *)(param_1 + 0x13) != '\0')) goto LAB_080a6440;
      iVar5 = *(int *)(param_1 + 0xbc) + 3;
    }
    piVar9 = (int *)(param_1 + 0xbc);
    *piVar9 = iVar5;
    iVar3 = *(int *)(param_1 + 100) + ((short)(&DAT_080fe64c)[*(byte *)piVar9] * 5 >> 1) * 0x10;
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar5 = *(int *)(param_1 + 0x68) +
            *(short *)((int)&DAT_080fe64c + ((uint)((*piVar9 + 0x40) * 0x1000000) >> 0x17)) * 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + ((iVar3 - *(int *)(param_1 + 0x54)) * 0x28 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + ((iVar5 - *(int *)(param_1 + 0x58)) * 0x28 >> 8);
    cVar2 = *(char *)(param_1 + 0xb4);
    if (cVar2 == '\0') {
      iVar5 = *piVar9;
joined_r0x080a64fe:
      if (iVar5 < 0x13f) {
        return in_lr;
      }
    }
    else {
      if (cVar2 == '\x01') {
        iVar5 = *piVar9;
      }
      else {
        if (cVar2 == '\x03') {
          iVar5 = *piVar9;
          goto joined_r0x080a64fe;
        }
        if (cVar2 == '\x04') {
          iVar5 = *piVar9;
        }
        else {
          if (*(char *)(param_1 + 0x13) == '\0') {
            iVar5 = *piVar9;
            goto joined_r0x080a64fe;
          }
          iVar5 = *piVar9;
        }
      }
      if (-0x13f < iVar5) {
        return in_lr;
      }
    }
    goto LAB_080a6744;
  case 6:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0xb4);
    if (cVar2 == '\0') {
      iVar5 = *(int *)(param_1 + 0xbc) + 1;
    }
    else if (cVar2 == '\x01') {
LAB_080a6556:
      iVar5 = *(int *)(param_1 + 0xbc) + -1;
    }
    else if (cVar2 == '\x03') {
      iVar5 = *(int *)(param_1 + 0xbc) + 1;
    }
    else {
      if ((cVar2 == '\x04') || (*(char *)(param_1 + 0x13) != '\0')) goto LAB_080a6556;
      iVar5 = *(int *)(param_1 + 0xbc) + 1;
    }
    piVar9 = (int *)(param_1 + 0xbc);
    *piVar9 = iVar5;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x10 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x10 >> 8);
    cVar2 = *(char *)(param_1 + 0xb4);
    if (cVar2 == '\0') {
      iVar5 = *piVar9;
    }
    else {
      if (cVar2 == '\x01') {
LAB_080a65c0:
        if (-0x17f < *piVar9) {
          return in_lr;
        }
        goto LAB_080a65ca;
      }
      if (cVar2 == '\x03') {
        iVar5 = *piVar9;
      }
      else {
        if ((cVar2 == '\x04') || (*(char *)(param_1 + 0x13) != '\0')) goto LAB_080a65c0;
        iVar5 = *piVar9;
      }
    }
    if (iVar5 < 0x17f) {
      return in_lr;
    }
LAB_080a65ca:
    *(undefined *)(param_1 + 0xe) = 10;
    return in_lr;
  default:
    goto switchD_080a61c6_caseD_7;
  case 10:
    piVar9 = (int *)(param_1 + 0xb8);
    *piVar9 = 0x300;
    iVar5 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar8 = (*(int *)(&DAT_08368514 + (uint)*(byte *)(param_1 + 0xb5) * 8) + iVar5) -
            *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar8;
    iVar5 = (*(int *)(&DAT_08368518 + (uint)*(byte *)(param_1 + 0xb5) * 8) + iVar3 + -0x7c00) -
            *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar5;
    iVar8 = iVar8 >> 2;
    iVar5 = iVar5 >> 2;
    iVar5 = sub_080FE124(iVar8 * iVar8 + iVar5 * iVar5);
    uVar6 = (uint)(iVar5 << 0x10) >> 0xe;
    if (uVar6 != 0) {
      uVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar6);
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      uVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar6);
      *(undefined4 *)(param_1 + 0x60) = uVar4;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x5c) * *piVar9 >> 8;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60) * *piVar9 >> 8;
    *(uint *)(param_1 + 0xbc) = uVar6;
    iVar5 = *(int *)(param_1 + 100);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 0x101) {
      sub_08017700(param_1,0xb106);
      uVar1 = 0;
    }
    else if (*(int *)(param_1 + 100) < 1) {
      sub_08017700(param_1,0xb107);
      uVar1 = 1;
    }
    else {
      sub_08017700(param_1,0xb108);
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0x13) = uVar1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + '\x01';
    cVar2 = sub_080FE4D8(cVar2,5);
    if (cVar2 == '\0') {
      sub_080C02B0(param_1 + 0x54,param_1 + 100,*(byte *)(param_1 + 10) >> 4 & 1,
                   *(undefined *)(param_1 + 0x13));
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
    sub_080177F4(param_1);
    iVar5 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0xbc) = iVar5;
    if (0 < iVar5) {
      return in_lr;
    }
    goto LAB_080a6744;
  case 0xc:
    pcVar7 = (char *)(*(int *)(param_1 + 0x28) + 0xb4);
    *pcVar7 = *pcVar7 + -1;
    sub_08017700(param_1,0xb106);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xd:
    sub_080177F4(param_1);
    uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xb4);
    goto LAB_080a6740;
  case 0xe:
    *(undefined *)(param_1 + 0x25) = 0x19;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xf:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
LAB_080a6798:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  case 0x14:
    sub_08017700(param_1,0xb102);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_080a6798;
  }
}

