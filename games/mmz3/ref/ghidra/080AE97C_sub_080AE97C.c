// sub_080AE97C at 0x080AE97C (thumb)

undefined4 sub_080AE97C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  puVar7 = (uint *)(param_1 + 0x8c);
  if ((*puVar7 & 0x200) != 0) {
    *puVar7 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    iVar9 = param_1 + 0x54;
    sub_080B2484(2,iVar9);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
      pcVar6 = (char *)(*(int *)(param_1 + 0x28) + 0xb9);
      *pcVar6 = *pcVar6 + '\x01';
    }
    if (*(byte *)(*(int *)(param_1 + 0x28) + 0xb9) < 8) {
      return in_lr;
    }
    sub_080B2484(1,iVar9);
    sub_08024FE4(6,iVar9);
    return in_lr;
  }
  if ((*puVar7 & 4) != 0) {
    *puVar7 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    uVar3 = 2;
LAB_080aea2a:
    sub_080B2484(uVar3,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    uVar3 = 3;
    goto LAB_080aea2a;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      iVar9 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar9;
      if (0x700 < iVar9) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x750a);
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    iVar9 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x1e0);
    *(int *)(param_1 + 0x5c) = iVar9 + -0xf0;
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar9;
  if (0x700 < iVar9) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar9 = sub_08009B28();
  if ((iVar9 == 0) || (iVar9 < -0x700)) goto LAB_080aeb46;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar5 = sub_08009F80(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  else {
    iVar5 = sub_08009E14(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  if ((iVar5 == 0) || (iVar5 == -1)) {
LAB_080aeb38:
    *(int *)(param_1 + 0x60) = -(*(int *)(param_1 + 0x60) >> 1);
  }
  else {
    iVar8 = iVar5;
    if (iVar5 < 0) {
      iVar8 = -iVar5;
    }
    if (iVar8 < 0x101) goto LAB_080aeb38;
    iVar8 = iVar5;
    if (iVar5 < 0) {
      iVar8 = -iVar5;
    }
    if (0x700 < iVar8) goto LAB_080aeb38;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    if (iVar9 < iVar5) goto LAB_080aeb38;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080aeb46:
  sub_080177F4(param_1);
  return in_lr;
}

