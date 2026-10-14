// sub_080B681C at 0x080B681C (thumb)

undefined4 sub_080B681C(int param_1)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x04';
  sVar1 = (short)((short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)] + 0x100 >> 4) + 0x100;
  *(short *)(param_1 + 0x50) = sVar1;
  *(short *)(param_1 + 0x52) = sVar1;
  *(ushort *)(param_1 + 0x48) =
       *(ushort *)(param_1 + 0x48) & 0xfc00 | *(ushort *)(iVar4 + 0x48) & 0x3ff;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar4 + 0x3c);
  *(undefined *)(param_1 + 0x4e) = *(undefined *)(iVar4 + 0x4e);
  bVar2 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  if ((1 < *(byte *)(iVar4 + 0xc)) || (*(char *)(param_1 + 0x11) != '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B68F0(param_1);
  }
  return in_lr;
}

