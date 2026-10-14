// sub_08113968 at 0x08113968 (thumb)

undefined4 sub_08113968(int param_1)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    DAT_03002ec8 = 0;
    sub_08002348();
    DAT_02000a40 = 0;
    DAT_02000a50 = 0;
    DAT_02000a5e = 0xff;
    DAT_02000a60 = 0;
    DAT_03002ac0 = 0;
    DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x100;
    sub_0810CE60();
    sub_0810CF4C();
    sub_0810DE38(&DAT_0202f620);
    if (*(short *)(param_1 + 0x625e) == 3) {
      *(undefined *)(param_1 + 2) = 9;
      goto switchD_0811397c_caseD_a;
    }
    if (DAT_02000a80 != '1') {
      sub_08002B10(6);
      sub_080069F4(0xf0);
      sub_0810DED0(0xd9);
    }
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_0811397c_caseD_2;
  case 3:
    goto switchD_0811397c_caseD_3;
  case 4:
    goto switchD_0811397c_caseD_4;
  case 5:
    goto switchD_0811397c_caseD_5;
  case 6:
    goto switchD_0811397c_caseD_6;
  case 7:
    goto switchD_0811397c_caseD_7;
  case 8:
    goto switchD_0811397c_caseD_8;
  case 9:
    goto switchD_0811397c_caseD_9;
  default:
    goto switchD_0811397c_caseD_a;
  }
  if (DAT_0202f38a != 0) goto switchD_0811397c_caseD_a;
  if (((DAT_02000a81 != '8') && (cVar3 = sub_081088C4(), cVar3 != '\0')) &&
     (*(char *)(*(int *)(param_1 + 0x63a8) + 0xf0) == '\a')) {
    sub_08002B10(6);
    sub_080069F4(0xf1);
    sub_0810DED0(0xda);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_0811397c_caseD_2:
  if (DAT_0202f38a != 0) goto switchD_0811397c_caseD_a;
  if ((DAT_02000a82 != '>') && (*(char *)(*(int *)(param_1 + 0x63a8) + 0xf0) == '\0')) {
    sub_08002B10(6);
    sub_080069F4(0xf2);
    sub_0810DED0(0xdc);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_0811397c_caseD_3:
  if (DAT_0202f38a != 0) goto switchD_0811397c_caseD_a;
  if ((DAT_02000a83 != 'D') && (*(short *)(param_1 + 0x625e) == 1)) {
    sub_08002B10(6);
    sub_080069F4(0xf3);
    sub_0810DED0(0xdd);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_0811397c_caseD_4:
  if (DAT_0202f38a != 0) goto switchD_0811397c_caseD_a;
  if ((DAT_02000a84 != 'J') && (DAT_0202e8e0[1] == '\x06')) {
    sub_08002B10(6);
    sub_080069F4(0xf4);
    sub_0810DED0(0xde);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_0811397c_caseD_5:
  if (DAT_0202f38a != 0) goto switchD_0811397c_caseD_a;
  if ((DAT_02000a85 != 'P') && (cVar3 = sub_0800694C(), cVar3 != '\0')) {
    sub_08002B10(6);
    sub_080069F4(0xf5);
    sub_0810DED0(0xdf);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_0811397c_caseD_6:
  if (DAT_0202f38a != 0) goto switchD_0811397c_caseD_a;
  if ((DAT_02000a86 != 'V') && (cVar3 = sub_08108A48(), cVar3 != '\0')) {
    sub_08002B10(6);
    sub_080069F4(0xf6);
    sub_0810DED0(0xe0);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_0811397c_caseD_7:
  if (DAT_0202f38a != 0) goto switchD_0811397c_caseD_a;
  if ((DAT_02000a87 != '\\') && (*(uint *)(param_1 + 0x6308) < 0x34bc1)) {
    sub_08002B10(6);
    sub_080069F4(0xf7);
    sub_0810DED0(0xe1);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_0811397c_caseD_8:
  if (DAT_0202f38a != 0) goto switchD_0811397c_caseD_a;
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_0811397c_caseD_9:
  if (DAT_0202f38a != 0) goto switchD_0811397c_caseD_a;
  uVar1 = *(ushort *)(param_1 + 0x625c);
  if (uVar1 < 99) {
    *(ushort *)(param_1 + 0x625c) = uVar1 + 1;
  }
  pbVar6 = (byte *)(param_1 + 0x6270);
  sub_0801E8D8(pbVar6);
  sVar2 = *(short *)(param_1 + 0x625e);
  if (sVar2 == 1) {
    bVar5 = *pbVar6;
    bVar4 = 1;
LAB_08113c72:
    *pbVar6 = bVar4 | bVar5;
  }
  else {
    if (sVar2 == 2) {
      bVar5 = *pbVar6;
      bVar4 = 2;
      goto LAB_08113c72;
    }
    if (sVar2 == 3) {
      bVar5 = *pbVar6;
      bVar4 = 4;
      goto LAB_08113c72;
    }
  }
  sub_0801E878(1,param_1 + 0x6270);
  uVar8 = *(undefined4 *)(param_1 + 0x6308);
  sub_0801E944(param_1 + 0x6300);
  *(undefined4 *)(param_1 + 0x6308) = uVar8;
  *DAT_0202e8e0 = 2;
  iVar7 = param_1 + 0x6348;
  sub_080382F0(*(undefined4 *)(param_1 + 0x63a8),iVar7);
  sub_08038240(iVar7);
  sub_080382BC(*(undefined4 *)(param_1 + 0x63a8),iVar7);
  sub_08112080(param_1,0xc00);
switchD_0811397c_caseD_a:
  sub_0810DE84();
  return in_lr;
}

