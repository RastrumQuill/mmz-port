// sub_080E485C at 0x080E485C (thumb)

undefined4 sub_080E485C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  
  iVar12 = *(int *)(param_1 + 0xb4);
  sub_080177F4(param_1);
  if (DAT_0202f5d0 != '\0') {
    return in_lr;
  }
  if (*(char *)(iVar12 + 0x232) != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if (((*(uint *)(iVar12 + 0x8c) & 0x200) != 0) || (*(short *)(iVar12 + 0xa4) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  if ((*(byte *)(iVar12 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 100) == 0) {
      iVar11 = *(int *)(param_1 + 0xb8);
      iVar3 = -0xd00;
      goto LAB_080e4960;
    }
    iVar11 = *(int *)(iVar12 + 0x54) - (*(int *)(param_1 + 0xb8) + -0x1b00);
    iVar3 = *(int *)(param_1 + 0xbc);
    iVar6 = 0x1300;
  }
  else if (*(int *)(param_1 + 100) == 0) {
    iVar11 = *(int *)(param_1 + 0xb8);
    iVar3 = 0xd00;
LAB_080e4960:
    iVar11 = *(int *)(iVar12 + 0x54) - (iVar11 + iVar3);
    iVar3 = *(int *)(param_1 + 0xbc);
    iVar6 = 0x2900;
  }
  else {
    iVar11 = *(int *)(iVar12 + 0x54) - (*(int *)(param_1 + 0xb8) + 0x1b00);
    iVar3 = *(int *)(param_1 + 0xbc);
    iVar6 = 0x1300;
  }
  piVar9 = (int *)(param_1 + 0xb8);
  piVar8 = (int *)(param_1 + 0xbc);
  iVar6 = *(int *)(iVar12 + 0x58) - (iVar3 + iVar6);
  uVar4 = sub_080E90EC(iVar11,iVar6);
  iVar3 = iVar11;
  if (iVar11 < 0) {
    iVar3 = -iVar11;
  }
  iVar5 = iVar6;
  if (iVar6 < 0) {
    iVar5 = -iVar6;
  }
  if (iVar5 < iVar3) {
    if (iVar11 < 0) {
      iVar11 = -iVar11;
    }
    if (iVar11 < 0x801) {
LAB_080e49e4:
      if (0x200 < *(int *)(param_1 + 0x5c)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x200;
      }
      iVar11 = *(int *)(param_1 + 0x5c) + -0x20;
    }
    else {
      if (0x5ff < *(int *)(param_1 + 0x5c)) goto LAB_080e49f6;
      iVar11 = *(int *)(param_1 + 0x5c) + 0x10;
    }
  }
  else {
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar6 < 0x801) goto LAB_080e49e4;
    if (0x5ff < *(int *)(param_1 + 0x5c)) goto LAB_080e49f6;
    iVar11 = *(int *)(param_1 + 0x5c) + 0x10;
  }
  *(int *)(param_1 + 0x5c) = iVar11;
LAB_080e49f6:
  if (*(int *)(param_1 + 0x5c) < 0xa0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xa0;
  }
  *piVar9 = *piVar9 + (*(int *)(param_1 + 0x5c) *
                       (int)*(short *)((int)&DAT_080fe64c +
                                      (((uVar4 & 0xff) + 0x40) * 0x1000000 >> 0x17)) >> 8);
  *piVar8 = *piVar8 + (*(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080fe64c)[uVar4 & 0xff] >> 8);
  pbVar7 = (byte *)(param_1 + 0xc0);
  *pbVar7 = (char)(*pbVar7 + 1) + (char)((int)(*pbVar7 + 1) >> 5) * -0x20;
  uVar4 = (uint)*pbVar7;
  if (*(int *)(param_1 + 100) == 0) {
    *(int *)(param_1 + 0x54) =
         *piVar9 + *(short *)((int)&DAT_080fe64c + ((uVar4 * 8 + 0x40) * 0x1000000 >> 0x17)) * 4;
    iVar11 = *piVar8 + *(short *)((int)&DAT_080fe64c + ((uVar4 << 0x1b) >> 0x17)) * 4;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *piVar9 + *(short *)((int)&DAT_080fe64c + ((uVar4 * -8 + 0x3f) * 0x1000000 >> 0x17)) * -4;
    iVar11 = *piVar8 + *(short *)((int)&DAT_080fe64c + ((~(uVar4 * 8) << 0x18) >> 0x17)) * -4;
  }
  *(int *)(param_1 + 0x58) = iVar11;
  if (*(char *)(param_1 + 0x12) == '\0') {
    cVar2 = sub_080E162C(iVar12);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 100) == 0) {
        bVar1 = *(byte *)(iVar12 + 0xb4);
      }
      else {
        bVar1 = *(byte *)(iVar12 + 0xb5);
      }
      if ((*(byte *)(DAT_0203063c + (uint)bVar1) & 4) == 0) {
        sub_080E4B68(iVar12,param_1,*(undefined *)(param_1 + 0x10));
      }
      else {
        sub_080E4B68(iVar12,param_1,*(char *)(param_1 + 0x10) + '\x01');
      }
    }
    cVar2 = '<';
  }
  else {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
  }
  *(char *)(param_1 + 0x12) = cVar2;
  pcVar10 = (char *)(param_1 + 0xc1);
  cVar2 = *pcVar10;
  *pcVar10 = cVar2 + -1;
  if ((char)(cVar2 + -1) == -1) {
    sub_080BF760(param_1 + 0x54,2);
    *pcVar10 = ' ';
  }
  return in_lr;
}

