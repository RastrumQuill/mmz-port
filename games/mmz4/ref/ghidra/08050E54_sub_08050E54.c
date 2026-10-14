// sub_08050E54 at 0x08050E54 (thumb)

/* WARNING: Type propagation algorithm not settling */

undefined4 sub_08050E54(int param_1)

{
  short sVar1;
  undefined uVar2;
  uint uVar3;
  short *psVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 0x1f;
  sub_0801CFF0(param_1);
  if ((DAT_0202e918 & 8) != 0) {
    return in_lr;
  }
  psVar4 = (short *)(param_1 + 0xa4);
  if (0x20 < *psVar4) {
    iVar7 = *(int *)(param_1 + 0x54);
    iVar6 = iVar7 - *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar6 < 0) {
      iVar6 = *(int *)(DAT_0202dbf0 + 0x54) - iVar7;
    }
    if (iVar6 < 0x40) {
      bVar5 = 2;
      if ((uVar3 < 0xb) || (bVar5 = 3, 0x15 < uVar3)) goto LAB_08051056;
    }
    else {
      iVar6 = iVar7 - *(int *)(DAT_0202dbf0 + 0x54);
      if (iVar6 < 0) {
        iVar6 = *(int *)(DAT_0202dbf0 + 0x54) - iVar7;
      }
      if (iVar6 < 0x80) {
        bVar5 = 2;
        if ((uVar3 < 0xc) || (bVar5 = 3, 0x17 < uVar3)) goto LAB_08051056;
      }
      else {
        bVar5 = 2;
        if (uVar3 < 0xc) goto LAB_08051056;
        bVar5 = 3;
joined_r0x0805100c:
        if (0x13 < uVar3) goto LAB_08051056;
      }
    }
    goto LAB_08050ed2;
  }
  iVar7 = *(int *)(param_1 + 0x54);
  iVar6 = iVar7 - *(int *)(DAT_0202dbf0 + 0x54);
  if (iVar6 < 0) {
    if (*(int *)(DAT_0202dbf0 + 0x54) - iVar7 < 0x40) goto LAB_08050f32;
LAB_08050f70:
    iVar6 = iVar7 - *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar6 < 0) {
      iVar6 = *(int *)(DAT_0202dbf0 + 0x54) - iVar7;
    }
    if (iVar6 < 0x80) {
      if (uVar3 < 0xc) goto LAB_08050fc0;
      if (0x15 < uVar3) {
LAB_08051054:
        bVar5 = 3;
        goto LAB_08051056;
      }
      if (((DAT_0202cac0 & 0x10) != 0) && ((DAT_0202e8b4 & 4) == 0)) {
        sVar1 = *psVar4;
joined_r0x08050fee:
        if (0x10 < sVar1) {
          uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar3 & 0x7fffffff;
          uVar3 = uVar3 * 2 >> 0x11 & 0x1f;
          bVar5 = 1;
          goto joined_r0x0805100c;
        }
        uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar3 & 0x7fffffff;
        bVar5 = 1;
        if (0xf < (uVar3 * 2 >> 0x11 & 0x1f)) goto LAB_08051056;
      }
    }
    else {
      if (uVar3 < 0xb) goto LAB_08050fc0;
      if (0x15 < uVar3) goto LAB_08051054;
      if (((DAT_0202cac0 & 0x10) != 0) && ((DAT_0202e8b4 & 4) == 0)) {
        sVar1 = *psVar4;
        goto joined_r0x08050fee;
      }
    }
LAB_08050ed2:
    bVar5 = 0;
  }
  else {
    if (0x3f < iVar6) goto LAB_08050f70;
LAB_08050f32:
    if (7 < uVar3) {
      if (uVar3 < 0x12) {
        if (((DAT_0202cac0 & 0x10) == 0) || ((DAT_0202e8b4 & 4) != 0)) goto LAB_08050ed2;
        sVar1 = *psVar4;
        goto joined_r0x08050fee;
      }
      goto LAB_08051054;
    }
LAB_08050fc0:
    bVar5 = 2;
  }
LAB_08051056:
  if (bVar5 == 1) {
    uVar2 = 8;
  }
  else if (bVar5 < 2) {
    if (bVar5 != 0) {
      return in_lr;
    }
    uVar2 = 5;
  }
  else if (bVar5 == 2) {
    if (5 < *(byte *)(param_1 + 0xd5)) {
      return in_lr;
    }
    uVar2 = 0xd;
  }
  else {
    if (bVar5 != 3) {
      return in_lr;
    }
    uVar2 = 0x10;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

