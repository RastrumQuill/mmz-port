// sub_080A0A28 at 0x080A0A28 (thumb)

undefined4 sub_080A0A28(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_080a0a3e_caseD_1;
  case 2:
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar4 * 2 >> 0x11) & 1) * '\f' + '\b';
    sub_08017700(param_1,0xa71d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_08017934(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
LAB_080a0bca:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    goto switchD_080a0a3e_caseD_a;
  case 4:
    sub_08007390(param_1 + 0x74,&DAT_08367944);
    sub_08017700(param_1,0xa71e);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08017934(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') goto LAB_080a0bca;
    goto switchD_080a0a3e_caseD_a;
  case 6:
    sub_08017700(param_1,0xa71f);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 1;
    *(uint *)(param_1 + 0x5c) = uVar4 * 0x80;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = uVar4 * -0x100;
    }
    *(int *)(param_1 + 0x5c) = iVar6;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    iVar6 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(int *)(param_1 + 0x5c) = iVar6 + -0x30;
      if (iVar6 + -0x30 < -0x600) {
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffa00;
      }
      iVar6 = *(int *)(param_1 + 100);
      if (iVar6 <= *(int *)(param_1 + 0x54)) goto LAB_080a0c80;
LAB_080a0c70:
      *(int *)(param_1 + 0x54) = iVar6;
      *(undefined *)(iVar7 + 0xbe) = 1;
      goto LAB_080a0c7a;
    }
    *(int *)(param_1 + 0x5c) = iVar6 + 0x30;
    if (0x600 < iVar6 + 0x30) {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
    }
    iVar6 = *(int *)(param_1 + 100);
    if (iVar6 < *(int *)(param_1 + 0x54)) goto LAB_080a0c70;
    goto LAB_080a0c80;
  case 8:
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      sub_08017934(param_1);
      goto switchD_080a0a3e_caseD_a;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar5 = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
    goto LAB_080a0cf4;
  default:
    goto switchD_080a0a3e_caseD_a;
  }
  sub_08007390(param_1 + 0x74,&DAT_0836792c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  sub_08017700(param_1,0xa71c);
  if (*(byte *)(param_1 + 0x12) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar4 = *(byte *)(param_1 + 0x12) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar4 & 0x7fffffff;
  iVar6 = (uVar4 * 2 >> 0x11 & 1) * -0x180 + -0x280;
  *(uint *)(param_1 + 0x5c) = iVar6 + -iVar6 * (uint)*(byte *)(param_1 + 0x12) * 2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a0a3e_caseD_1:
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar6;
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar3 = *(int *)(param_1 + 0xb4) + -0x5000;
    if (iVar6 < iVar3) goto LAB_080a0b40;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb4) + 0x5000;
    if (iVar3 < iVar6) {
LAB_080a0b40:
      *(int *)(param_1 + 0x54) = iVar3;
LAB_080a0c7a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
LAB_080a0c80:
  sub_08017934(param_1);
switchD_080a0a3e_caseD_a:
  if (1 < *(byte *)(iVar7 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar5 = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
LAB_080a0cf4:
    *(undefined4 *)(param_1 + 0x14) = uVar5;
  }
  return in_lr;
}

