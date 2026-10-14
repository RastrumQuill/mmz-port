// sub_0801D134 at 0x0801D134 (thumb)

undefined4 sub_0801D134(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_08003518(param_1 + 0x6c);
  bVar1 = *(byte *)(*(char *)(param_1 + 0x71) * 2 +
                   *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x4e) = bVar1;
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    iVar2 = *(int *)(&DAT_088a7000 + (uint)*(byte *)(param_1 + 0x1e) * 4);
    if (*(int *)(param_1 + 0x3c) != iVar2) {
      *(int *)(param_1 + 0x3c) = iVar2;
    }
    bVar1 = *(byte *)((uint)bVar1 * 4 + iVar2 + 3);
    if (bVar1 != (*(byte *)(param_1 + 0x1f) & 0x7f)) {
      *(byte *)(param_1 + 0x1f) = bVar1 | 0x80;
      iVar2 = (uint)*(byte *)(param_1 + 0x1e) * 2;
      uVar3 = (uint)*(ushort *)(&DAT_0202dc40 + iVar2) + (uint)*(byte *)(param_1 + 0x22) & 0xffff;
      *(ushort *)(param_1 + 0x48) =
           *(ushort *)(param_1 + 0x48) & 0xfc00 |
           *(short *)(&DAT_0202e240 + iVar2) + *(short *)(param_1 + 0x20) & 0x3ffU;
      if ((*(byte *)(param_1 + 0xb) & 0x20) == 0) {
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | (byte)(uVar3 << 4);
        *(char *)(param_1 + 0x23) = (char)uVar3;
      }
    }
  }
  return in_lr;
}

