// sub_08097BEC at 0x08097BEC (thumb)

undefined4 sub_08097BEC(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      if (*(char *)(param_1 + 0x12) != '\0') {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    iVar5 = 0;
    bVar1 = *(byte *)(param_1 + 0xbe);
    if (bVar1 == 2) {
      iVar5 = -0x1800;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        iVar5 = 0x1800;
      }
    }
    else if (bVar1 < 3) {
      if ((bVar1 == 1) && (iVar5 = -0x1200, (*(byte *)(param_1 + 10) & 0x20) != 0)) {
        iVar5 = 0x1200;
      }
    }
    else {
      if (bVar1 == 3) {
        iVar5 = -0x2300;
        bVar1 = *(byte *)(param_1 + 10);
        if ((bVar1 & 0x20) != 0) {
          iVar5 = 0x2300;
        }
        uVar6 = ~(uint)(bVar1 >> 5) & 1;
        if (uVar6 == 0) {
LAB_08097cb0:
          bVar1 = bVar1 & 0xdf;
        }
        else {
          bVar1 = bVar1 | 0x20;
        }
      }
      else {
        if (bVar1 != 4) goto LAB_08097cd2;
        iVar5 = -0x2b00;
        bVar1 = *(byte *)(param_1 + 10);
        if ((bVar1 & 0x20) != 0) {
          iVar5 = 0x2b00;
        }
        uVar6 = ~(uint)(bVar1 >> 5) & 1;
        if (uVar6 == 0) goto LAB_08097cb0;
        bVar1 = bVar1 | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4d) = (char)uVar6;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)(uVar6 << 5);
    }
LAB_08097cd2:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
    if (sVar3 != 0) {
      iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar5 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (iVar4 < 1) {
        if (iVar5 < 0) {
          iVar4 = *(int *)(param_1 + 0x58) + iVar4;
        }
        else {
          if (iVar5 <= -iVar4) goto LAB_08097d12;
          iVar4 = *(int *)(param_1 + 0x58) + iVar4;
        }
      }
      else {
LAB_08097d12:
        iVar4 = *(int *)(param_1 + 0x58) + iVar5;
      }
      *(int *)(param_1 + 0x58) = iVar4;
    }
    sub_08017700(param_1,0xdc07);
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0x1000;
    uVar7 = (uint)(0 < *(int *)(param_1 + 0xb4));
    uVar6 = uVar7 ^ 1;
    if (uVar6 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    *(uint *)(param_1 + 0x5c) = uVar7 * -0x200 + 0x100;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) >> 1;
    sub_080C68F0(param_1);
    iVar5 = *(int *)(param_1 + 0x5c) * 0xb4;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 8;
    iVar5 = *(int *)(param_1 + 0x60) * 0xb4;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar5 >> 8;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
  if (iVar5 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar5 = sub_08009F80(iVar5,*(undefined4 *)(param_1 + 0x58));
    if (iVar5 < 1) goto LAB_08097e0e;
  }
  else {
    iVar5 = sub_08009E14(iVar5,*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar5) goto LAB_08097e0e;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
LAB_08097e0e:
  iVar5 = *(int *)(param_1 + 0x5c) * 0xe1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar5 >> 8;
  if (((*(int *)(param_1 + 0x60) != 0) || ((*(byte *)(param_1 + 10) & 0x20) != 0)) &&
     (iVar5 = *(int *)(param_1 + 0x60) + 0x40, *(int *)(param_1 + 0x60) = iVar5, 0x700 < iVar5)) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0x1000;
    sub_080B2484(1,&local_18);
    sub_0800471C(0x2a);
    sub_08024FE4(1,param_1 + 0x54);
    if (DAT_0203016c < 9999) {
      DAT_0203016c = DAT_0203016c + 1;
    }
    sub_080250C4(param_1,param_1 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

