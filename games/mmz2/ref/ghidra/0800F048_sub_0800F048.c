// sub_0800F048 at 0x0800F048 (thumb)

undefined4 sub_0800F048(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = 0;
  do {
    iVar3 = (int)(short)uVar1;
    uVar2 = (uint)*(ushort *)(param_1 + 0x10);
    uVar1 = (uint)(ushort)(&DAT_0831d120)[iVar3] << 0x10;
    (&DAT_03002c20)[iVar3] =
         (ushort)(((int)(uVar2 * (uVar1 >> 0x15 & 0x1f)) >> 6) << 5) |
         (ushort)((int)(uVar2 * ((ushort)(&DAT_0831d120)[iVar3] & 0x1f)) >> 6) |
         (ushort)(((int)(uVar2 * (uVar1 >> 0x1a & 0x1f)) >> 6) << 10);
    uVar1 = iVar3 + 1U & 0xffff;
  } while ((int)((iVar3 + 1U) * 0x10000) >> 0x10 < 0x10);
  uVar1 = 0;
  do {
    iVar3 = (int)(short)uVar1;
    uVar2 = (uint)*(ushort *)(param_1 + 0x12);
    uVar1 = (uint)(ushort)(&DAT_0831d140)[iVar3] << 0x10;
    (&DAT_03002c40)[iVar3] =
         (ushort)(((int)(uVar2 * (uVar1 >> 0x15 & 0x1f)) >> 6) << 5) |
         (ushort)((int)(uVar2 * ((ushort)(&DAT_0831d140)[iVar3] & 0x1f)) >> 6) |
         (ushort)(((int)(uVar2 * (uVar1 >> 0x1a & 0x1f)) >> 6) << 10);
    uVar1 = iVar3 + 1U & 0xffff;
  } while ((int)((iVar3 + 1U) * 0x10000) >> 0x10 < 0x10);
  sub_08008814(param_1,param_2);
  return in_lr;
}

