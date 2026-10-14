// sub_08089ED8 at 0x08089ED8 (thumb)

undefined4 sub_08089ED8(int param_1)

{
  bool bVar1;
  undefined uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x5c);
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + iVar7;
  iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar7;
  iVar9 = -0xe00;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar9 = 0xe00;
  }
  uVar4 = sub_08008354(iVar7 + iVar9,*(int *)(param_1 + 0x58) + 0x400);
  if ((((uVar4 & 0xf) == 1) || (0xd < (uVar4 & 0xf))) && (uVar4 != 0x800f)) {
    uVar4 = sub_08008354(*(int *)(param_1 + 0x54) + iVar9,*(int *)(param_1 + 0x58) + 0x2000);
    if ((((uVar4 & 0xf) == 1) || (0xd < (uVar4 & 0xf))) && (uVar4 != 0x800f)) {
      bVar3 = *(byte *)(param_1 + 10);
      uVar2 = 8;
      if ((bVar3 & 0x10) != 0) {
        uVar2 = 9;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      iVar7 = 0xff;
      if ((bVar3 & 0x10) != 0) {
        iVar7 = 0x80;
      }
      *(char *)(param_1 + 0x12) = (char)iVar7;
      *(int *)(param_1 + 0x5c) = (short)(&DAT_080ef450)[iVar7 + 0x40U & 0xff] * 0xd;
      *(int *)(param_1 + 0x60) = (short)(&DAT_080ef450)[iVar7] * -0xd;
      if ((bVar3 & 0x10) == 0) {
        iVar7 = *(int *)(param_1 + 0x54);
        iVar8 = *(int *)(param_1 + 0x58);
        goto LAB_0808a01e;
      }
      iVar7 = sub_080090D4(*(int *)(param_1 + 0x54) + iVar9,*(int *)(param_1 + 0x58) + 0x400);
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) goto LAB_0808a012;
      iVar7 = sub_080090D4(*(int *)(param_1 + 0x54) + iVar9,*(int *)(param_1 + 0x58) + 0x400);
    }
joined_r0x0808a00e:
    if (iVar7 < 0) {
LAB_0808a028:
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
    }
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar7 = sub_080090D4(*(int *)(param_1 + 0x54) + iVar9,*(int *)(param_1 + 0x58) + 0x400);
      goto joined_r0x0808a00e;
    }
LAB_0808a012:
    iVar7 = *(int *)(param_1 + 0x54);
    iVar8 = *(int *)(param_1 + 0x58);
LAB_0808a01e:
    iVar7 = sub_08009240(iVar7 + iVar9,iVar8 + 0x400);
    if (0 < iVar7) goto LAB_0808a028;
  }
  uVar5 = sub_08008354(*(int *)(param_1 + 0x54) + iVar9,*(int *)(param_1 + 0x58) + -0x400);
  if (((uVar5 & 0xf) != 1) && ((uVar5 & 0xf) < 0xe)) {
    bVar3 = *(byte *)(param_1 + 10);
    uVar5 = ~(uint)(bVar3 >> 4) & 1;
    if (uVar5 == 0) {
      bVar3 = bVar3 & 0xef;
    }
    else {
      bVar3 = bVar3 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  uVar5 = sub_08008354(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
  if ((uVar5 & 0xf) == 1) {
    iVar7 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  else {
    if ((uVar5 & 0xf) == 0xe) goto LAB_0808a126;
    *(undefined *)(param_1 + 0x10) = 2;
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080127E4(param_1,0x7401);
    sub_080128D4(param_1);
    bVar1 = *(int *)(DAT_0202e130 + 0x54) < *(int *)(param_1 + 0x54);
    if (bVar1) {
      uVar6 = 0x240;
    }
    else {
      uVar6 = 0xfffffdc0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    iVar7 = *(int *)(param_1 + 0x58) + 0xe00;
  }
  *(int *)(param_1 + 0x58) = iVar7;
LAB_0808a126:
  if (*(char *)(param_1 + 0x11) == '\x05') {
    iVar7 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54);
    if (iVar7 < 0) {
      iVar7 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    }
    if (iVar7 < 0x4000) {
      *(undefined4 *)(param_1 + 0x60) = 0x280;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      sub_080127E4(param_1,0x7405);
    }
  }
  else {
    iVar9 = *(int *)(param_1 + 0x54);
    iVar7 = iVar9 - *(int *)(DAT_0202e130 + 0x54);
    if (iVar7 < 0) {
      iVar7 = *(int *)(DAT_0202e130 + 0x54) - iVar9;
    }
    if ((iVar7 < 0x5000) && (*(int *)(param_1 + 0x58) < *(int *)(DAT_0202e130 + 0x58) + -0x2000)) {
      bVar1 = iVar9 <= *(int *)(DAT_0202e130 + 0x54);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if (bVar1) {
          return in_lr;
        }
      }
      else if (!bVar1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0xd) = 10;
      sub_080127E4(param_1,0x7402);
    }
  }
  return in_lr;
}

