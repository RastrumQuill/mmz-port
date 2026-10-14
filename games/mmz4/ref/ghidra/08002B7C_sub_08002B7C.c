// sub_08002B7C at 0x08002B7C (thumb)

undefined4 sub_08002B7C(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (param_1 << 0x10) >> 0xd;
  if (*(int *)(&DAT_08138864)[(uint)*(ushort *)(&DAT_08138910 + iVar1) * 3] ==
      *(int *)(&DAT_0813890c + iVar1)) {
    sub_08127250((int *)(&DAT_08138864)[(uint)*(ushort *)(&DAT_08138910 + iVar1) * 3],
                 (uint)(param_2 << 0x10) >> 0x14);
  }
  return in_lr;
}

