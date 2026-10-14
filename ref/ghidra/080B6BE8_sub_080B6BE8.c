// sub_080B6BE8 at 0x080B6BE8 (thumb)

undefined4 sub_080B6BE8(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  sub_08018FF8(*(undefined4 *)(param_1 + 0x20),param_1 + 0x4c,0);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    iVar5 = *(int *)(param_1 + 0x54) + 0x60;
    *(int *)(param_1 + 0x54) = iVar5;
    iVar2 = sub_080C8B68(*(byte *)(param_1 + 0x12) + 1,0x30);
    *(char *)(param_1 + 0x12) = (char)iVar2;
    iVar3 = sub_080C8AD0(iVar2 << 8,0x30);
    iVar2 = -1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) + (iVar5 * (short)(&DAT_080c8e24)[iVar3 + 0x40] >> 8) * iVar2;
    *(int *)(param_1 + 0x50) =
         *(int *)(param_1 + 0x50) + ((short)(&DAT_080c8e24)[iVar3] * iVar5 >> 8);
  }
  uVar1 = sub_08099BF8(param_1,*(undefined *)(param_1 + 0x13),2);
  *(undefined *)(param_1 + 0x13) = uVar1;
  sub_080B50EC(param_1);
  uVar6 = *(ushort *)(param_1 + 0xbc) - 1;
  *(ushort *)(param_1 + 0xbc) = (ushort)uVar6;
  if (uVar6 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    DAT_02022878 = 0;
  }
  if (uVar6 < 0xf0) {
    uVar4 = sub_080C8C38((0xf0 - uVar6) * 0xf,0xf0);
    if ((0xf0 - uVar6 & 0xf) >> 2 == 1) {
      uVar4 = uVar4 + 1;
    }
    uVar6 = (uVar4 & 0xf) << 4 | uVar4 & 0xf;
    DAT_02004f90 = (ushort)uVar6 | (ushort)(uVar6 << 8);
  }
  return in_lr;
}

