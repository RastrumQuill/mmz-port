// sub_080D8084 at 0x080D8084 (thumb)

undefined4 sub_080D8084(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 0xb6) - 1;
  *(byte *)(param_1 + 0xb6) = (byte)iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 0x10);
    sub_080D568C(*(undefined4 *)(param_1 + 0x28),param_1);
  }
  uVar1 = (uint)(iVar2 * 0xf) >> 2 & 0xf;
  uVar1 = uVar1 << 4 | uVar1;
  DAT_02000ff0 = (ushort)uVar1 | (ushort)(uVar1 << 8);
  return in_lr;
}

