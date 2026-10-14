// sub_0805D8F8 at 0x0805D8F8 (thumb)

undefined4 sub_0805D8F8(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa10);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar2 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar2 & 0xfb;
    if ((bVar2 & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(undefined *)(param_1 + 0x12) = 0x1c;
    sub_080032EC(0x7a);
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    sub_080AC8A4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
    sub_08003338((int)*(short *)(param_1 + 0xe0));
    *(short *)(param_1 + 0xe0) = -1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080128D4(param_1);
    if (((*(byte *)(param_1 + 0x12) & 1) == 0) &&
       (uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar4 & 0x7fffffff,
       (uVar4 * 2 >> 0x11 & 1) != 0)) {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar7 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar7 & 0x7fffffff;
      sub_080AC8A4(*(int *)(param_1 + 0x54) + (4 - (uVar4 * 2 >> 0x11 & 7)) * 0x100,
                   *(int *)(param_1 + 0x58) + (uVar7 * 2 >> 0x11 & 7) * -0x100,0);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_0805d9be_caseD_8;
    break;
  case 1:
    sub_080127E4(param_1,0xaa12);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_0805d9be_caseD_8;
    break;
  case 3:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) goto switchD_0805d9be_caseD_8;
    break;
  case 4:
    bVar2 = *(byte *)(param_1 + 10) >> 4;
    uVar4 = bVar2 & 1;
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xaa12);
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08012CD0(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    sub_080032EC(0x9b);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080128D4(param_1);
    puVar6 = (ushort *)(param_1 + 0x50);
    uVar3 = *puVar6;
    *puVar6 = uVar3 - 0x40;
    if (0x3f < (ushort)(uVar3 - 0x40)) goto switchD_0805d9be_caseD_8;
    *puVar6 = 4;
    break;
  case 6:
    sub_080128D4(param_1);
    uVar3 = *(ushort *)(param_1 + 0x52) - 0x10;
    *(ushort *)(param_1 + 0x52) = uVar3;
    if (0x80 < uVar3) goto switchD_0805d9be_caseD_8;
    break;
  case 7:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x800;
    uVar3 = *(ushort *)(param_1 + 0x52);
    if (uVar3 < 0x200) {
      *(ushort *)(param_1 + 0x52) = uVar3 + 0x20;
    }
    uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (0x800 < uVar4) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      DAT_0202ec42 = DAT_0202ec42 | 2;
    }
  default:
    goto switchD_0805d9be_caseD_8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0805d9be_caseD_8:
  iVar5 = *(int *)(param_1 + 0xc0) + 0x1000;
  if ((*(int *)(param_1 + 0x54) < iVar5) ||
     (iVar5 = *(int *)(param_1 + 0xc4) + -0x1000, iVar5 < *(int *)(param_1 + 0x54))) {
    *(int *)(param_1 + 0x54) = iVar5;
  }
  if (*(byte *)(param_1 + 0xd) < 7) {
    iVar5 = *(int *)(param_1 + 200) + 0x2000;
    if ((*(int *)(param_1 + 0x58) < iVar5) ||
       (iVar5 = *(int *)(param_1 + 0xcc) + -0x1800, iVar5 < *(int *)(param_1 + 0x58))) {
      *(int *)(param_1 + 0x58) = iVar5;
    }
  }
  return in_lr;
}

