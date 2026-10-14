// sub_080BAC0C at 0x080BAC0C (thumb)

undefined4 sub_080BAC0C(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  short sVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0x74);
  uVar7 = bVar2 & 1;
  uVar8 = bVar2 >> 1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08012580(param_1);
  if ((bVar2 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar7;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xef | (byte)(uVar7 << 4);
  if ((bVar2 >> 1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4d) = (char)uVar8;
  *pbVar6 = *pbVar6 & 0xdf | (byte)(uVar8 << 5);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  bVar2 = *(byte *)(param_1 + 0x10);
  if (bVar2 == 1) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127E4(param_1,0x721a);
      iVar5 = uVar7 * 2 + -1;
    }
    else {
      sub_080127E4(param_1,0x721b);
      iVar5 = uVar7 * -2 + 1;
    }
    *(int *)(param_1 + 0x5c) = iVar5 * 0x1c0;
    *(uint *)(param_1 + 0x60) = (uVar8 ^ 1) * -0x500;
    uVar3 = 0x5a;
  }
  else if (bVar2 < 2) {
    if (bVar2 != 0) goto LAB_080bae10;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127E4(param_1,0x721a);
      iVar5 = uVar7 * 2 + -1;
    }
    else {
      sub_080127E4(param_1,0x721b);
      iVar5 = uVar7 * -2 + 1;
    }
    *(int *)(param_1 + 0x5c) = iVar5 << 6;
    *(uint *)(param_1 + 0x60) = (uVar8 ^ 1) * -0x300;
    uVar3 = 0x3c;
  }
  else {
    if (bVar2 == 2) {
      sub_080127E4(param_1,0x7213);
      sVar4 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x200);
      if (sVar4 == 0) {
        *(undefined *)(param_1 + 0xd) = 1;
        iVar5 = uVar7 * -2 + 1;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5 * 0x300;
        *(int *)(param_1 + 0x5c) = iVar5 * 0x40;
        iVar5 = (uVar8 ^ 1) << 8;
LAB_080bae08:
        *(int *)(param_1 + 0x60) = -iVar5;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0;
        *(uint *)(param_1 + 0x5c) = (uVar7 * -2 + 1) * 0x60;
        *(uint *)(param_1 + 100) = (uVar7 * 2 + -1) * 4;
      }
    }
    else {
      if (bVar2 != 3) goto LAB_080bae10;
      sub_080127E4(param_1,0x7213);
      sVar4 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
      if (sVar4 == 0) {
        *(undefined *)(param_1 + 0xd) = 1;
        iVar5 = uVar7 * -2 + 1;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5 * 0x300;
        *(int *)(param_1 + 0x5c) = iVar5 * 0x140;
        iVar5 = (uVar8 ^ 1) * 0x580;
        goto LAB_080bae08;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      *(uint *)(param_1 + 0x5c) = (uVar7 * -2 + 1) * 0x400;
      *(uint *)(param_1 + 100) = (uVar7 * 2 + -1) * 0x40;
    }
    uVar3 = 0x40;
  }
  *(undefined *)(param_1 + 0x12) = uVar3;
LAB_080bae10:
  sub_080BAE24(param_1);
  return in_lr;
}

