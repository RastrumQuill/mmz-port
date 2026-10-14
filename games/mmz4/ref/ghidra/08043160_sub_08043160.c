// sub_08043160 at 0x08043160 (thumb)

undefined4 sub_08043160(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    cVar1 = sub_08041354(iVar6,param_1 + 0x54);
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
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(iVar6 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x180;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      iVar4 = -0x600;
    }
    else {
      if (*(int *)(iVar6 + 0x54) < *(int *)(param_1 + 0x54)) {
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        *(uint *)(param_1 + 0x5c) = (uVar5 * 0x80 >> 0x17) + 0x180;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        *(uint *)(param_1 + 0x5c) = -0x180 - (uVar5 * 0x80 >> 0x17);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      iVar4 = (uVar5 * 0x80 >> 0x17) - 0x600;
    }
    *(int *)(param_1 + 0x60) = iVar4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_088526c4,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x804351d;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0803AA58(iVar6);
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar6;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sVar3 = sub_08043578(iVar6 + -0x800,*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) goto LAB_080433f4;
    iVar6 = sub_0800834C(*(int *)(param_1 + 0x54) + -0x800,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    bVar2 = *(byte *)(param_1 + 10);
    uVar5 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar5 == 0) goto LAB_080433d0;
    bVar2 = bVar2 | 0x10;
  }
  else {
    sVar3 = sub_08043578(iVar6 + 0x800,*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) goto LAB_080433f4;
    iVar6 = sub_0800816C(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    bVar2 = *(byte *)(param_1 + 10);
    uVar5 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar5 == 0) {
LAB_080433d0:
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
LAB_080433f4:
  iVar6 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar6;
  if (0x700 < iVar6) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar6;
  sVar3 = sub_08043578(*(undefined4 *)(param_1 + 0x54),iVar6 + 0x800);
  if (sVar3 != 0) {
    iVar6 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  sVar3 = sub_08043578(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
  if (sVar3 != 0) {
    iVar6 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  if ((5 < *(byte *)(param_1 + 0x13)) || ((*(uint *)(param_1 + 0x8c) & 0x1004) != 0)) {
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x35);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_080434C0(param_1);
  }
  return in_lr;
}

