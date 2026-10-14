// sub_0809D0AC at 0x0809D0AC (thumb)

undefined4 sub_0809D0AC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if (CONCAT11(*(undefined *)(iVar8 + 0x1e),*(undefined *)(iVar8 + 0x70)) == -0x56de) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    iVar8 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar8;
    iVar7 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar7;
    sVar4 = sub_08007C7C(iVar8 + *(int *)(param_1 + 100),iVar7 + *(int *)(param_1 + 0x68));
    if (sVar4 == 0) goto switchD_0809d114_caseD_8;
    break;
  case 1:
    sub_0801CF00(param_1,0xa92a);
    sub_08005784(param_1 + 0x74,&DAT_0885df9c);
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd00;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x300;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    *(undefined4 *)(param_1 + 0x68) = 0x60;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    if (*(char *)(param_1 + 0x71) == '\0') {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) * -0xe;
      uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      sub_08002B10(0x5f);
      goto switchD_0809d114_caseD_8;
    }
    iVar8 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
    if ((*(char *)(param_1 + 0x73) != '\x04') ||
       (bVar1 = *(char *)(param_1 + 0x12) + 1, *(byte *)(param_1 + 0x12) = bVar1, bVar1 < 3))
    goto switchD_0809d114_caseD_8;
    sub_0801CD28(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CEEC(param_1);
    sub_0801CF00(param_1,0xa92a);
    *(undefined *)(param_1 + 0x13) = 0;
    break;
  case 3:
    bVar1 = *(char *)(param_1 + 0x13) + 8;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (0x40 < bVar1) {
      *(undefined *)(param_1 + 0x13) = 0x40;
    }
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x13);
    if (*(char *)(param_1 + 0x71) == '\0') {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) * -0x10;
      uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      sub_08002B10(0x5f);
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    }
    sVar4 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
    if (sVar4 == 0) goto switchD_0809d114_caseD_8;
    sub_0801CF00(param_1,0xa92a);
    *(undefined *)(param_1 + 0x24) = 0x40;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar5 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x54) = uVar5;
      sub_08002B10(0x5f);
    }
    else {
      uVar5 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x54) = uVar5;
      sub_08002B10(0x5f);
    }
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 4:
    if (*(char *)(param_1 + 0x71) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x68) * 0xe;
        uVar5 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x54) = uVar5;
        *(int *)(param_1 + 100) = -*(int *)(param_1 + 0x68);
      }
      else {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x68) * -0xe;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 0x68);
        uVar5 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x54) = uVar5;
      }
      *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
      goto switchD_0809d114_caseD_8;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    if ((*(char *)(param_1 + 0x73) != '\x04') ||
       (bVar1 = *(char *)(param_1 + 0x12) + 1, *(byte *)(param_1 + 0x12) = bVar1, bVar1 < 3))
    goto switchD_0809d114_caseD_8;
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CEEC(param_1);
    sub_0801CF00(param_1,*(byte *)(param_1 + 0x11) + 0xa928);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885df84,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x13) = 0;
    break;
  case 5:
    if ((*(char *)(iVar8 + 0xd) != '\x1f') || (*(char *)(iVar8 + 0xf) == '\0'))
    goto switchD_0809d114_caseD_8;
    iVar6 = *(int *)(iVar8 + 0x54) + *(int *)(param_1 + 0xbc);
    iVar7 = iVar6 - *(int *)(param_1 + 0x54);
    if (iVar7 < 0) {
      iVar7 = *(int *)(param_1 + 0x54) - iVar6;
    }
    uVar2 = FUN_081288bc(iVar7,0x300);
    *(undefined *)(param_1 + 0x12) = uVar2;
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar5 = 0x300;
    }
    else {
      uVar5 = 0xfffffd00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    uVar5 = FUN_081288bc((*(int *)(iVar8 + 0x58) + *(int *)(param_1 + 0xc0)) -
                         *(int *)(param_1 + 0x58),*(undefined *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    break;
  case 6:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto switchD_0809d114_caseD_8;
    sub_08002B10(0x1b5);
    *(int *)(param_1 + 0x54) = *(int *)(iVar8 + 0x54) + *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x58) = *(int *)(iVar8 + 0x58) + *(int *)(param_1 + 0xc0);
    break;
  case 7:
    *(int *)(param_1 + 0x54) = *(int *)(iVar8 + 0x54) + *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x58) = *(int *)(iVar8 + 0x58) + *(int *)(param_1 + 0xc0);
  default:
    goto switchD_0809d114_caseD_8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0809d114_caseD_8:
  sub_0801CFF0(param_1);
  return in_lr;
}

