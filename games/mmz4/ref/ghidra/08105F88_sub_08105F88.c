// sub_08105F88 at 0x08105F88 (thumb)

undefined4 sub_08105F88(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  bVar2 = false;
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sVar4 = sub_0810530C(param_1,0xcc09,1);
    if (sVar4 == 0) goto switchD_08105f9e_caseD_10;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x25) = 2;
    break;
  case 2:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_08105f9e_caseD_10;
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 3:
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x60) +
         (*(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17))
         + 0x100) * 0x1b + -0x3600;
    iVar5 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)iVar5;
    if (-1 < iVar5 * 0x1000000) goto switchD_08105f9e_caseD_10;
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 4:
    sub_0801CFF0(param_1);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') goto switchD_08105f9e_caseD_10;
    sub_0801CF00(param_1,0xcc0a);
    *(undefined *)(param_1 + 0x12) = 0x96;
    break;
  case 5:
    sub_0801CFF0(param_1);
    cVar3 = *(char *)(param_1 + 0x12);
    if (((cVar3 == 'Z') || (cVar3 == '\x1e')) || (cVar3 == '\x01')) {
      bVar2 = true;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') goto switchD_08105f9e_caseD_10;
    uVar6 = sub_080E8658(param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar6;
    break;
  case 6:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_08105f9e_caseD_10;
    bVar2 = true;
    uVar6 = 0xcc0b;
    goto LAB_08106236;
  case 7:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      sub_0801CFF0(param_1);
      goto switchD_08105f9e_caseD_10;
    }
    bVar2 = true;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 8:
    sub_0801CFF0(param_1);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') goto switchD_08105f9e_caseD_10;
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x800;
    sub_0801CF00(param_1,0xb419);
    *(undefined *)(param_1 + 0x12) = 0x20;
    break;
  case 9:
    sub_0801CFF0(param_1);
    if ((*(char *)(param_1 + 0x73) != '\x04') ||
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0'))
    goto switchD_08105f9e_caseD_10;
    uVar6 = 0xb41a;
    goto LAB_08106236;
  case 10:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_08105f9e_caseD_10;
    sub_0801CF00(param_1,0xb402);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 0xb:
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x60) +
         (*(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17))
         + 0x100) * -0xc + 0x1800;
    iVar5 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)iVar5;
    if (-1 < iVar5 * 0x1000000) goto switchD_08105f9e_caseD_10;
    break;
  case 0xc:
    sub_0801CFF0(param_1);
    if ((*(char *)(param_1 + 0x73) != '\x04') ||
       ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0)) goto switchD_08105f9e_caseD_10;
    uVar6 = 0xb40a;
    goto LAB_08106236;
  case 0xd:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_08105f9e_caseD_10;
    uVar6 = 0xb40b;
    goto LAB_08106236;
  case 0xe:
    sub_0801CFF0(param_1);
    if ((*(char *)(param_1 + 0x73) != '\x03') ||
       ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0)) goto switchD_08105f9e_caseD_10;
    uVar6 = 0xb40c;
LAB_08106236:
    sub_0801CF00(param_1,uVar6);
    break;
  case 0xf:
    sub_0801CFF0(param_1);
  default:
    goto switchD_08105f9e_caseD_10;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_08105f9e_caseD_10:
  if (((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) && (*(int *)(param_1 + 0x28) == 0)) {
    bVar2 = true;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (bVar2) {
      if (*(byte *)(param_1 + 0xd) < 8) {
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0x2000;
        sub_08002B10(0x3a);
      }
      else {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + -0x600;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0xe00;
      }
      iVar5 = sub_080D4C80(param_1 + 100,1,0);
      *(int *)(param_1 + 0x28) = iVar5;
      *(undefined *)(iVar5 + 0x7c) = 0;
      *(undefined *)(*(int *)(param_1 + 0x28) + 0x74) = 0x1f;
      *(undefined *)(*(int *)(param_1 + 0x28) + 0x75) = 0x1f;
      *(undefined *)(*(int *)(param_1 + 0x28) + 0x76) = 0x1f;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
      *(undefined *)(param_1 + 0x11) = 0;
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    if (bVar2) {
      *(undefined *)(param_1 + 0x11) = 0;
      *(undefined *)(param_1 + 0x13) = 0;
      sub_08002B10(0x3a);
    }
    bVar1 = *(byte *)(param_1 + 0x11);
    if (((7 < *(byte *)(param_1 + 0xd)) && (bVar1 < 0x40)) ||
       (*(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01', bVar1 < 0x40)) {
      *(byte *)(param_1 + 0x11) = bVar1 + 8;
    }
    bVar1 = *(byte *)(param_1 + 0x13);
    if (((bVar1 < 5) || ((bVar1 & 1) == 0)) &&
       (((bVar1 < 9 || ((bVar1 & 3) == 0)) && ((bVar1 < 0x10 || ((bVar1 & 7) != 0)))))) {
      if (*(byte *)(param_1 + 0xd) < 8) {
        *(int *)(*(int *)(param_1 + 0x28) + 0x78) =
             (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x11)] * 0x30;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x28) + 0x78) =
             (int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x11)] << 6;
      }
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
    }
    if (*(byte *)(param_1 + 0xd) < 8) {
      if (*(byte *)(param_1 + 0x13) < 0x31) {
        return in_lr;
      }
    }
    else if (*(byte *)(param_1 + 0x13) < 0x21) {
      return in_lr;
    }
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x77) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

