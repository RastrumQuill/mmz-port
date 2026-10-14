// sub_080E4220 at 0x080E4220 (thumb)

undefined4 sub_080E4220(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar8 = *(int *)(param_1 + 0xb4);
  sub_080177F4(param_1);
  if (DAT_0202f5d0 != '\0') {
    return in_lr;
  }
  if (*(char *)(iVar8 + 0x232) != '\0') {
    iVar8 = *(int *)(param_1 + 0x2c);
    if (iVar8 != 0) {
      *(byte *)(iVar8 + 0xb) = *(byte *)(iVar8 + 0xb) & 0x7f;
    }
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
  if (((*(uint *)(iVar8 + 0x8c) & 0x200) != 0) || (*(short *)(iVar8 + 0xa4) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836e588 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (*(int *)(param_1 + 0x2c) == 0) {
    if ((*(byte *)(iVar8 + 10) & 0x10) == 0) {
      if (*(char *)(param_1 + 0x12) == '\0') {
        iVar10 = *(int *)(param_1 + 0xb8);
        iVar2 = -0xd00;
        goto LAB_080e436c;
      }
      iVar10 = *(int *)(iVar8 + 0x54) - (*(int *)(param_1 + 0xb8) + -0x1b00);
      iVar2 = *(int *)(param_1 + 0xbc);
      iVar4 = 0x1300;
    }
    else if (*(char *)(param_1 + 0x12) == '\0') {
      iVar10 = *(int *)(param_1 + 0xb8);
      iVar2 = 0xd00;
LAB_080e436c:
      iVar10 = *(int *)(iVar8 + 0x54) - (iVar10 + iVar2);
      iVar2 = *(int *)(param_1 + 0xbc);
      iVar4 = 0x2900;
    }
    else {
      iVar10 = *(int *)(iVar8 + 0x54) - (*(int *)(param_1 + 0xb8) + 0x1b00);
      iVar2 = *(int *)(param_1 + 0xbc);
      iVar4 = 0x1300;
    }
    iVar2 = iVar2 + iVar4;
    iVar8 = *(int *)(iVar8 + 0x58);
  }
  else {
    sub_080E11E0(&local_20);
    *(undefined4 *)(param_1 + 100) = local_20;
    *(undefined4 *)(param_1 + 0x68) = local_1c;
    iVar10 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0xb8);
    iVar8 = *(int *)(param_1 + 0x68);
    iVar2 = *(int *)(param_1 + 0xbc);
  }
  piVar7 = (int *)(param_1 + 0xb8);
  piVar6 = (int *)(param_1 + 0xbc);
  iVar8 = iVar8 - iVar2;
  uVar3 = sub_080E90EC(iVar10,iVar8);
  iVar2 = iVar10;
  if (iVar10 < 0) {
    iVar2 = -iVar10;
  }
  iVar4 = iVar8;
  if (iVar8 < 0) {
    iVar4 = -iVar8;
  }
  if (iVar4 < iVar2) {
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    if (iVar10 < 0x801) {
LAB_080e43f0:
      if (0x200 < *(int *)(param_1 + 0x5c)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x200;
      }
      iVar8 = *(int *)(param_1 + 0x5c) + -0x20;
    }
    else {
      if (0x5ff < *(int *)(param_1 + 0x5c)) goto LAB_080e4402;
      iVar8 = *(int *)(param_1 + 0x5c) + 0x80;
    }
  }
  else {
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 < 0x801) goto LAB_080e43f0;
    if (0x5ff < *(int *)(param_1 + 0x5c)) goto LAB_080e4402;
    iVar8 = *(int *)(param_1 + 0x5c) + 0x80;
  }
  *(int *)(param_1 + 0x5c) = iVar8;
LAB_080e4402:
  if (*(int *)(param_1 + 0x5c) < 0x90) {
    *(undefined4 *)(param_1 + 0x5c) = 0x90;
  }
  if (*(char *)(param_1 + 0xd) == '\x02') {
    *piVar7 = *(int *)(param_1 + 100);
    *piVar6 = *(int *)(param_1 + 0x68);
  }
  else {
    *piVar7 = *piVar7 + (*(int *)(param_1 + 0x5c) *
                         (int)*(short *)((int)&DAT_080fe64c +
                                        (((uVar3 & 0xff) + 0x40) * 0x1000000 >> 0x17)) >> 8);
    *piVar6 = *piVar6 + (*(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080fe64c)[uVar3 & 0xff] >> 8);
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(int *)(param_1 + 0x54) = *piVar7;
    *(int *)(param_1 + 0x58) = *piVar6;
    *(undefined *)(param_1 + 0xc0) = 0;
  }
  else {
    pbVar5 = (byte *)(param_1 + 0xc0);
    *pbVar5 = (char)(*pbVar5 + 1) + (char)((int)(*pbVar5 + 1) >> 5) * -0x20;
    uVar3 = (uint)*pbVar5;
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(int *)(param_1 + 0x54) =
           *piVar7 + *(short *)((int)&DAT_080fe64c + ((uVar3 * 8 + 0x40) * 0x1000000 >> 0x17)) * 4;
      iVar8 = *piVar6 + *(short *)((int)&DAT_080fe64c + ((uVar3 << 0x1b) >> 0x17)) * 4;
    }
    else {
      *(int *)(param_1 + 0x54) =
           *piVar7 + *(short *)((int)&DAT_080fe64c + ((uVar3 * -8 + 0x3f) * 0x1000000 >> 0x17)) * -4
      ;
      iVar8 = *piVar6 + *(short *)((int)&DAT_080fe64c + ((~(uVar3 * 8) << 0x18) >> 0x17)) * -4;
    }
    *(int *)(param_1 + 0x58) = iVar8;
  }
  pcVar9 = (char *)(param_1 + 0xc1);
  cVar1 = *pcVar9;
  *pcVar9 = cVar1 + -1;
  if ((char)(cVar1 + -1) == -1) {
    sub_080BF760(param_1 + 0x54,2);
    *pcVar9 = ' ';
  }
  return in_lr;
}

