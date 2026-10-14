// sub_080C7340 at 0x080C7340 (thumb)

undefined4 sub_080C7340(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08348d28,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080127E4(param_1,0xc401);
    *(undefined2 *)(param_1 + 0x50) = 0x20;
    *(undefined2 *)(param_1 + 0x52) = 0x200;
    *(int *)(param_1 + 0x58) = DAT_0202ed54 + -0x6000;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    iVar4 = *(int *)(param_1 + 0x58) + 0x1c00;
    *(int *)(param_1 + 0x58) = iVar4;
    if (iVar4 <= *(int *)(param_1 + 0x68)) goto switchD_080c7354_caseD_14;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
    sub_080032EC(0x9b);
    *(undefined *)(param_1 + 0x12) = 1;
    break;
  case 2:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 0x40 + 0x20;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * -0x20 + 0x160;
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 5) goto switchD_080c7354_caseD_14;
    *(undefined *)(param_1 + 0x12) = 1;
    break;
  case 3:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * -4 + 0x120;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 4 + 0xe0;
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 9) goto switchD_080c7354_caseD_14;
    break;
  case 4:
    sub_08012580(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xc401);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080128D4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      sub_08012CD0(param_1);
    }
    else {
      sub_08012C04(param_1);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x1e;
    }
    goto switchD_080c7354_caseD_14;
  case 6:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080c7354_caseD_14;
    sub_080127E4(param_1,0xc400);
    break;
  case 7:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_080c7354_caseD_14;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 8:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080c7354_caseD_14;
    sub_080127E4(param_1,0xc402);
    break;
  case 9:
    sub_080128D4(param_1);
    iVar4 = *(int *)(param_1 + 0x54) + 0x100;
    *(int *)(param_1 + 0x54) = iVar4;
    if (iVar4 < 0x147001) goto switchD_080c7354_caseD_14;
    *(undefined4 *)(param_1 + 0x54) = 0x147000;
    sub_080127E4(param_1,0xc409);
    break;
  case 10:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080c7354_caseD_14;
    sub_080127E4(param_1,0xc40a);
    break;
  case 0xb:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_080c7354_caseD_14;
    sub_080127E4(param_1,0xc409);
    break;
  case 0xc:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080c7354_caseD_14;
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 0xd:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080c7354_caseD_14;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    break;
  case 0xe:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) goto switchD_080c7354_caseD_14;
    break;
  case 0xf:
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x10:
    sub_080128D4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      sub_08012C04(param_1);
    }
    else {
      sub_08012CD0(param_1);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080c7354_caseD_14;
    sub_080032EC(0x9b);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 0x11:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * -4 + 0x120;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 4 + 0xe0;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080c7354_caseD_14;
    *(undefined *)(param_1 + 0x12) = 4;
    break;
  case 0x12:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 0x40 + 0x20;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * -0x20 + 0x160;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080c7354_caseD_14;
    *(undefined4 *)(param_1 + 0x60) = 0xfffff400;
    break;
  case 0x13:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x20;
    iVar4 = *(int *)(param_1 + 0x60) + -0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar3 < 0x3001) goto switchD_080c7354_caseD_14;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080c7354_caseD_14;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c7354_caseD_14:
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if (DAT_0202ebf7 + -2 < 1) {
      DAT_0202ebf7 = '\0';
    }
    else {
      DAT_0202ebf7 = DAT_0202ebf7 + -2;
    }
    sub_080032EC(0x108);
  }
  return in_lr;
}

