// sub_080391E4 at 0x080391E4 (thumb)

undefined4 sub_080391E4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c)) {
      uVar2 = 0x100;
    }
    else {
      uVar2 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  pbVar6 = (byte *)(param_1 + 0xc0);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*pbVar6] * 0x10;
  *pbVar6 = *pbVar6 + 4;
  pbVar6 = (byte *)(param_1 + 0xd0);
  if (3 < *pbVar6) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 1;
    bVar1 = 0;
    goto LAB_0803941c;
  }
  if (*(int *)(param_1 + 0x54) < 1) {
    if (*(byte *)(DAT_02022b20 + 1) < 5) {
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar5 = *(int *)(DAT_0202286c + 0x4c) - iVar3;
      if (iVar5 < 0) {
        iVar5 = iVar3 - *(int *)(DAT_0202286c + 0x4c);
      }
      if ((iVar5 < 0x2000) || (iVar3 < *(int *)(param_1 + 0xb8) + -0x6800)) goto LAB_0803935e;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar5 = *(int *)(DAT_0202286c + 0x4c) - iVar3;
      if (iVar5 < 0) {
        iVar5 = iVar3 - *(int *)(DAT_0202286c + 0x4c);
      }
      if (iVar5 < 0x2000) goto LAB_0803935e;
      if (iVar3 < *(int *)(param_1 + 0xb8) + -0x6800) {
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xe) = 1;
        bVar1 = *pbVar6 + 1;
        goto LAB_08039368;
      }
    }
  }
  else {
    if (*(byte *)(DAT_02022b20 + 1) < 5) {
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar5 = *(int *)(DAT_0202286c + 0x4c) - iVar3;
      if (iVar5 < 0) {
        iVar5 = iVar3 - *(int *)(DAT_0202286c + 0x4c);
      }
      if ((0x1fff < iVar5) && (iVar3 <= *(int *)(param_1 + 0xb8) + 0x6800)) goto LAB_0803936a;
LAB_0803935e:
      bVar1 = 0;
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar5 = *(int *)(DAT_0202286c + 0x4c) - iVar3;
      if (iVar5 < 0) {
        iVar5 = iVar3 - *(int *)(DAT_0202286c + 0x4c);
      }
      if (iVar5 < 0x2000) goto LAB_0803935e;
      if (iVar3 <= *(int *)(param_1 + 0xb8) + 0x6800) goto LAB_0803936a;
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xe) = 1;
      bVar1 = *pbVar6 + 1;
    }
LAB_08039368:
    *pbVar6 = bVar1;
  }
LAB_0803936a:
  if (*(byte *)(param_1 + 0x12) < 0x18) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
    return in_lr;
  }
  if (*(byte *)(DAT_02022b20 + 1) < 5) {
    return in_lr;
  }
  if (*(short *)(param_1 + 0x8c) < 0x30) {
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    if ((uVar4 * 2 >> 0x11 & 0xf) < 6) {
      return in_lr;
    }
  }
  else if (*(short *)(param_1 + 0x8c) < 0x48) {
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    if ((uVar4 * 2 >> 0x11 & 0xf) < 10) {
      return in_lr;
    }
  }
  else {
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    if ((uVar4 * 2 >> 0x11 & 0xf) < 0xe) {
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xd) = 9;
  *(undefined *)(param_1 + 0xe) = 1;
  bVar1 = *pbVar6 + 1;
LAB_0803941c:
  *pbVar6 = bVar1;
  return in_lr;
}

