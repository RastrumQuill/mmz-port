// sub_0804F1D4 at 0x0804F1D4 (thumb)

undefined4 sub_0804F1D4(int param_1)

{
  short sVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_0804f1ee_caseD_11;
    goto LAB_0804f41a;
  case 1:
    local_20 = *(int *)(param_1 + 0x54);
    local_1c = DAT_0202ed54 + -0x5800;
    sub_080A0400(&local_20,0,0x37,1);
    *(undefined *)(param_1 + 0x12) = 0x38;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xcf) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
joined_r0x0804f344:
    if (cVar3 != '\0') goto switchD_0804f1ee_caseD_11;
    goto LAB_0804f41a;
  case 3:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_080127E4(param_1,0xa419);
    *(int *)(param_1 + 0x58) = DAT_0202ed54 + -0x5000;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    iVar5 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54));
    if (-1 < iVar5) goto switchD_0804f1ee_caseD_11;
    sub_080032EC(0x83);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    goto LAB_0804f41a;
  case 5:
    *(undefined2 *)(param_1 + 0x50) = 0x80;
    *(undefined2 *)(param_1 + 0x52) = 0x80;
    sub_080127E4(param_1,0xa41a);
    *(undefined *)(param_1 + 0xd2) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    break;
  case 7:
    sub_080127E4(param_1,0xa41d);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    goto joined_r0x0804f344;
  case 9:
    sub_0809F698(param_1,param_1 + 0x54);
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xa41e);
    *(undefined2 *)(param_1 + 0x50) = 0x80;
    *(undefined2 *)(param_1 + 0x52) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 10:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    psVar6 = (short *)(param_1 + 0x50);
    sVar1 = *psVar6;
    *psVar6 = sVar1 + 2;
    *(short *)(param_1 + 0x52) = sVar1 + 2;
    if (*psVar6 == 0x100) {
LAB_0804f3e8:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
LAB_0804f3ee:
    sub_080128D4(param_1);
    goto switchD_0804f1ee_caseD_11;
  case 0xb:
    sub_08012580(param_1);
    sub_080127D0(param_1);
    sub_080128AC(param_1,0xa402,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xc:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') goto LAB_0804f3e8;
    goto LAB_0804f3ee;
  case 0xd:
    sub_080127E4(param_1,0xa411);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 0xe:
    break;
  case 0xf:
    sub_080127E4(param_1,0xa400);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x10:
    sub_080128D4(param_1);
    bVar2 = (byte)DAT_0202ec42;
    if ((DAT_0202ec42 & 1) == 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(byte *)(param_1 + 0xe) = bVar2 & 1;
    }
  default:
    goto switchD_0804f1ee_caseD_11;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0804f41a:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_0804f1ee_caseD_11:
  if ((byte)(*(char *)(param_1 + 0xe) - 6U) < 5) {
    if (*(char *)(param_1 + 0x13) == '\0') {
      iVar8 = (uint)*(ushort *)(param_1 + 0x50) * 0x28;
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      iVar5 = sub_080EF330(uVar4 * 2 >> 0x11,iVar8);
      local_20 = (*(int *)(param_1 + 0x54) + iVar5) - (iVar8 >> 1);
      local_1c = DAT_0202ed54 + -0x5000;
      pbVar9 = (byte *)(param_1 + 0xd2);
      sub_080A0400(&local_20,0xfffffc00,1,~*pbVar9 & 1);
      *pbVar9 = *pbVar9 + 1;
      pcVar7 = (char *)(param_1 + 0xcf);
      if (*pcVar7 != '\0') {
        *pcVar7 = *pcVar7 + -2;
      }
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      cVar3 = ((byte)(uVar4 * 2 >> 0x11) & 7) + *pcVar7;
    }
    else {
      cVar3 = *(char *)(param_1 + 0x13) + -1;
    }
    *(char *)(param_1 + 0x13) = cVar3;
  }
  return in_lr;
}

