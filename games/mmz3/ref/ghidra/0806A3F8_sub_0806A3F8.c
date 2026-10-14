// sub_0806A3F8 at 0x0806A3F8 (thumb)

undefined4 sub_0806A3F8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080177CC(param_1,0xd03,6,1);
    sub_080177F4(param_1);
    iVar1 = DAT_0202f5c0;
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar1 = (*(int *)(param_1 + 0x58) + 0x1800) - *(int *)(iVar1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar1;
    iVar3 = iVar3 >> 8;
    iVar1 = iVar1 >> 8;
    iVar1 = sub_080FE124(iVar3 * iVar3 + iVar1 * iVar1);
    uVar4 = (uint)(iVar1 << 0x10) >> 8;
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar1 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar4);
      *(int *)(param_1 + 0x5c) = iVar1;
      iVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar4);
      *(int *)(param_1 + 0x5c) = iVar1 << 2;
      *(int *)(param_1 + 0x60) = iVar3 << 2;
    }
    sub_08007390(param_1 + 0x74,&DAT_08362b68);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar3 != 0) {
    if (iVar3 < 1) {
      iVar1 = sub_0800A04C(*(int *)(param_1 + 0x54) + -0xc00,iVar1 + -0x800);
      if (0 < iVar1) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
        goto LAB_0806a516;
      }
    }
    else {
      iVar1 = sub_08009ED0(*(int *)(param_1 + 0x54) + 0xc00,iVar1 + -0x800);
      if (iVar1 < 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
        goto LAB_0806a516;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
LAB_0806a516:
    sub_0806A238(param_1);
    return in_lr;
  }
  iVar1 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (-1 < iVar1) {
    return in_lr;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0xb8);
    if (iVar3 < iVar2) {
      if (iVar2 <= iVar3 + 0x16800) goto LAB_0806a560;
      iVar3 = -0x16800;
    }
    else {
      if (iVar3 + -0x16800 <= iVar2) goto LAB_0806a560;
      iVar3 = 0x16800;
    }
    *(int *)(param_1 + 0xb8) = iVar2 + iVar3;
  }
LAB_0806a560:
  iVar1 = *(int *)(param_1 + 0x58) + iVar1;
  *(int *)(param_1 + 0x58) = iVar1;
  sub_080B8908(*(undefined4 *)(param_1 + 0x54),iVar1,*(undefined *)(param_1 + 0x11));
  sub_0806A238(param_1);
  return in_lr;
}

