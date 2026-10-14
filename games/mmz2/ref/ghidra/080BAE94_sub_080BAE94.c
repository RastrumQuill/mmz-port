// sub_080BAE94 at 0x080BAE94 (thumb)

undefined4 sub_080BAE94(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x12) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BAE74(param_1);
    return in_lr;
  }
  uVar4 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  if ((uVar4 & 0xff) < 0xf) {
    if ((uVar4 & 1) == 0) {
LAB_080baeee:
      uVar4 = (uint)*(byte *)(param_1 + 10);
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      uVar4 = 1;
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    if (0x1d < (uVar4 & 0xff)) goto LAB_080baef6;
    if ((uVar4 & 3) == 0) goto LAB_080baeee;
    uVar4 = 1;
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_080baef6:
  sub_080128D4(param_1,uVar4,0);
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    sVar2 = sub_08008CFC(iVar3,*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    if (*(int *)(param_1 + 0x60) < 0) {
      sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar2 != 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    else if ((0 < *(int *)(param_1 + 0x60)) &&
            (sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
            sVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  return in_lr;
}

