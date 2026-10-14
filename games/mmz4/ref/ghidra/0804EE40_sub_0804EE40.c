// sub_0804EE40 at 0x0804EE40 (thumb)

undefined4 sub_0804EE40(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xe) != '\0') {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 - 1;
    if ((bVar2 & 1) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_0810D498(*(undefined *)(param_1 + 0xbd),0x17,2);
      sub_0810D3E4("POINT",0x18,2);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    sVar3 = sub_08007020(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar3 == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_0804F274(param_1);
    return in_lr;
  }
  iVar6 = *(int *)(param_1 + 0x54) + -0x1b400;
  if (iVar6 < 0) {
    iVar6 = 0x1b400 - *(int *)(param_1 + 0x54);
  }
  if (iVar6 < 0xc00) {
    iVar6 = *(int *)(param_1 + 0x58) - (DAT_02030400 + 0xd600);
    if (iVar6 < 0) {
      iVar6 = (DAT_02030400 + 0xd600) - *(int *)(param_1 + 0x58);
    }
    if (iVar6 < 0x400) {
      DAT_02030409 = 2;
      if (*(char *)(param_1 + 0x13) == '\0') {
        *(byte *)(param_1 + 0xbd) = DAT_0203040a + 5;
        DAT_020303e4 = DAT_020303e4 + 5 + (uint)DAT_0203040a;
        DAT_0203040a = DAT_0203040a + 1;
        if (5 < DAT_0203040a) {
          DAT_0203040a = 5;
        }
        sub_08002B10(0x1a4);
      }
      else {
        *(undefined *)(param_1 + 0xbd) = 2;
        DAT_020303e4 = DAT_020303e4 + 2;
        DAT_0203040a = 0;
        sub_08002B10(0x1a3);
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined *)(param_1 + 0x12) = 0x3c;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    cVar1 = sub_08041354(iVar4,param_1 + 0x54);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
    if (*(int *)(iVar4 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x280;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd80;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08854698,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x804f325;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0803AA58(iVar4);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sVar3 = sub_0804F39C(iVar4 + -0x800,*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) goto LAB_0804f194;
    iVar4 = sub_0800834C(*(int *)(param_1 + 0x54) + -0x800,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    bVar2 = *(byte *)(param_1 + 10);
    uVar5 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar5 == 0) goto LAB_0804f170;
    bVar2 = bVar2 | 0x10;
  }
  else {
    sVar3 = sub_0804F39C(iVar4 + 0x800,*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) goto LAB_0804f194;
    iVar4 = sub_0800816C(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    bVar2 = *(byte *)(param_1 + 10);
    uVar5 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar5 == 0) {
LAB_0804f170:
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
LAB_0804f194:
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  sVar3 = sub_0804F39C(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x800);
  if (sVar3 != 0) {
    iVar4 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    iVar4 = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x58) = iVar4;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    if (iVar4 < *(int *)(param_1 + 0xb8)) {
      DAT_02030408 = 2;
      cVar1 = *(char *)(param_1 + 0x13) + '\x01';
    }
    else {
      cVar1 = '\x10';
    }
    *(char *)(param_1 + 0x13) = cVar1;
  }
  sVar3 = sub_0804F39C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
  if (sVar3 != 0) {
    iVar4 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  if ((0xf < *(byte *)(param_1 + 0x13)) || ((*(uint *)(param_1 + 0x8c) & 0x1004) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_0804F274(param_1);
    DAT_0203040a = 0;
  }
  return in_lr;
}

