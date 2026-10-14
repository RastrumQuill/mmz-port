// sub_080E5694 at 0x080E5694 (thumb)

undefined4 sub_080E5694(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if ((*(byte *)(iVar9 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      iVar8 = *(int *)(param_1 + 0xb8);
      iVar1 = -0xd00;
      goto LAB_080e5720;
    }
    iVar8 = *(int *)(iVar9 + 0x54) - (*(int *)(param_1 + 0xb8) + -0x1b00);
    iVar1 = *(int *)(param_1 + 0xbc);
    iVar4 = 0x1300;
  }
  else if (*(char *)(param_1 + 0x12) == '\0') {
    iVar8 = *(int *)(param_1 + 0xb8);
    iVar1 = 0xd00;
LAB_080e5720:
    iVar8 = *(int *)(iVar9 + 0x54) - (iVar8 + iVar1);
    iVar1 = *(int *)(param_1 + 0xbc);
    iVar4 = 0x2900;
  }
  else {
    iVar8 = *(int *)(iVar9 + 0x54) - (*(int *)(param_1 + 0xb8) + 0x1b00);
    iVar1 = *(int *)(param_1 + 0xbc);
    iVar4 = 0x1300;
  }
  piVar7 = (int *)(param_1 + 0xb8);
  piVar6 = (int *)(param_1 + 0xbc);
  iVar4 = *(int *)(iVar9 + 0x58) - (iVar1 + iVar4);
  uVar2 = sub_080E90EC(iVar8,iVar4);
  iVar1 = iVar8;
  if (iVar8 < 0) {
    iVar1 = -iVar8;
  }
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = -iVar4;
  }
  if (iVar3 < iVar1) {
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 < 0x801) {
LAB_080e57a4:
      if (0x200 < *(int *)(param_1 + 0x5c)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x200;
      }
      iVar8 = *(int *)(param_1 + 0x5c) + -0x20;
    }
    else {
      if (0x5ff < *(int *)(param_1 + 0x5c)) goto LAB_080e57b6;
      iVar8 = *(int *)(param_1 + 0x5c) + 0x80;
    }
  }
  else {
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 0x801) goto LAB_080e57a4;
    if (0x5ff < *(int *)(param_1 + 0x5c)) goto LAB_080e57b6;
    iVar8 = *(int *)(param_1 + 0x5c) + 0x80;
  }
  *(int *)(param_1 + 0x5c) = iVar8;
LAB_080e57b6:
  if (*(int *)(param_1 + 0x5c) < 0xc0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xc0;
  }
  *piVar7 = *piVar7 + (*(int *)(param_1 + 0x5c) *
                       (int)*(short *)((int)&DAT_080fe64c +
                                      (((uVar2 & 0xff) + 0x40) * 0x1000000 >> 0x17)) >> 8);
  *piVar6 = *piVar6 + (*(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080fe64c)[uVar2 & 0xff] >> 8);
  pbVar5 = (byte *)(param_1 + 0xc0);
  *pbVar5 = (char)(*pbVar5 + 1) + (char)((int)(*pbVar5 + 1) >> 5) * -0x20;
  uVar2 = (uint)*pbVar5;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(int *)(param_1 + 0x54) =
         *piVar7 + *(short *)((int)&DAT_080fe64c + ((uVar2 * 8 + 0x40) * 0x1000000 >> 0x17)) * 4;
    iVar8 = *piVar6 + *(short *)((int)&DAT_080fe64c + ((uVar2 << 0x1b) >> 0x17)) * 4;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *piVar7 + *(short *)((int)&DAT_080fe64c + ((uVar2 * -8 + 0x3f) * 0x1000000 >> 0x17)) * -4;
    iVar8 = *piVar6 + *(short *)((int)&DAT_080fe64c + ((~(uVar2 * 8) << 0x18) >> 0x17)) * -4;
  }
  *(int *)(param_1 + 0x58) = iVar8;
  if (*(char *)(iVar9 + 0xd) == '\b') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

