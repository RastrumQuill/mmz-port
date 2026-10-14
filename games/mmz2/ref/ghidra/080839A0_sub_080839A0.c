// sub_080839A0 at 0x080839A0 (thumb)

undefined4 sub_080839A0(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6e00);
    sub_08006E08(param_1 + 0x74,&DAT_083410e8);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xbc) = 0;
    uVar6 = 0xffffff00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar6 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    if (*(int *)(DAT_0202e130 + 0x58) + 0x1800 < *(int *)(param_1 + 0x58)) {
      uVar1 = 1;
    }
    else if (*(int *)(param_1 + 0x58) < *(int *)(DAT_0202e130 + 0x58) + -0x1800) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0xe) = uVar1;
  }
  sub_080128D4(param_1);
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (((bVar2 & 7) == 0) &&
     (uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar4 & 0x7fffffff,
     (uVar4 * 2 >> 0x11 & 7) == 0)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = *(int *)(param_1 + 0x54) + -0xc00;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x54) + 0xc00;
    }
    sub_080AC8A4(iVar5,*(undefined4 *)(param_1 + 0x58),0);
  }
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 == 2) {
    pbVar7 = (byte *)(param_1 + 0xbc);
    *pbVar7 = *pbVar7 + 2;
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar7] * 0x18;
    if (((*(int *)(param_1 + 0xb4) + ((uint)*(byte *)(param_1 + 0x11) * 2 + -1) * 0x5000) - iVar5) +
        0x6e00 < 0xdc01) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xbf) = 0xe;
    return in_lr;
  }
  if (bVar2 < 3) {
    if (bVar2 != 1) {
      return in_lr;
    }
    iVar8 = *(int *)(param_1 + 0x58) + -0x180;
    *(int *)(param_1 + 0x58) = iVar8;
    iVar5 = DAT_0202d004 + 0x2800;
    if (iVar5 < iVar8) {
      if (*(int *)(DAT_0202e130 + 0x58) < iVar8) {
        return in_lr;
      }
      *(int *)(param_1 + 0xb8) = iVar8;
      *(undefined *)(param_1 + 0xbc) = 0;
      cVar3 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      *(int *)(param_1 + 0x58) = iVar5;
      *(int *)(param_1 + 0xb8) = iVar5;
      *(undefined *)(param_1 + 0xbc) = 0;
      cVar3 = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    if (bVar2 != 3) {
      return in_lr;
    }
    iVar5 = *(int *)(param_1 + 0x58) + 0x180;
    *(int *)(param_1 + 0x58) = iVar5;
    if (iVar5 < *(int *)(DAT_0202e130 + 0x58)) {
      return in_lr;
    }
    *(int *)(param_1 + 0xb8) = iVar5;
    *(undefined *)(param_1 + 0xbc) = 0;
    cVar3 = *(char *)(param_1 + 0xe) + -1;
  }
  *(char *)(param_1 + 0xe) = cVar3;
  return in_lr;
}

