// sub_0804ABF4 at 0x0804ABF4 (thumb)

undefined4 sub_0804ABF4(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa10c);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x3500;
    }
    *(undefined *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      uVar4 = 0x100;
    }
    else {
      uVar4 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    sub_08003338((int)*(short *)(param_1 + 0xc0));
    *(short *)(param_1 + 0xc0) = -1;
    *(undefined *)(param_1 + 0xdc) = 1;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar2 = sub_08008CFC();
    if (sVar2 == 0) goto switchD_0804acd8_caseD_8;
    uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    break;
  case 1:
    sub_080127E4(param_1,0xa10e);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_0804acd8_caseD_8;
    break;
  case 3:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) goto switchD_0804acd8_caseD_8;
    break;
  case 4:
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar5 = bVar1 & 1;
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xa10e);
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_08012CD0(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    sub_080032EC(0x9b);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080128D4(param_1);
    puVar7 = (ushort *)(param_1 + 0x50);
    uVar3 = *puVar7;
    *puVar7 = uVar3 - 0x40;
    if (0x3f < (ushort)(uVar3 - 0x40)) goto switchD_0804acd8_caseD_8;
    *puVar7 = 4;
    break;
  case 6:
    sub_080128D4(param_1);
    uVar3 = *(ushort *)(param_1 + 0x52) - 0x10;
    *(ushort *)(param_1 + 0x52) = uVar3;
    if (0x80 < uVar3) goto switchD_0804acd8_caseD_8;
    break;
  case 7:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x800;
    uVar3 = *(ushort *)(param_1 + 0x52);
    if (uVar3 < 0x200) {
      *(ushort *)(param_1 + 0x52) = uVar3 + 0x20;
    }
    uVar5 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (0x800 < uVar5) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      DAT_0202ec42 = DAT_0202ec42 | 2;
    }
  default:
    goto switchD_0804acd8_caseD_8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0804acd8_caseD_8:
  iVar6 = *(int *)(param_1 + 0xc4) + 0x1800;
  if ((*(int *)(param_1 + 0x54) < iVar6) ||
     (iVar6 = *(int *)(param_1 + 200) + -0x1800, iVar6 < *(int *)(param_1 + 0x54))) {
    *(int *)(param_1 + 0x54) = iVar6;
  }
  return in_lr;
}

