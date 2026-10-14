// sub_0804070C at 0x0804070C (thumb)

undefined4 sub_0804070C(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short *psVar9;
  undefined4 in_lr;
  
  uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar4 & 0x7fffffff;
  uVar4 = uVar4 * 2 >> 0x11 & 0x1f;
  iVar5 = *(int *)(param_1 + 0x4c);
  if (iVar5 < *(int *)(DAT_0202286c + 0x4c)) {
    iVar5 = iVar5 + 0x4000;
  }
  else {
    iVar5 = iVar5 + -0x4000;
  }
  iVar5 = *(int *)(DAT_0202286c + 0x4c) - iVar5;
  sub_080297C0(param_1);
  bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar6 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  psVar9 = (short *)(param_1 + 0x8c);
  if ((iVar6 == 0) && (*psVar9 < (short)(ushort)*(byte *)(param_1 + 0xd2))) {
    *(undefined *)(param_1 + 0xd) = 0x23;
    *(undefined *)(param_1 + 0xe) = 1;
    *(byte *)(param_1 + 0xd2) = 0;
    return in_lr;
  }
  if (*psVar9 < *(short *)(param_1 + 0xdc)) {
    sub_080423E0(param_1);
    *(undefined *)(param_1 + 0xe) = 1;
    *(short *)(param_1 + 0xdc) = *psVar9 + -8;
    return in_lr;
  }
  if ((*(char *)(param_1 + 0xd1) == '\0') || (*(char *)(param_1 + 0xca) != '\0')) {
    iVar7 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    iVar6 = DAT_0202286c;
    if (iVar7 != 0) {
      if (uVar4 < 0x10) {
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xf) = 0xd;
        iVar5 = *(int *)(DAT_0202286c + 0x4c);
LAB_08040874:
        iVar5 = iVar5 - *(int *)(param_1 + 0x4c);
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0x7f;
        }
        *(int *)(param_1 + 0x54) = iVar5 >> 7;
        *(undefined4 *)(param_1 + 0x58) = 0xfffffa00;
        goto LAB_08040984;
      }
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xf) = 0xb;
      iVar5 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
      uVar8 = 0x2e;
LAB_0804093a:
      uVar8 = sub_080C8AD0(iVar5,uVar8);
      *(undefined4 *)(param_1 + 0x54) = uVar8;
      *(undefined4 *)(param_1 + 0x58) = 0xfffffb00;
      goto LAB_08040984;
    }
    if (*(int *)(param_1 + 0x50) - *(int *)(DAT_0202286c + 0x50) < 0x4801) {
      iVar6 = *(int *)(param_1 + 0x4c);
      iVar7 = *(int *)(DAT_0202286c + 0x4c) - iVar6;
      if (iVar7 < 0) {
        if (iVar6 - *(int *)(DAT_0202286c + 0x4c) < 0x6401) goto LAB_080408da;
LAB_080408b0:
        if (0x1f < *psVar9) {
          if (*psVar9 < 0x30) {
            if (uVar4 != 0) {
              if (2 < uVar4) goto LAB_080408bc;
              goto LAB_0804092e;
            }
          }
          else if (1 < uVar4) {
            if (uVar4 < 6) goto LAB_0804092e;
            goto LAB_080408bc;
          }
LAB_0804091c:
          *(undefined *)(param_1 + 0xd) = 3;
          *(undefined *)(param_1 + 0xf) = 2;
          *(undefined *)(param_1 + 0x12) = 0x10;
          goto LAB_08040984;
        }
LAB_080408b8:
        if (uVar4 < 2) {
LAB_0804092e:
          *(undefined *)(param_1 + 0xd) = 9;
          *(undefined *)(param_1 + 0xf) = 0xb;
          uVar8 = 0x28;
          goto LAB_0804093a;
        }
LAB_080408bc:
        if (0x13 < uVar4) {
LAB_08040958:
          if (uVar4 < 0x1a) {
            *(undefined *)(param_1 + 0xd) = 9;
            *(undefined *)(param_1 + 0xf) = 0xd;
            iVar6 = *(int *)(DAT_0202286c + 0x4c) - iVar6;
            if (iVar6 < 0) {
              iVar6 = iVar6 + 0x3f;
            }
            *(int *)(param_1 + 0x54) = iVar6 >> 6;
            *(undefined4 *)(param_1 + 0x58) = 0xfffffc80;
            goto LAB_08040984;
          }
          goto LAB_08040980;
        }
      }
      else {
        if (0x6400 < iVar7) goto LAB_080408b0;
LAB_080408da:
        if (*psVar9 < 0x20) goto LAB_080408b8;
        if (0x2f < *psVar9) {
          if (uVar4 < 2) goto LAB_0804091c;
          if (uVar4 < 4) goto LAB_0804092e;
          if (uVar4 < 0x11) goto LAB_08040950;
          goto LAB_08040958;
        }
        if (uVar4 == 0) goto LAB_0804091c;
        if (uVar4 < 3) goto LAB_0804092e;
        if (0x13 < uVar4) {
          if (uVar4 < 0x1a) {
            *(undefined *)(param_1 + 0xd) = 9;
            *(undefined *)(param_1 + 0xf) = 0xd;
            iVar6 = *(int *)(DAT_0202286c + 0x4c) - iVar6;
            if (iVar6 < 0) {
              iVar6 = iVar6 + 0x3f;
            }
            *(int *)(param_1 + 0x54) = iVar6 >> 6;
            *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
            goto LAB_08040984;
          }
          goto LAB_08040980;
        }
      }
LAB_08040950:
      sub_08042288(param_1);
      goto LAB_08040984;
    }
    if (uVar4 < 2) goto LAB_0804092e;
    if (uVar4 < 0x14) goto LAB_08040950;
    if (uVar4 < 0x1a) {
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xf) = 0xd;
      iVar5 = *(int *)(iVar6 + 0x4c);
      goto LAB_08040874;
    }
LAB_08040980:
    uVar3 = 6;
  }
  else {
    uVar3 = 0x11;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
LAB_08040984:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

