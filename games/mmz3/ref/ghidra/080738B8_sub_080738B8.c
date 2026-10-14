// sub_080738B8 at 0x080738B8 (thumb)

undefined4 sub_080738B8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * 0x400 + -0x200;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        iVar4 = *(int *)(param_1 + 0x54);
        goto LAB_08073a56;
      }
      *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58);
      iVar5 = *(int *)(DAT_0202f5c0 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1800);
      iVar4 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
      iVar3 = iVar5 >> 8;
      iVar4 = sub_080FE124(iVar4 * iVar4 + iVar3 * iVar3);
      iVar4 = FUN_080fe2f8(iVar5 * 0x100,(uint)(iVar4 << 0x10) >> 8);
      iVar4 = iVar4 * 2 - *(int *)(param_1 + 0x60);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
      }
      iVar4 = *(int *)(param_1 + 0x60) + (iVar4 >> 3);
      *(int *)(param_1 + 0x60) = iVar4;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      iVar4 = iVar4 * 0x1c0;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      iVar4 = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
      *(int *)(param_1 + 0x58) = iVar4;
      if (iVar4 < DAT_0202e48c) {
        *(int *)(param_1 + 0x58) = DAT_0202e48c;
      }
      if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0x58)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      }
      iVar4 = *(int *)(param_1 + 0x54);
      if ((0xd000 < (*(int *)(param_1 + 0xb4) - iVar4) + 0x6800U) ||
         ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0x10);
      }
      goto LAB_08073a56;
    }
    if (bVar1 != 0) {
      iVar4 = *(int *)(param_1 + 0x54);
      goto LAB_08073a56;
    }
    *(undefined *)(param_1 + 0x13) = 0;
    iVar4 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x54),0xf000);
    *(int *)(param_1 + 0xb4) = iVar4 * 0xf000 + 0x7800;
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    sub_08017700(param_1,0x2406);
    sub_080177F4(param_1);
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * 0x200 + -0x100;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  iVar4 = *(int *)(param_1 + 0x54);
  if ((0 < *(int *)(param_1 + 0x60)) && (DAT_0202e48c < iVar3)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_08073a56:
  iVar4 = sub_080FE10C((iVar4 - *(int *)(param_1 + 100)) * 0x10000 >> 0x10,
                       (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x10000 >> 0x10);
  iVar4 = ((((uint)(iVar4 << 0x10) >> 0x18) + 0x10) * 0x1000000 >> 0x1d) * 2;
  sub_080177CC(param_1,*(undefined2 *)(&DAT_083635c0 + iVar4),(short)*(char *)(param_1 + 0x71),
               (short)*(char *)(param_1 + 0x72));
  sub_080177F4(param_1);
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  local_14 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),6);
  local_14 = local_14 & 0xff;
  if (local_14 == 0) {
    local_1c = *(int *)(param_1 + 0x54) + (char)(&DAT_083635d0)[iVar4] * 0x100;
    local_18 = *(int *)(param_1 + 0x58) + (char)(&DAT_083635d1)[iVar4] * 0x100;
    local_10 = local_14;
    sub_080B7E18(param_1,&local_1c,&local_14,0,&DAT_083635e0,0xf);
  }
  return in_lr;
}

