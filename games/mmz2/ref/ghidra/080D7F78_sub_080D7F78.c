// sub_080D7F78 at 0x080D7F78 (thumb)

undefined4 sub_080D7F78(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(byte *)(param_1 + 0xb6) - 1;
  bVar1 = (byte)iVar3;
  *(byte *)(param_1 + 0xb6) = bVar1;
  if (iVar3 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1;
    DAT_0202e144 = bVar1;
  }
  uVar2 = sub_080EF2B8((0x2f - iVar3) * 0xf,0x2d);
  uVar2 = (uVar2 & 0xf) << 4 | uVar2 & 0xf;
  DAT_02000ff0 = (ushort)uVar2 | (ushort)(uVar2 << 8);
  return in_lr;
}

