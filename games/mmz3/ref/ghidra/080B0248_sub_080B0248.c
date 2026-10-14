// sub_080B0248 at 0x080B0248 (thumb)

undefined4 sub_080B0248(int param_1)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_080b025c_caseD_1;
  case 2:
    if ((*(byte *)(DAT_0202f5c0 + 10) & 1) != 0) {
      if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
        uVar4 = 0xfffffd00;
      }
      else {
        uVar4 = 0x300;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
    }
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar6 = 0;
    sub_080177F4(param_1);
    if ((*(byte *)(DAT_0202f5c0 + 10) & 1) == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
LAB_080b0482:
      iVar6 = 0x300;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x5c);
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0x54) + iVar5;
        *(int *)(param_1 + 0x54) = iVar5;
        iVar6 = sub_08009F80(iVar5 + -0x800,*(undefined4 *)(param_1 + 0x58));
        if (iVar6 == 0) goto LAB_080b0482;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
LAB_080b04e8:
        iVar6 = 0x200;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x200;
      }
      else {
        if (*(char *)(param_1 + 0xf) == '\0') {
          iVar5 = *(int *)(param_1 + 0x54) + iVar5;
          *(int *)(param_1 + 0x54) = iVar5;
          iVar6 = sub_0800A104(iVar5 + -0x800,*(undefined4 *)(param_1 + 0x58));
          if (iVar6 != *(int *)(param_1 + 0x58) + 0x800) {
            *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
          }
          goto LAB_080b0482;
        }
        if (*(char *)(param_1 + 0xf) == '\x01') goto LAB_080b04e8;
      }
    }
    iVar5 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if ((iVar5 != 0) &&
       ((*(char *)(param_1 + 0x12) == '\0' ||
        (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')))
       ) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    iVar6 = *(int *)(param_1 + 100) + iVar6;
    *(int *)(param_1 + 100) = iVar6;
    if (iVar6 < 0xf00) {
      return in_lr;
    }
    uVar1 = *(undefined *)(param_1 + 0x11);
    goto LAB_080b059c;
  case 4:
    goto switchD_080b025c_caseD_4;
  default:
    goto switchD_080b025c_caseD_5;
  case 10:
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + 0x1000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    iVar6 = *(int *)(param_1 + 0x58) +
            ((*(int *)(param_1 + 0x68) - (*(int *)(param_1 + 0x58) + -0x400)) * 0x18 >> 8);
    *(int *)(param_1 + 0x58) = iVar6;
    if (*(int *)(param_1 + 0x68) < iVar6) {
      *(undefined *)(param_1 + 0xe) = 1;
    }
    iVar6 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (iVar6 != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      *(undefined *)(param_1 + 0xe) = 2;
    }
    iVar6 = *(int *)(param_1 + 100) + 0x300;
    *(int *)(param_1 + 100) = iVar6;
    iVar5 = 0xfff;
    goto LAB_080b0590;
  case 0x14:
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_08017700(param_1,0xba01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
switchD_080b025c_caseD_4:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    goto switchD_080b025c_caseD_5;
  }
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_0800736C(param_1 + 0x74,&DAT_08369e64,param_1 + 0x54,2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0x25) = 7;
  sub_08017700(param_1,0xba00);
  sub_0800471C(0x133);
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xfffffd00;
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x11) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080b025c_caseD_1:
  sub_080177F4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined *)(param_1 + 0xe) = 10;
    return in_lr;
  }
  if ((*(byte *)(DAT_0202f5c0 + 10) & 1) == 0) {
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54);
    iVar5 = iVar6 - *(int *)(DAT_0202f5c0 + 0x54);
    if (iVar5 < 1) {
      if (0x1000 < *(int *)(DAT_0202f5c0 + 0x54) - iVar6) goto LAB_080b0380;
LAB_080b03d2:
      *(undefined *)(param_1 + 0x13) = 1;
      iVar5 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar5 + 0x200;
      iVar6 = sub_08009B28(iVar6,iVar5 + 0xa00);
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x68) + 0x200;
        *(int *)(param_1 + 0x68) = iVar6;
        if (0x2fff < iVar6) {
          *(undefined *)(param_1 + 0x13) = 0;
        }
      }
      else {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
        *(undefined *)(param_1 + 0xf) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      uVar4 = 0x200;
    }
    else {
      if (iVar5 < 0x1001) goto LAB_080b03d2;
LAB_080b0380:
      if (*(char *)(param_1 + 0x13) != '\0') goto LAB_080b03d2;
      if (*(int *)(DAT_0202f5c0 + 0x54) < iVar6) {
        *(int *)(param_1 + 0x54) = iVar6 + -0x300;
        iVar6 = sub_08009F80(iVar6 + -0xb00,*(undefined4 *)(param_1 + 0x58));
        if (iVar6 != 0) {
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
          *(undefined *)(param_1 + 0xf) = 1;
        }
      }
      else {
        *(int *)(param_1 + 0x54) = iVar6 + 0x300;
      }
      uVar4 = 0x300;
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
  }
  iVar6 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 100) = iVar6;
  iVar5 = 0xeff;
LAB_080b0590:
  if (iVar5 < iVar6) {
    uVar1 = *(undefined *)(param_1 + 0x11);
LAB_080b059c:
    sub_080AFA08(param_1,param_1 + 0x54,uVar1);
    *(undefined4 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
switchD_080b025c_caseD_5:
  return in_lr;
}

