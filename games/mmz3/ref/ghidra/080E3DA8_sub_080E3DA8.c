// sub_080E3DA8 at 0x080E3DA8 (thumb)

undefined4 sub_080E3DA8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0xb4);
  sub_080177F4(param_1);
  if (DAT_0202f5d0 != '\0') {
    return in_lr;
  }
  if (*(char *)(iVar6 + 0x232) != '\0') {
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
  if (((*(uint *)(iVar6 + 0x8c) & 0x200) != 0) || (*(short *)(iVar6 + 0xa4) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  if ((*(byte *)(iVar6 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0xc1) == '\0') {
      iVar8 = *(int *)(iVar6 + 0x54) - (*(int *)(param_1 + 100) + -0xd00);
      iVar2 = *(int *)(param_1 + 0x68);
      iVar4 = 0x2900;
      goto LAB_080e3eb4;
    }
    iVar8 = *(int *)(iVar6 + 0x54) - (*(int *)(param_1 + 100) + -0x1b00);
    iVar2 = *(int *)(param_1 + 0x68) + 0x1300;
  }
  else if (*(char *)(param_1 + 0xc1) == '\0') {
    iVar8 = *(int *)(iVar6 + 0x54) - (*(int *)(param_1 + 100) + 0xd00);
    iVar2 = *(int *)(param_1 + 0x68) + 0x2900;
  }
  else {
    iVar8 = *(int *)(iVar6 + 0x54) - (*(int *)(param_1 + 100) + 0x1b00);
    iVar2 = *(int *)(param_1 + 0x68);
    iVar4 = 0x1300;
LAB_080e3eb4:
    iVar2 = iVar2 + iVar4;
  }
  iVar2 = *(int *)(iVar6 + 0x58) - iVar2;
  uVar3 = sub_080E90EC(iVar8,iVar2);
  iVar6 = iVar8;
  if (iVar8 < 0) {
    iVar6 = -iVar8;
  }
  iVar4 = iVar2;
  if (iVar2 < 0) {
    iVar4 = -iVar2;
  }
  if (iVar4 < iVar6) {
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 < 0x801) {
LAB_080e3f24:
      if (0x200 < *(int *)(param_1 + 0x5c)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x200;
      }
      iVar6 = *(int *)(param_1 + 0x5c) + -0x20;
    }
    else {
      if (0x5ff < *(int *)(param_1 + 0x5c)) goto LAB_080e3f36;
      iVar6 = *(int *)(param_1 + 0x5c) + 0x10;
    }
  }
  else {
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0x801) goto LAB_080e3f24;
    if (0x5ff < *(int *)(param_1 + 0x5c)) goto LAB_080e3f36;
    iVar6 = *(int *)(param_1 + 0x5c) + 0x10;
  }
  *(int *)(param_1 + 0x5c) = iVar6;
LAB_080e3f36:
  if (*(int *)(param_1 + 0x5c) < 0x80) {
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
  }
  *(int *)(param_1 + 100) =
       *(int *)(param_1 + 100) +
       ((int)*(short *)((int)&DAT_080fe64c + (((uVar3 & 0xff) + 0x40) * 0x1000000 >> 0x17)) *
        *(int *)(param_1 + 0x5c) >> 8);
  *(int *)(param_1 + 0x68) =
       *(int *)(param_1 + 0x68) +
       ((int)(short)(&DAT_080fe64c)[uVar3 & 0xff] * *(int *)(param_1 + 0x5c) >> 8);
  pbVar5 = (byte *)(param_1 + 0xc0);
  *pbVar5 = (char)(*pbVar5 + 1) + (char)((int)(*pbVar5 + 1) >> 5) * -0x20;
  uVar3 = (uint)*pbVar5;
  if (*(char *)(param_1 + 0xc1) == '\0') {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) +
         *(short *)((int)&DAT_080fe64c + ((uVar3 * 8 + 0x40) * 0x1000000 >> 0x17)) * 4;
    iVar6 = *(int *)(param_1 + 0x68) +
            *(short *)((int)&DAT_080fe64c + ((uVar3 << 0x1b) >> 0x17)) * 4;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) +
         *(short *)((int)&DAT_080fe64c + ((uVar3 * -8 + 0x3f) * 0x1000000 >> 0x17)) * -4;
    iVar6 = *(int *)(param_1 + 0x68) +
            *(short *)((int)&DAT_080fe64c + ((~(uVar3 * 8) << 0x18) >> 0x17)) * -4;
  }
  *(int *)(param_1 + 0x58) = iVar6;
  pcVar7 = (char *)(param_1 + 0xb9);
  cVar1 = *pcVar7;
  *pcVar7 = cVar1 + -1;
  if ((char)(cVar1 + -1) == -1) {
    sub_080BF760(param_1 + 0x54,2);
    *pcVar7 = ' ';
  }
  return in_lr;
}

