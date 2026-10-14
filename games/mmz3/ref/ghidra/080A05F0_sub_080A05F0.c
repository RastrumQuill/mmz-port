// sub_080A05F0 at 0x080A05F0 (thumb)

undefined4 sub_080A05F0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_080a0606_caseD_1;
  case 2:
    *(bool *)(param_1 + 0x13) = *(int *)(param_1 + 0x58) < *(int *)(DAT_0202f5c0 + 0x58);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (*(char *)(param_1 + 0x13) == '\0') {
      iVar5 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = iVar5;
      iVar3 = *(int *)(param_1 + 0xb8) + -0x9000;
      if (iVar3 <= iVar5) goto switchD_080a0606_caseD_a;
      *(int *)(param_1 + 0x58) = iVar3;
      goto LAB_080a0768;
    }
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = iVar5;
    iVar3 = *(int *)(param_1 + 0xb8) + 0x9000;
    if (iVar3 < iVar5) {
      *(int *)(param_1 + 0x58) = iVar3;
      goto LAB_080a0768;
    }
    goto switchD_080a0606_caseD_a;
  case 4:
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) * (uVar2 * 2 >> 0x11 & 1);
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) ^ 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if (*(char *)(param_1 + 0x12) == '\0') {
      iVar5 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar5;
      iVar3 = *(int *)(param_1 + 0xb4);
      iVar6 = -0x5800;
      goto LAB_080a0760;
    }
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar3 = *(int *)(param_1 + 0xb4) + 0x5800;
    if (iVar3 < iVar5) goto LAB_080a0766;
    goto switchD_080a0606_caseD_a;
  case 6:
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) ^ 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    if (*(char *)(param_1 + 0x13) == '\0') {
      iVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = iVar3;
      if (iVar3 < *(int *)(param_1 + 0x68)) goto LAB_080a07a6;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = iVar3;
      if (*(int *)(param_1 + 0x68) < iVar3) {
LAB_080a07a6:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        *(undefined *)(iVar7 + 0xbe) = 1;
      }
    }
    goto switchD_080a0606_caseD_a;
  case 8:
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') goto switchD_080a0606_caseD_a;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
    goto LAB_080a0834;
  default:
    goto switchD_080a0606_caseD_a;
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  sub_08007390(param_1 + 0x74,&DAT_083678e4);
  *(undefined4 *)(param_1 + 0x5c) = 0x80;
  sub_08017700(param_1,0x3701);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a0606_caseD_1:
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar5 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar3 = *(int *)(param_1 + 0xb4);
    iVar6 = -0x6800;
LAB_080a0760:
    iVar3 = iVar3 + iVar6;
    if (iVar5 < iVar3) goto LAB_080a0766;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar3 = *(int *)(param_1 + 0xb4) + 0x6800;
    if (iVar3 < iVar5) {
LAB_080a0766:
      *(int *)(param_1 + 0x54) = iVar3;
LAB_080a0768:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
switchD_080a0606_caseD_a:
  sub_080177F4(param_1);
  iVar3 = *(int *)(param_1 + 0x5c) + 0x30;
  *(int *)(param_1 + 0x5c) = iVar3;
  if (0x800 < iVar3) {
    *(undefined4 *)(param_1 + 0x5c) = 0x800;
  }
  if (1 < *(byte *)(iVar7 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
LAB_080a0834:
    *(undefined4 *)(param_1 + 0x14) = uVar4;
  }
  return in_lr;
}

