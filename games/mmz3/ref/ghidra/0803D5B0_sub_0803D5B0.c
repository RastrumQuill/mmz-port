// sub_0803D5B0 at 0x0803D5B0 (thumb)

undefined4 sub_0803D5B0(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_08004768(0x10d);
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfb;
    if ((bVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto switchD_0803d5c4_caseD_1;
    }
    cVar2 = *(char *)(param_1 + 0xd) + '\x02';
    goto LAB_0803d6ba;
  case 1:
switchD_0803d5c4_caseD_1:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) {
      return in_lr;
    }
    sub_0800471C(0x2a);
    sub_080B2484(1,param_1 + 0x54);
    sub_080B69A8(param_1,param_1 + 0x54);
    goto LAB_0803d6b6;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0803d5c4_caseD_3:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      DAT_020301b2 = DAT_020301b2 | 2;
      sub_08024FE4(9,param_1 + 0x54);
LAB_0803d6b6:
      cVar2 = *(char *)(param_1 + 0xd) + '\x01';
LAB_0803d6ba:
      *(char *)(param_1 + 0xd) = cVar2;
    }
switchD_0803d5c4_caseD_4:
    return in_lr;
  case 3:
    goto switchD_0803d5c4_caseD_3;
  default:
    goto switchD_0803d5c4_caseD_4;
  }
}

