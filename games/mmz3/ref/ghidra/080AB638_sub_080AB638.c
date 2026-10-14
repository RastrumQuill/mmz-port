// sub_080AB638 at 0x080AB638 (thumb)

undefined4 sub_080AB638(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  bVar4 = *(byte *)(param_1 + 0xd);
  if (bVar4 == 1) {
    bVar4 = *(byte *)(param_1 + 0x12);
    if ((bVar4 & 3) < 2) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x12) = bVar4 + 1;
    if (0x10 < bVar4) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  else {
    if (bVar4 < 2) {
      if (bVar4 != 0) goto LAB_080ab7f6;
      iVar6 = *(int *)(param_1 + 0x5c) + 0x10;
      *(int *)(param_1 + 0x5c) = iVar6;
      if (0x280 < iVar6) {
        *(undefined4 *)(param_1 + 0x5c) = 0x280;
      }
      if (*(byte *)(iVar8 + 0xc) < 2) {
        if ((*(uint *)(param_1 + 0x8c) & 4) == 0) goto LAB_080ab7f6;
        uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
        uVar9 = uVar7 & 0x7fffffff;
        DAT_0202f608 = uVar9;
        iVar8 = sub_080FE4D8(uVar7 * 2 >> 0x11,0xe);
        *(int *)(param_1 + 100) = (iVar8 + -7) * 0x100;
        uVar7 = uVar9 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar7 & 0x7fffffff;
        iVar8 = sub_080FE4D8(uVar7 * 2 >> 0x11,0x14);
        *(int *)(param_1 + 0x68) = (iVar8 + 4) * 0x100;
        if (DAT_0202f5c0 != 0) {
          sub_08025B14(DAT_0202f5c0,8);
        }
        *(uint *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        uVar1 = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        uVar1 = 1;
      }
    }
    else {
      if (bVar4 != 2) goto LAB_080ab7f6;
      if (DAT_0202f5c0 == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0x200;
      }
      else if (((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) == 0) &&
              (*(short *)(DAT_0202f5c0 + 0xa4) != 0)) {
        if ((*(byte *)(DAT_0202f5c0 + 10) & 0x10) == 0) {
          iVar8 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 100);
        }
        else {
          iVar8 = *(int *)(DAT_0202f5c0 + 0x54) + *(int *)(param_1 + 100);
        }
        *(int *)(param_1 + 0x54) = iVar8;
        *(int *)(param_1 + 0x58) = *(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x68);
        cVar3 = sub_08025B64();
        bVar4 = cVar3 + *(char *)(param_1 + 0x12);
        *(byte *)(param_1 + 0x12) = bVar4;
        if ((bVar4 < 0x11) &&
           (bVar4 = *(byte *)(param_1 + 0x13), *(byte *)(param_1 + 0x13) = bVar4 + 1, bVar4 < 0xf1))
        goto LAB_080ab7f6;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0x200;
        sub_08025B3C(DAT_0202f5c0,8);
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0x200;
      }
      uVar1 = 3;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
  }
LAB_080ab7f6:
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar8 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar5 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
  if (sVar5 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

