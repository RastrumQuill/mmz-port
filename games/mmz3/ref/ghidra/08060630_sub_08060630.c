// sub_08060630 at 0x08060630 (thumb)

undefined4 sub_08060630(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08017700(param_1,0xbc0e);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar2 < 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
LAB_0806070e:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_08017700(param_1,0xbc13);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) goto LAB_0806070e;
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      DAT_020301b2 = DAT_020301b2 | 2;
      sub_0800471C(0x110);
      sub_0805EC90(param_1);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  default:
    goto switchD_08060644_caseD_6;
  }
  sub_080177F4(param_1);
switchD_08060644_caseD_6:
  return in_lr;
}

