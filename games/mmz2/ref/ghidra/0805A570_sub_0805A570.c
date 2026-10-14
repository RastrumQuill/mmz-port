// sub_0805A570 at 0x0805A570 (thumb)

undefined4 sub_0805A570(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  ushort *puVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa914);
    iVar2 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      uVar6 = 0x100;
    }
    else {
      uVar6 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar4 = sub_08008CFC();
    if (sVar4 == 0) {
      return in_lr;
    }
    uVar6 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    break;
  case 1:
    sub_080127E4(param_1,0xa917);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 3:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    break;
  case 4:
    bVar3 = *(byte *)(param_1 + 10) >> 4;
    uVar7 = bVar3 & 1;
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xa917);
    *(char *)(param_1 + 0x4c) = (char)uVar7;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
    if ((bVar3 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    sub_08012CD0(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    sub_080032EC(0x9b);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080128D4(param_1);
    puVar8 = (ushort *)(param_1 + 0x50);
    uVar5 = *puVar8;
    *puVar8 = uVar5 - 0x40;
    if (0x3f < (ushort)(uVar5 - 0x40)) {
      return in_lr;
    }
    *puVar8 = 4;
    break;
  case 6:
    sub_080128D4(param_1);
    uVar5 = *(ushort *)(param_1 + 0x52) - 0x10;
    *(ushort *)(param_1 + 0x52) = uVar5;
    if (0x80 < uVar5) {
      return in_lr;
    }
    break;
  case 7:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x800;
    uVar5 = *(ushort *)(param_1 + 0x52);
    if (uVar5 < 0x200) {
      *(ushort *)(param_1 + 0x52) = uVar5 + 0x20;
    }
    uVar7 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (0x800 < uVar7) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      DAT_0202ec42 = DAT_0202ec42 | 2;
    }
  default:
    goto switchD_0805a64a_caseD_8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0805a64a_caseD_8:
  return in_lr;
}

