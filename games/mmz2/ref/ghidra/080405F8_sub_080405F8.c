// sub_080405F8 at 0x080405F8 (thumb)

undefined4 sub_080405F8(int param_1)

{
  bool bVar1;
  undefined uVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined4 in_lr;
  
  sub_080128D4();
  uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  bVar4 = *(byte *)(param_1 + 0xbd);
  if (5 < bVar4) {
    if (bVar4 == 6) {
      *(undefined *)(param_1 + 0xd) = 9;
    }
    else if (bVar4 == 7) {
      *(undefined *)(param_1 + 0xd) = 0x1b;
    }
    else if (bVar4 == 8) {
      if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
        *(undefined *)(param_1 + 0xd) = 0xf;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0x18;
      }
    }
    else if (bVar4 == 9) {
      *(undefined *)(param_1 + 0xd) = 0xf;
    }
    else if (bVar4 == 10) {
      *(undefined *)(param_1 + 0xd) = 0x19;
    }
    else if (bVar4 == 0xb) {
      *(undefined *)(param_1 + 0xd) = 0x15;
    }
    else if (bVar4 == 0xc) {
      *(undefined *)(param_1 + 0xd) = 0x1a;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 6;
      iVar11 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0xb4);
      iVar6 = iVar11 + 0x1000;
      if (iVar6 < 0) {
        iVar6 = iVar11 + 0x2fff;
      }
      *(char *)(param_1 + 0x12) = (char)(iVar6 >> 0xd);
      if (5 < ((iVar6 >> 0xd) - 1U & 0xff)) {
        uVar7 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar7 & 0x7fffffff;
        cVar3 = sub_080EF330(uVar7 * 2 >> 0x11,6);
        *(char *)(param_1 + 0x12) = cVar3 + '\x01';
      }
      *(undefined *)(param_1 + 0xbd) = 0xff;
    }
    goto LAB_08040968;
  }
  piVar10 = (int *)(param_1 + 0xb4);
  iVar11 = *(int *)(param_1 + 0x54) - *piVar10;
  iVar6 = iVar11 + 0x1000;
  if (iVar6 < 0) {
    iVar6 = iVar11 + 0x2fff;
  }
  *(byte *)(param_1 + 0xbe) = (byte)(iVar6 >> 0xd);
  iVar6 = DAT_0202e130;
  iVar8 = *(int *)(DAT_0202e130 + 0x54) - *piVar10;
  iVar11 = iVar8 + 0x1000;
  if (iVar11 < 0) {
    iVar11 = iVar8 + 0x2fff;
  }
  *(char *)(param_1 + 0x13) = (char)(iVar11 >> 0xd);
  uVar9 = (uint)*(byte *)(param_1 + 0xbe);
  uVar7 = iVar11 >> 0xd & 0xff;
  if ((((uVar9 == uVar7) || (uVar7 == 0)) || (6 < uVar7)) || ((uVar9 == 0 || (6 < uVar9)))) {
    iVar6 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54);
    if (iVar6 < 0) {
      if (*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54) < 0x6000) goto LAB_0804069c;
