// sub_0809E888 at 0x0809E888 (thumb)

undefined4 sub_0809E888(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    sub_080B2484(1,param_1 + 0x54);
LAB_0809ea6e:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        piVar10 = (int *)(param_1 + 0xb8);
        *piVar10 = 0x500;
        iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x54) - *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x5c) = iVar5;
        iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x58) - (*(int *)(param_1 + 0x58) + 0x1000);
        *(int *)(param_1 + 0x60) = iVar4;
        iVar5 = iVar5 >> 2;
        iVar4 = iVar4 >> 2;
        iVar4 = sub_080FE124(iVar5 * iVar5 + iVar4 * iVar4);
        uVar9 = (uint)(iVar4 << 0x10) >> 0xe;
        if (uVar9 != 0) {
          uVar8 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar9);
          *(undefined4 *)(param_1 + 0x5c) = uVar8;
          uVar8 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar9);
          *(undefined4 *)(param_1 + 0x60) = uVar8;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 0x5c) * *piVar10 >> 8;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60) * *piVar10 >> 8;
        *(uint *)(param_1 + 0xbc) = uVar9;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
      sub_080177F4(param_1);
      iVar4 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0xbc) = iVar4;
      if (0 < iVar4) {
        return in_lr;
      }
      goto LAB_0809ea6e;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xa305);
    *(int *)(param_1 + 0xb8) = 0x500;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x5c) * 0x500 >> 8;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60) * *(int *)(param_1 + 0xb8) >> 8;
    *(undefined *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
  sub_080177F4(param_1);
  bVar2 = false;
  iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  iVar5 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
  iVar6 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
  iVar7 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x800,*(undefined4 *)(param_1 + 0x58));
  if (iVar4 == 0) {
    if (iVar5 == 0) {
      if (iVar6 == 0) {
        if (iVar7 == 0) goto LAB_0809e9b0;
LAB_0809e9a2:
        iVar6 = *(int *)(param_1 + 0x54) + iVar7;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x54) + iVar6;
      }
    }
    else {
      *(int *)(param_1 + 0x68) = -*(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
      if (iVar6 == 0) {
        if (iVar7 == 0) goto LAB_0809e9ae;
        goto LAB_0809e9a2;
      }
      iVar6 = *(int *)(param_1 + 0x54) + iVar6;
    }
LAB_0809e9a6:
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
  }
  else {
    *(int *)(param_1 + 0x68) = -*(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    if (iVar6 != 0) {
      iVar6 = *(int *)(param_1 + 0x54) + iVar6;
      goto LAB_0809e9a6;
    }
    if (iVar7 != 0) goto LAB_0809e9a2;
  }
LAB_0809e9ae:
  bVar2 = true;
LAB_0809e9b0:
  if (bVar2) {
    sub_0800471C(0);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  return in_lr;
}

