// sub_08088F80 at 0x08088F80 (thumb)

undefined4 sub_08088F80(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = 0 < *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sVar4 = sub_08009A3C(*(int *)(param_1 + 0x54) + (uint)bVar1 * 0x1400 + -0xa00,
                         *(int *)(param_1 + 0x58) + -0x800);
    if (sVar4 != 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_08088EE0(param_1);
      return in_lr;
    }
    sub_08017700(param_1,0xdd03);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080890a0;
  iVar7 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb8);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar7 < 0) goto LAB_08089050;
  }
  else if (-1 < iVar7) {
LAB_08089050:
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    if (0x7000 < iVar7) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar5 & 0x7fffffff;
  if ((uVar5 * 2 >> 0x11 & 0xf) < 10) {
    uVar3 = 3;
  }
  else {
    uVar3 = 4;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_080890a0:
  uVar6 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
  sub_080887E0(param_1,uVar6,0x800);
  return in_lr;
}

