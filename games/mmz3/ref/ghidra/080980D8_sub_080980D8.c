// sub_080980D8 at 0x080980D8 (thumb)

undefined4 sub_080980D8(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar6 = 0;
    bVar2 = *(byte *)(param_1 + 0xbe);
    if (bVar2 == 2) {
      uVar6 = 0xffffe800;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        uVar6 = 0x1800;
      }
    }
    else if (bVar2 < 3) {
      if ((bVar2 == 1) && (uVar6 = 0xffffee00, (*(byte *)(param_1 + 10) & 0x20) != 0)) {
        uVar6 = 0x1200;
      }
    }
    else {
      if (bVar2 == 3) {
        uVar6 = 0xffffdd00;
        bVar2 = *(byte *)(param_1 + 10);
        if ((bVar2 & 0x20) != 0) {
          uVar6 = 0x2300;
        }
        uVar7 = ~(uint)(bVar2 >> 5) & 1;
        if (uVar7 == 0) {
LAB_08098180:
          bVar2 = bVar2 & 0xdf;
        }
        else {
          bVar2 = bVar2 | 0x20;
        }
      }
      else {
        if (bVar2 != 4) goto LAB_080981a0;
        uVar6 = 0xffffd500;
        bVar2 = *(byte *)(param_1 + 10);
        if ((bVar2 & 0x20) != 0) {
          uVar6 = 0x2b00;
        }
        uVar7 = ~(uint)(bVar2 >> 5) & 1;
        if (uVar7 == 0) goto LAB_08098180;
        bVar2 = bVar2 | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(char *)(param_1 + 0x4d) = (char)uVar7;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)(uVar7 << 5);
    }
LAB_080981a0:
    sub_08096D00(param_1,0,uVar6);
    sub_08007390(param_1 + 0x74,&DAT_08366b70);
    sub_08017700(param_1,0xdc00);
    sub_080177F4(param_1);
    iVar4 = DAT_0202f5c0;
    iVar5 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar5;
    iVar4 = (*(int *)(param_1 + 0x58) + -0x1800) - *(int *)(iVar4 + 0x58);
    *(int *)(param_1 + 0x60) = iVar4;
    iVar5 = iVar5 >> 8;
    iVar4 = iVar4 >> 8;
    iVar4 = sub_080FE124(iVar5 * iVar5 + iVar4 * iVar4);
    uVar7 = (uint)(iVar4 << 0x10) >> 8;
    if (uVar7 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar7);
      *(int *)(param_1 + 0x5c) = iVar4;
      iVar5 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar7);
      *(int *)(param_1 + 0x5c) = iVar4 * 6;
      *(int *)(param_1 + 0x60) = iVar5 * 6;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = false;
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar4 = sub_08009F80(iVar4,*(undefined4 *)(param_1 + 0x58));
    if (iVar4 - 1U < 0x7ff) goto LAB_08098274;
  }
  else {
    iVar4 = sub_08009E14(iVar4,*(undefined4 *)(param_1 + 0x58));
    if ((iVar4 < 0) && (-0x800 < iVar4)) {
LAB_08098274:
      bVar1 = true;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    }
  }
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar4 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),iVar4);
    if (0x7fe < iVar4 - 1U) goto LAB_080982d2;
  }
  else {
    iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar4);
    if ((-1 < iVar4) || (iVar4 < -0x7ff)) goto LAB_080982d2;
  }
  bVar1 = true;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
LAB_080982d2:
  if (((bVar1) ||
      (sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
      sVar3 != 0)) || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    sub_08097A18(param_1);
  }
  return in_lr;
}

