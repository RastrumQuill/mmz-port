// sub_080BCFD4 at 0x080BCFD4 (thumb)

undefined4 sub_080BCFD4(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar4 + 0x58);
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x02';
  sVar2 = sub_080EF150((short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)] + 0x100,0xe);
  *(short *)(param_1 + 0x50) = sVar2 + 0x100;
  *(short *)(param_1 + 0x52) = sVar2 + 0x100;
  *(ushort *)(param_1 + 0x48) =
       *(ushort *)(param_1 + 0x48) & 0xfc00 | *(ushort *)(iVar4 + 0x48) & 0x3ff;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar4 + 0x3c);
  *(undefined *)(param_1 + 0x4e) = *(undefined *)(iVar4 + 0x4e);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  if ((1 < *(byte *)(iVar4 + 0xc)) || (*(char *)(param_1 + 0x11) != '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BCD00(param_1);
  }
  return in_lr;
}

