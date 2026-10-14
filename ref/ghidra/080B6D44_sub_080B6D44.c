// sub_080B6D44 at 0x080B6D44 (thumb)

undefined4 sub_080B6D44(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(byte *)(param_1 + 0xbe) - 1;
  bVar1 = (byte)iVar3;
  *(byte *)(param_1 + 0xbe) = bVar1;
  if (iVar3 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1;
    DAT_02022878 = bVar1;
  }
  uVar2 = sub_080C8C38((0x2f - iVar3) * 0xf,0x2d);
  uVar2 = (uVar2 & 0xf) << 4 | uVar2 & 0xf;
  DAT_02004f90 = (ushort)uVar2 | (ushort)(uVar2 << 8);
  return in_lr;
}

