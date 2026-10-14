// sub_080B6E24 at 0x080B6E24 (thumb)

undefined4 sub_080B6E24(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 0xbe) - 1;
  *(byte *)(param_1 + 0xbe) = (byte)iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 0x10);
    sub_080B4434(*(undefined4 *)(param_1 + 0x20),param_1);
  }
  uVar1 = (uint)(iVar2 * 0xf) >> 2 & 0xf;
  uVar1 = uVar1 << 4 | uVar1;
  DAT_02004f90 = (ushort)uVar1 | (ushort)(uVar1 << 8);
  return in_lr;
}

