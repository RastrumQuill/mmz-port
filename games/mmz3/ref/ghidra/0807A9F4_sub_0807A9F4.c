// sub_0807A9F4 at 0x0807A9F4 (thumb)

undefined4 sub_0807A9F4(int param_1)

{
  byte bVar1;
  short sVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08363f64);
    *(undefined *)(param_1 + 0x25) = 0x1f;
    if (*(byte *)(param_1 + 0x12) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar6 = *(byte *)(param_1 + 0x12) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    sub_08017700(param_1,0x3804);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0xff;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    uVar8 = 0xfffffe80;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar8 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar9 = '\0';
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 0x20001) == 0x20001) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(char *)(param_1 + 0xb4) == '\0') goto LAB_0807aab0;
    }
    else if (*(char *)(param_1 + 0xb4) == '\x01') {
LAB_0807aab0:
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    }
  }
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  if ((0 < *(int *)(param_1 + 0x60)) &&
     (iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x600), iVar4 < 0)) {
    if (*(int *)(param_1 + 0x60) < 0x2c1) {
      if (0x100 < *(int *)(param_1 + 0x60)) {
        sub_0800471C(0x105);
      }
      iVar5 = 0;
    }
    else {
      sub_0800471C(0x105);
      cVar9 = '\x01';
      iVar5 = *(int *)(param_1 + 0x60) * -0xc0;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      iVar5 = iVar5 >> 8;
    }
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar4 = sub_0800A104(*(int *)(param_1 + 0x54) + -0x40);
      iVar4 = (iVar4 + -0x600) - *(int *)(param_1 + 0x58);
      if (0x1fff < iVar4 + 0x1000U) goto LAB_0807ab90;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3 >> 2;
      }
      iVar4 = *(int *)(param_1 + 0x5c) - iVar4;
    }
    else {
      iVar4 = sub_0800A104(*(int *)(param_1 + 0x54) + 0x40);
      iVar4 = (iVar4 + -0x600) - *(int *)(param_1 + 0x58);
      if (0x1fff < iVar4 + 0x1000U) goto LAB_0807ab90;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3 >> 2;
      }
      iVar4 = *(int *)(param_1 + 0x5c) + iVar4;
    }
    *(int *)(param_1 + 0x5c) = iVar4;
  }
LAB_0807ab90:
  if ((*(int *)(param_1 + 0x60) + 0x100U < 0x200) &&
     (sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800),
     sVar2 != 0)) {
    iVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar4 + -0x600;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  if (*(int *)(param_1 + 0x5c) < 0) {
    iVar4 = iVar4 + -0x800;
    iVar5 = *(int *)(param_1 + 0x58);
  }
  else {
    iVar4 = iVar4 + 0x800;
    iVar5 = *(int *)(param_1 + 0x58);
  }
  sVar2 = sub_08009A3C(iVar4,iVar5 + -0x800);
  if (sVar2 != 0) {
    cVar9 = '\x01';
    sub_0800471C(0x105);
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x60) + 0x2ffU < 0x300) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    }
  }
  if (((*(uint *)(DAT_0202f5c0 + 0x8c) & 1) != 0) && ((*puVar3 & 4) != 0)) {
    sub_0800471C(0x105);
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  cVar7 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar7;
  bVar1 = cVar9 + *(char *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 < 5) && (cVar7 != '\0')) {
    if (*(int *)(param_1 + 0x5c) < 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    uVar6 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar6 < 0x6001) {
      sub_080177F4(param_1);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar3 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

