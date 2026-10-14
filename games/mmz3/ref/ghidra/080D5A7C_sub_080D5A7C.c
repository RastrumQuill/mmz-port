// sub_080D5A7C at 0x080D5A7C (thumb)

undefined4 sub_080D5A7C(int param_1)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fa26 = 0x214;
    DAT_0202f826 = 5;
    sub_0800393C(&DAT_085d79d4,0xe280);
    sub_08003E14(&DAT_085d79e0,(DAT_0202f826 - 6) * 0x20 + 0x200);
    DAT_0202fa24 = 0x300;
    DAT_0202f824 = 10;
    sub_0800393C(&DAT_085d79c0,0x10f80);
    sub_08003E14(&DAT_085d79cc,(DAT_0202f824 - 5) * 0x20 + 0x200);
    sub_08017700(param_1,0xb00);
    iVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar5 + -0x180;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = iVar5 + -0x180;
    sub_080D0324(param_1,0x35);
    sub_080D0324(param_1,0x36);
    sub_0800FA2C(param_1);
    DAT_0202f4a6 = 1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x11) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_080d5a98_caseD_b;
    *(undefined *)(param_1 + 0xe) = 1;
    break;
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_080d5a98_caseD_b;
    *(undefined *)(param_1 + 0xe) = 2;
    uVar2 = 6;
    goto LAB_080d5e4a;
  case 3:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 != '\0') goto switchD_080d5a98_caseD_b;
    sub_0801ACF8(8,param_1 + 0x54);
    sub_0800471C(0x11a);
    iVar5 = sub_080BCE88(param_1 + 0x54,1,0);
    *(int *)(param_1 + 0x28) = iVar5;
    *(undefined *)(iVar5 + 0x7c) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x74) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x75) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x76) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    break;
  case 4:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == -0x80) {
      *(undefined *)(param_1 + 0x13) = 0x7e;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      if (*(byte *)(param_1 + 0x12) < 0x40) {
        cVar1 = *(byte *)(param_1 + 0x12) + 0x10;
        goto LAB_080d5cb4;
      }
    }
    else {
      if (0x3f < *(byte *)(param_1 + 0x12)) {
        sub_0800471C(0x135);
        sub_080040A8(0x114,0x2a0);
        sub_080040A8(0x116,0xe0);
      }
      if (*(byte *)(param_1 + 0x12) < 9) {
        if (*(int *)(param_1 + 0x28) != 0) {
          *(undefined *)(*(int *)(param_1 + 0x28) + 0x77) = 1;
        }
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined *)(param_1 + 0x12) = 0x78;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      else {
        cVar1 = *(byte *)(param_1 + 0x12) - 8;
LAB_080d5cb4:
        *(char *)(param_1 + 0x12) = cVar1;
      }
    }
    iVar5 = *(int *)(param_1 + 0x28);
    if (iVar5 != 0) {
      if (((*(byte *)(param_1 + 0x13) & 1) == 0) ||
         ((3 < *(byte *)(param_1 + 0x13) &&
          (uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3, DAT_0202f608 = uVar4 & 0x7fffffff,
          (uVar4 * 2 >> 0x11 & 1) != 0)))) {
        *(int *)(iVar5 + 0x78) = (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12) >> 1] * 0x18;
        *(uint *)(*(int *)(param_1 + 0x28) + 0x78) =
             *(int *)(*(int *)(param_1 + 0x28) + 0x78) + (*(byte *)(param_1 + 0x13) & 1) * 0x800;
      }
      else {
        *(int *)(iVar5 + 0x78) = (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] << 6;
      }
    }
    sub_080041E4(0x114);
    sub_080041E4(0x116);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) goto switchD_080d5a98_caseD_b;
    iVar5 = *(int *)(param_1 + 100) + -8;
LAB_080d5ef8:
    *(int *)(param_1 + 100) = iVar5;
    goto switchD_080d5a98_caseD_b;
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x13) != '\0') {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    }
    sub_080041E4(0x114);
    cVar1 = sub_080041E4(0x116);
    if ((cVar1 != '\x04') || (*(char *)(param_1 + 0x13) != '\0')) goto switchD_080d5a98_caseD_b;
    sub_08004230(0x114);
    sub_08004230(0x116);
    break;
  case 6:
    sub_080040A8(0x110,0x2a0);
    sub_080040A8(0x117,0xe0);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 7:
    sub_080177F4(param_1);
    sub_080041E4(0x110);
    cVar1 = sub_080041E4(0x117);
    if (cVar1 != '\x03') goto switchD_080d5a98_caseD_b;
    sub_08004230(0x110);
    sub_08004230(0x117);
    break;
  case 8:
    sub_080040A8(0x10f,0x2a0);
    sub_080040A8(0x115,0xe0);
    sub_080041E4(0x10f);
    sub_080041E4(0x115);
    sub_08004230(0x10f);
    sub_08004230(0x115);
    *(undefined *)(param_1 + 0x13) = 0x3c;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 9:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x13);
    if (cVar1 != '\0') {
LAB_080d5e68:
      *(char *)(param_1 + 0x13) = cVar1 + -1;
      goto switchD_080d5a98_caseD_b;
    }
    *(undefined *)(param_1 + 0xe) = 3;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) goto switchD_080d5a98_caseD_b;
    *(undefined *)(param_1 + 0xe) = 4;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar2 = 0x1e;
LAB_080d5e4a:
    *(undefined *)(param_1 + 0x13) = uVar2;
    break;
  case 10:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x13);
    if (cVar1 == '\0') {
      bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
      if ((bVar3 & 0x20) != 0) {
        *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xdf;
        sub_0809CF0C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x6400,0x1e);
      }
      bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
      if ((bVar3 & 0x40) != 0) {
        *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xbf;
        sub_0809CF0C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x6400,0x28);
      }
      bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
      if ((bVar3 & 0x80) != 0) {
        *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0x7f;
        sub_0809CF0C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x6400,0x32);
      }
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) {
        if (*(int *)(param_1 + 0x5c) != 0) {
          iVar5 = *(int *)(param_1 + 0x5c) + -4;
          goto LAB_080d5ef0;
        }
      }
      else if (*(int *)(param_1 + 0x5c) < 0x60) {
        iVar5 = *(int *)(param_1 + 0x5c) + 8;
LAB_080d5ef0:
        *(int *)(param_1 + 0x5c) = iVar5;
      }
      iVar5 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
      goto LAB_080d5ef8;
    }
    goto LAB_080d5e68;
  default:
    goto switchD_080d5a98_caseD_b;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d5a98_caseD_b:
  bVar3 = *(char *)(param_1 + 0x11) + 1;
  *(byte *)(param_1 + 0x11) = bVar3;
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar3;
  if ((byte)(*(char *)(param_1 + 0xd) - 4U) < 5) {
    sub_0801ACF8(2,param_1 + 0x54);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    iVar6 = *(int *)(param_1 + 100) + (uVar4 * 2 >> 0x11 & 0x1ff);
    *(int *)(param_1 + 0x54) = iVar6;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (uVar4 * 2 >> 0x11 & 0x1ff);
    iVar5 = *(int *)(param_1 + 0x28);
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x54) = iVar6;
      *(int *)(iVar5 + 0x58) = *(int *)(param_1 + 0x58) + -0x4000;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) + (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)];
  }
  return in_lr;
}

