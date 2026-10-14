// sub_08061884 at 0x08061884 (thumb)

undefined4 sub_08061884(int param_1)

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
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = sub_080DA918(param_1 + 0x54,0,0xc1);
    *(int *)(param_1 + 0xc0) = iVar3;
    if (iVar3 == 0) {
      return in_lr;
    }
    *(undefined *)(iVar3 + 0x74) = 0xff;
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x75) = 0;
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x76) = 0;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) / 2;
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x60) + -0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar3 = *(int *)(param_1 + 0xc0);
  if (iVar3 == 0) goto LAB_08061a0c;
  iVar4 = (uint)*(byte *)(DAT_0202dbf0 + 0x174) * 8;
  iVar8 = *(int *)(&DAT_0884fe30 + iVar4);
  iVar4 = *(int *)(&DAT_0884fe34 + iVar4);
  *(int *)(iVar3 + 0x60) = *(int *)(param_1 + 0x58) + 0x100;
  *(int *)(iVar3 + 0x80) = *(int *)(param_1 + 0x58) + 0x100;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar7 = 0x700;
    *(int *)(iVar3 + 0x54) = *(int *)(param_1 + 0x54) + 0x700;
    iVar5 = *(int *)(param_1 + 0x54);
    iVar6 = 0x500;
  }
  else {
    iVar7 = -0x500;
    *(int *)(iVar3 + 0x54) = *(int *)(param_1 + 0x54) + -0x500;
    iVar5 = *(int *)(param_1 + 0x54);
    iVar6 = -0x700;
  }
  *(int *)(iVar3 + 100) = iVar5 + iVar6;
  *(int *)(iVar3 + 0x5c) = *(int *)(param_1 + 0x54) + iVar6;
  *(int *)(iVar3 + 0x7c) = *(int *)(param_1 + 0x54) + iVar7;
  iVar5 = DAT_0202dbf0;
  if ((DAT_0202e918 & 8) == 0) {
    iVar7 = (iVar4 << 0x10) >> 0x11;
    iVar6 = *(int *)(DAT_0202dbf0 + 0x58);
    if ((iVar6 + iVar7 <= *(int *)(iVar3 + 0x54)) || (*(int *)(iVar3 + 0x54) <= iVar6 - iVar7))
    goto LAB_080619b8;
    iVar4 = iVar4 >> 0x11;
    *(int *)(iVar3 + 0x54) = (iVar6 + (iVar8 >> 0x10)) - iVar4;
    *(int *)(iVar3 + 100) = (*(int *)(iVar5 + 0x58) + (iVar8 >> 0x10)) - iVar4;
  }
  else {
LAB_080619b8:
    *(int *)(iVar3 + 0x58) = *(int *)(param_1 + 0xb8) + 0x400;
    *(int *)(iVar3 + 0x68) = *(int *)(param_1 + 0xb8) + 0x400;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x78) = 0xff;
    *(byte *)(*(int *)(param_1 + 0xc0) + 0x79) = bVar1 & 1;
  }
  else if (DAT_0202e910 == 0xb) {
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x78) = 0x39;
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x79) = 6;
  }
  else {
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x78) = 0x35;
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x79) = 10;
  }
LAB_08061a0c:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    *(undefined *)(param_1 + 0xd) = 0x22;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

