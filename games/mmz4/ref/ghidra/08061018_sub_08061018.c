// sub_08061018 at 0x08061018 (thumb)

undefined4 sub_08061018(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar3 = (uint)*(byte *)(DAT_0202dbf0 + 0x174) * 8;
  iVar5 = *(int *)(&DAT_0884fe30 + iVar3);
  iVar3 = *(int *)(&DAT_0884fe34 + iVar3);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa519);
    *(undefined *)(param_1 + 0x12) = 0x26;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0xf) == '\0') && ('\x02' < *(char *)(param_1 + 0x71))) {
    iVar4 = sub_080DA918(param_1 + 0x54,0,0xc1);
    *(int *)(param_1 + 0xc0) = iVar4;
    if (iVar4 == 0) {
      return in_lr;
    }
    *(undefined *)(iVar4 + 0x74) = 0xff;
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x75) = 0;
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x76) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar6;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 10;
  iVar4 = *(int *)(param_1 + 0xc0);
  if (iVar4 == 0) goto LAB_0806128c;
  iVar3 = iVar3 >> 0x11;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(iVar4 + 0x5c) = iVar6 + -0x1680;
    *(int *)(iVar4 + 0x7c) = *(int *)(param_1 + 0x54) + -0x1500;
    *(int *)(iVar4 + 0x60) = *(int *)(param_1 + 0x58) + -0xd80;
    *(int *)(iVar4 + 0x80) = *(int *)(param_1 + 0x58) + -0xc00;
    iVar6 = DAT_0202dbf0;
    iVar7 = *(int *)(DAT_0202dbf0 + 0x54);
    iVar8 = *(int *)(iVar4 + 0x60) + (*(int *)(iVar4 + 0x5c) - iVar7);
    iVar5 = *(int *)(DAT_0202dbf0 + 0x58) + (iVar5 >> 0x10);
    if ((iVar5 + iVar3 <= iVar8) || (iVar8 <= iVar5 - iVar3)) {
      iVar3 = *(int *)(param_1 + 0xb8) + 0x400;
      *(int *)(iVar4 + 0x58) = iVar3;
      iVar5 = *(int *)(param_1 + 0xb8) + 0x400;
      *(int *)(iVar4 + 0x68) = iVar5;
      *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x7c) - (iVar3 - *(int *)(iVar4 + 0x80));
      iVar3 = *(int *)(iVar4 + 0x5c) - (iVar5 - *(int *)(iVar4 + 0x60));
      goto LAB_08061248;
    }
    *(int *)(iVar4 + 0x54) = iVar7;
    iVar3 = *(int *)(iVar6 + 0x54);
    *(int *)(iVar4 + 100) = iVar3;
    *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x80) + (*(int *)(iVar4 + 0x7c) - iVar7);
    *(int *)(iVar4 + 0x68) = (*(int *)(iVar4 + 0x5c) - iVar3) + *(int *)(iVar4 + 0x60);
  }
  else {
    *(int *)(iVar4 + 0x5c) = iVar6 + 0x1500;
    *(int *)(iVar4 + 0x7c) = *(int *)(param_1 + 0x54) + 0x1680;
    *(int *)(iVar4 + 0x60) = *(int *)(param_1 + 0x58) + -0xc00;
    *(int *)(iVar4 + 0x80) = *(int *)(param_1 + 0x58) + -0xd80;
    iVar6 = DAT_0202dbf0;
    iVar8 = *(int *)(DAT_0202dbf0 + 0x54);
    iVar7 = *(int *)(iVar4 + 0x60) - (*(int *)(iVar4 + 0x5c) - iVar8);
    if ((((DAT_0202e918 & 8) == 0) &&
        (iVar5 = *(int *)(DAT_0202dbf0 + 0x58) + (iVar5 >> 0x10), iVar7 < iVar5 + iVar3)) &&
       (iVar5 - iVar3 < iVar7)) {
      *(int *)(iVar4 + 0x54) = iVar8;
      iVar3 = *(int *)(iVar6 + 0x54);
      *(int *)(iVar4 + 100) = iVar3;
      *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x80) - (*(int *)(iVar4 + 0x7c) - iVar8);
      *(int *)(iVar4 + 0x68) = *(int *)(iVar4 + 0x60) - (*(int *)(iVar4 + 0x5c) - iVar3);
    }
    else {
      iVar3 = *(int *)(param_1 + 0xb8) + 0x400;
      *(int *)(iVar4 + 0x58) = iVar3;
      iVar5 = *(int *)(param_1 + 0xb8) + 0x400;
      *(int *)(iVar4 + 0x68) = iVar5;
      *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x7c) + (iVar3 - *(int *)(iVar4 + 0x80));
      iVar3 = *(int *)(iVar4 + 0x5c) + (iVar5 - *(int *)(iVar4 + 0x60));
LAB_08061248:
      *(int *)(iVar4 + 100) = iVar3;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined *)(iVar4 + 0x78) = 0xff;
    *(byte *)(iVar4 + 0x79) = bVar1 & 1;
  }
  else if (DAT_0202e910 == 0xb) {
    *(undefined *)(iVar4 + 0x78) = 0x39;
    *(undefined *)(iVar4 + 0x79) = 6;
  }
  else {
    *(undefined *)(iVar4 + 0x78) = 0x35;
    *(undefined *)(iVar4 + 0x79) = 10;
  }
LAB_0806128c:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    *(undefined *)(param_1 + 0xd) = 0x1d;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

