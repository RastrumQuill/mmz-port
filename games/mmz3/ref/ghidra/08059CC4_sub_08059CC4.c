// sub_08059CC4 at 0x08059CC4 (thumb)

undefined4 sub_08059CC4(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     (bVar1 = (byte)DAT_020301a8, (DAT_020301a8 & 8) != 0)) {
    sub_0805AF00(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      *(bool *)(param_1 + 0xc4) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
      piVar3 = (int *)(param_1 + 0xd4);
      if (*piVar3 == 0) {
        iVar2 = sub_080253D8(0x1a,param_1,&DAT_083613d8);
        *piVar3 = iVar2;
      }
      iVar2 = sub_08025794(*piVar3);
      if (iVar2 != 0) {
        *piVar3 = 0;
      }
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
        *(undefined *)(param_1 + 0xe0) = 0x80;
      }
      if ((*(uint *)(param_1 + 0x8c) & 0x20000) != 0) {
        *(undefined *)(param_1 + 0xd) = 0x13;
        *(undefined *)(param_1 + 0xe) = 1;
      }
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08361318 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 0xd) = bVar1 & 8;
    sub_08059DB0(param_1);
  }
  return in_lr;
}

