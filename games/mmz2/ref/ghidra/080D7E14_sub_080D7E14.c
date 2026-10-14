// sub_080D7E14 at 0x080D7E14 (thumb)

undefined4 sub_080D7E14(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_080378B4(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54,0);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    iVar5 = *(int *)(param_1 + 0x5c) + 0x60;
    *(int *)(param_1 + 0x5c) = iVar5;
    iVar2 = sub_080EF1E8(*(byte *)(param_1 + 0x12) + 1,0x30);
    *(char *)(param_1 + 0x12) = (char)iVar2;
    uVar3 = sub_080EF150(iVar2 << 8,0x30);
    iVar2 = -1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (iVar5 * (short)(&DAT_080ef450)[uVar3 + 0x40 & 0xff] >> 8) * iVar2;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + ((short)(&DAT_080ef450)[uVar3 & 0xff] * iVar5 >> 8);
  }
  uVar1 = sub_080BED50(param_1,*(undefined *)(param_1 + 0x13),2);
  *(undefined *)(param_1 + 0x13) = uVar1;
  sub_08012A14(param_1);
  uVar3 = *(ushort *)(param_1 + 0xb4) - 1;
  *(ushort *)(param_1 + 0xb4) = (ushort)uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    DAT_0202e144 = 0;
  }
  if (uVar3 < 0xf0) {
    uVar4 = sub_080EF2B8((0xf0 - uVar3) * 0xf,0xf0);
    if ((0xf0 - uVar3 & 0xf) >> 2 == 1) {
      uVar4 = uVar4 + 1;
    }
    uVar3 = (uVar4 & 0xf) << 4 | uVar4 & 0xf;
    DAT_02000ff0 = (ushort)uVar3 | (ushort)(uVar3 << 8);
  }
  return in_lr;
}