LAB_080406a8:
      *(undefined *)(param_1 + 0xd) = 6;
      iVar11 = *(int *)(DAT_0202e130 + 0x54) - *piVar10;
      iVar6 = iVar11 + 0x1000;
      if (iVar6 < 0) {
        iVar6 = iVar11 + 0x2fff;
      }
      *(char *)(param_1 + 0x12) = (char)(iVar6 >> 0xd);
      if (7 < (iVar6 >> 0xd & 0xffU)) {
        uVar7 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar7 & 0x7fffffff;
        cVar3 = sub_080EF330(uVar7 * 2 >> 0x11,6);
        *(char *)(param_1 + 0x12) = cVar3 + '\x01';
      }
    }
    else {
      if (0x5fff < iVar6) goto LAB_080406a8;
LAB_0804069c:
      *(undefined *)(param_1 + 0xd) = 0xc;
    }
    if (*(char *)(param_1 + 0xc3) != *(char *)(param_1 + 0xd)) goto LAB_08040968;
    if (*(char *)(param_1 + 0xc3) == '\f') {
      *(undefined *)(param_1 + 0xd) = 6;
      iVar11 = *(int *)(DAT_0202e130 + 0x54) - *piVar10;
      iVar6 = iVar11 + 0x1000;
      if (iVar6 < 0) {
        iVar6 = iVar11 + 0x2fff;
      }
      uVar7 = iVar6 >> 0xd;
      *(char *)(param_1 + 0x12) = (char)uVar7;
joined_r0x0804072c:
      if (7 < (uVar7 & 0xff)) {
        uVar7 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar7 & 0x7fffffff;
        cVar3 = sub_080EF330(uVar7 * 2 >> 0x11,6);
        *(char *)(param_1 + 0x12) = cVar3 + '\x01';
      }
      goto LAB_08040968;
    }
LAB_080407c0:
    *(undefined *)(param_1 + 0xd) = 0xc;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x54) - *(int *)(iVar6 + 0x54);
    if (iVar11 < 0) {
      if (*(int *)(iVar6 + 0x54) - *(int *)(param_1 + 0x54) < 0x6000) goto LAB_08040774;
LAB_080407c6:
      uVar7 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar9 = uVar7 & 0x7fffffff;
      DAT_0202e188 = uVar9;
      if ((uVar7 * 2 >> 0x11 & 1) == 0) {
        *(undefined *)(param_1 + 0xd) = 0x12;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 6;
        iVar11 = *(int *)(DAT_0202e130 + 0x54) - *piVar10;
        iVar6 = iVar11 + 0x1000;
        if (iVar6 < 0) {
          iVar6 = iVar11 + 0x2fff;
        }
        *(char *)(param_1 + 0x12) = (char)(iVar6 >> 0xd);
        if (7 < (iVar6 >> 0xd & 0xffU)) {
          uVar7 = uVar9 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar7 & 0x7fffffff;
          cVar3 = sub_080EF330(uVar7 * 2 >> 0x11,6);
          *(char *)(param_1 + 0x12) = cVar3 + '\x01';
        }
      }
      if (*(char *)(param_1 + 0xc3) != *(char *)(param_1 + 0xd)) goto LAB_08040968;
      if (*(char *)(param_1 + 0xc3) == '\f') {
        *(undefined *)(param_1 + 0xd) = 6;
        iVar11 = *(int *)(DAT_0202e130 + 0x54) - *piVar10;
        iVar6 = iVar11 + 0x1000;
        if (iVar6 < 0) {
          iVar6 = iVar11 + 0x2fff;
        }
        uVar7 = iVar6 >> 0xd;
        *(char *)(param_1 + 0x12) = (char)uVar7;
        goto joined_r0x0804072c;
      }
    }
    else {
      if (0x5fff < iVar11) goto LAB_080407c6;
LAB_08040774:
      uVar7 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar7 & 0x7fffffff;
      if ((uVar7 * 2 >> 0x11 & 1) == 0) {
        uVar2 = 0x12;
      }
      else {
        uVar2 = 0xc;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      if (*(char *)(param_1 + 0xc3) != *(char *)(param_1 + 0xd)) goto LAB_08040968;
      if (*(char *)(param_1 + 0xc3) != '\f') goto LAB_080407c0;
    }
    *(undefined *)(param_1 + 0xd) = 0x12;
  }
LAB_08040968:
  iVar6 = DAT_0202e130;
  cVar3 = *(char *)(param_1 + 0xd);
  if (cVar3 != '\x0f') {
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar4 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar4;
    cVar3 = *(char *)(param_1 + 0xd);
  }
  *(char *)(param_1 + 0xc3) = cVar3;
  *(undefined *)(param_1 + 0xe) = 0;
  *(char *)(param_1 + 0xbd) = *(char *)(param_1 + 0xbd) + '\x01';
  return in_lr;
}

