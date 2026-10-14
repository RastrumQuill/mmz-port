// sub_0806B750 at 0x0806B750 (thumb)

undefined4 sub_0806B750(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_080127E4(param_1,0x808);
      sub_08006E08(param_1 + 0x74,&DAT_0833e3e8);
    }
    else {
      sub_080127E4(param_1,0x800);
      sub_08006E08(param_1 + 0x74,&DAT_0833e3d0);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  iVar6 = *(int *)(param_1 + 0x54);
  iVar7 = *(int *)(DAT_0202e130 + 0x54) - iVar6;
  if (iVar7 < 0) {
    iVar7 = iVar6 - *(int *)(DAT_0202e130 + 0x54);
  }
  iVar8 = *(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58);
  if (iVar8 < 0) {
    iVar8 = *(int *)(param_1 + 0x58) - *(int *)(DAT_0202e130 + 0x58);
  }
  if (*(char *)(param_1 + 0xbf) == '\0') {
    iVar5 = *(int *)(param_1 + 0xb4) - iVar6;
    if (iVar5 < 0) {
      iVar5 = iVar6 - *(int *)(param_1 + 0xb4);
    }
    if (0x5000 < iVar5) goto LAB_0806b832;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      if ((0x8fff < iVar7) || (0x5fff < iVar8)) goto LAB_0806b8c0;
LAB_0806b8bc:
      uVar3 = 6;
    }
    else {
      if ((0x4fff < iVar7) || (0x3fff < iVar8)) {
        if ((iVar7 < 0x6400) && (iVar8 < 0x4800)) {
          uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar4 & 0x7fffffff;
          if ((uVar4 * 2 >> 0x11 & 1) != 0) {
            uVar3 = 9;
            goto LAB_0806b8be;
          }
        }
        else {
          if (0x8fff < iVar7) {
            return in_lr;
          }
          if (0x5fff < iVar8) {
            return in_lr;
          }
        }
        goto LAB_0806b8bc;
      }
      uVar3 = 9;
    }
  }
  else {
LAB_0806b832:
    *(char *)(param_1 + 0xbf) = '\0';
    uVar3 = 0xc;
  }
LAB_0806b8be:
  *(undefined *)(param_1 + 0xd) = uVar3;
LAB_0806b8c0:
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

