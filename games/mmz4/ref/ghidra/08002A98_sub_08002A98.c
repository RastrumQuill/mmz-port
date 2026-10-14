// sub_08002A98 at 0x08002A98 (thumb)

undefined4 sub_08002A98(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08002AD0(param_1 & 0xffff);
  if (iVar1 != 0) {
    sub_08127250((&DAT_08138864)[(uint)*(ushort *)(&DAT_08138910 + (param_1 & 0xffff) * 8) * 3],6);
  }
  return in_lr;
}

