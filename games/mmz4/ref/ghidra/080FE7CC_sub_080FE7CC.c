// sub_080FE7CC at 0x080FE7CC (thumb)

undefined4 sub_080FE7CC(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  sub_0801CFF0();
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar6 = *(int *)(param_1 + 0x5c) + 8;
    *(int *)(param_1 + 0x5c) = iVar6;
    if (0x280 < iVar6) {
      *(undefined4 *)(param_1 + 0x5c) = 0x280;
    }
    iVar6 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar6 - *(int *)(param_1 + 0x58) < 0x801) {
      *(int *)(param_1 + 0x58) = iVar6;
      DAT_0202daf0._0_1_ = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
LAB_080fe9ac:
    if (*(char *)(param_1 + 0xd) == '\x03') {
      return in_lr;
    }
    uVar5 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if ((uVar5 & 0x10) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + 0xe) == '\0') {
          if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54) + -0x1000) goto LAB_080fe9ac;
          *(undefined *)(param_1 + 0xe) = 1;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        iVar6 = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x60) = iVar6;
        if (0x700 < iVar6) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
        sVar3 = sub_08007C7C(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (sVar3 != 0) {
          uVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          *(undefined4 *)(param_1 + 0x58) = uVar4;
          iVar6 = FUN_081288bc(*(undefined4 *)(param_1 + 0x60),3);
          *(int *)(param_1 + 0x60) = -iVar6;
          sub_08002B10(0x17b);
          *(undefined *)(param_1 + 0xd) = 2;
        }
        goto LAB_080fe9ac;
      }
    }
    else if (bVar1 == 2) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar6 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar6;
      if (0x700 < iVar6) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      iVar6 = *(int *)(param_1 + 0x5c) + 8;
      *(int *)(param_1 + 0x5c) = iVar6;
      if (0x280 < iVar6) {
        *(undefined4 *)(param_1 + 0x5c) = 0x280;
      }
      sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar3 != 0) {
        if (*(int *)(param_1 + 0x60) < 0x280) {
          *(undefined *)(param_1 + 0xd) = 1;
        }
        else {
          iVar6 = FUN_081288bc(*(int *)(param_1 + 0x60),3);
          *(int *)(param_1 + 0x60) = -iVar6;
          sub_08002B10(0x17b);
        }
        uVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar4;
        sub_0801FE64(4,param_1 + 0x54);
        DAT_0202daf0._0_1_ = 1;
      }
      goto LAB_080fe9ac;
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}

