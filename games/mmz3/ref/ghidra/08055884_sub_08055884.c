// sub_08055884 at 0x08055884 (thumb)

undefined4 sub_08055884(int param_1)

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
  
  uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar4 & 0x7fffffff;
  uVar4 = uVar4 * 2 >> 0x11 & 0x1f;
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 < *(int *)(DAT_0202f5c0 + 0x54)) {
    iVar5 = iVar5 + 0x4000;
  }
  else {
    iVar5 = iVar5 + -0x4000;
  }
  iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - iVar5;
  sub_080177F4(param_1);
  iVar6 = DAT_0202f5c0;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar6 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  psVar9 = (short *)(param_1 + 0xa4);
  if ((iVar6 == 0) && (*psVar9 < (short)(ushort)*(byte *)(param_1 + 0xce))) {
    *(undefined *)(param_1 + 0xd) = 0x23;
    *(undefined *)(param_1 + 0xe) = 1;
    *(byte *)(param_1 + 0xce) = 0;
    return in_lr;
  }
  if (*psVar9 < *(short *)(param_1 + 0xd8)) {
    sub_0805791C(param_1);
    *(undefined *)(param_1 + 0xe) = 1;
    *(short *)(param_1 + 0xd8) = *psVar9 + -8;
    return in_lr;
  }
  if ((*(char *)(param_1 + 0xcd) == '\0') || (*(char *)(param_1 + 0xc6) != '\0')) {
    iVar7 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    iVar6 = DAT_0202f5c0;
    if (iVar7 != 0) {
      if (uVar4 < 0x10) {
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xf) = 0xd;
        iVar5 = *(int *)(DAT_0202f5c0 + 0x54);
LAB_08055a0a:
        iVar5 = iVar5 - *(int *)(param_1 + 0x54);
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0x7f;
        }
        *(int *)(param_1 + 0x5c) = iVar5 >> 7;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
        goto LAB_08055af4;
      }
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xf) = 0xb;
      iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
      uVar8 = 0x2e;
LAB_08055aaa:
      uVar8 = FUN_080fe2f8(iVar5,uVar8);
      *(undefined4 *)(param_1 + 0x5c) = uVar8;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
      goto LAB_08055af4;
    }
    if (*(int *)(param_1 + 0x58) - *(int *)(DAT_0202f5c0 + 0x58) < 0x4801) {
      iVar6 = *(int *)(param_1 + 0x54);
      iVar7 = *(int *)(DAT_0202f5c0 + 0x54) - iVar6;
      if (iVar7 < 0) {
        if (iVar6 - *(int *)(DAT_0202f5c0 + 0x54) < 0x6401) goto LAB_08055a72;
LAB_08055a48:
        if (*psVar9 < 0x20) {
LAB_08055a50:
          if (uVar4 < 2) goto LAB_08055a9e;
        }
        else if (*psVar9 < 0x30) {
joined_r0x08055a60:
          if (uVar4 == 0) goto LAB_08055a8c;
          if (uVar4 < 3) goto LAB_08055a9e;
        }
        else {
          if (uVar4 < 2) {
LAB_08055a8c:
            *(undefined *)(param_1 + 0xd) = 3;
            *(undefined *)(param_1 + 0xf) = 2;
            *(undefined *)(param_1 + 0x12) = 0x10;
            goto LAB_08055af4;
          }
          if (uVar4 < 6) goto LAB_08055a9e;
        }
        if (uVar4 < 0x14) goto LAB_08055ac0;
      }
      else {
        if (0x6400 < iVar7) goto LAB_08055a48;
LAB_08055a72:
        if (*psVar9 < 0x20) goto LAB_08055a50;
        if (*psVar9 < 0x30) goto joined_r0x08055a60;
        if (uVar4 < 2) goto LAB_08055a8c;
        if (uVar4 < 4) goto LAB_08055a9e;
        if (uVar4 < 0x11) goto LAB_08055ac0;
      }
      if (uVar4 < 0x1a) {
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xf) = 0xd;
        iVar6 = *(int *)(DAT_0202f5c0 + 0x54) - iVar6;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0x3f;
        }
        *(int *)(param_1 + 0x5c) = iVar6 >> 6;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
        goto LAB_08055af4;
      }
    }
    else {
      if (uVar4 < 2) {
LAB_08055a9e:
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xf) = 0xb;
        uVar8 = 0x28;
        goto LAB_08055aaa;
      }
      if (uVar4 < 0x14) {
LAB_08055ac0:
        sub_08057804(param_1);
        goto LAB_08055af4;
      }
      if (uVar4 < 0x1a) {
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xf) = 0xd;
        iVar5 = *(int *)(iVar6 + 0x54);
        goto LAB_08055a0a;
      }
    }
    uVar3 = 6;
  }
  else {
    uVar3 = 0x11;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
LAB_08055af4:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

