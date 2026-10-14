// sub_08012A14 at 0x08012A14 (thumb)

undefined4 sub_08012A14(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_08004B9C(param_1 + 0x6c);
  bVar1 = *(byte *)(*(char *)(param_1 + 0x71) * 2 +
                   *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x4e) = bVar1;
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    iVar3 = *(int *)(&DAT_084ad300 + (uint)*(byte *)(param_1 + 0x1e) * 4);
    if (*(int *)(param_1 + 0x3c) != iVar3) {
      *(int *)(param_1 + 0x3c) = iVar3;
    }
    cVar2 = *(char *)((uint)bVar1 * 4 + iVar3 + 3);
    if (cVar2 != *(char *)(param_1 + 0x1f)) {
      *(char *)(param_1 + 0x1f) = cVar2;
      iVar3 = (uint)*(byte *)(param_1 + 0x1e) * 2;
      uVar4 = (uint)*(ushort *)(&DAT_0202e190 + iVar3) + (uint)*(byte *)(param_1 + 0x22) & 0xffff;
      *(ushort *)(param_1 + 0x48) =
           *(ushort *)(param_1 + 0x48) & 0xfc00 |
           *(short *)(&DAT_0202e790 + iVar3) + *(short *)(param_1 + 0x20) & 0x3ffU;
      if ((*(byte *)(param_1 + 0xb) & 0x20) == 0) {
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | (byte)(uVar4 << 4);
        *(char *)(param_1 + 0x23) = (char)uVar4;
      }
    }
  }
  return in_lr;
}

