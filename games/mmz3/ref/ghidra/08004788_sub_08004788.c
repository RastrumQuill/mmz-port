// sub_08004788 at 0x08004788 (thumb)

undefined4 sub_08004788(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (param_1 << 0x10) >> 0xd;
  if (*(int *)(&DAT_0810bf34)[(uint)*(ushort *)(&DAT_0810bfec + iVar1) * 3] ==
      *(int *)(&DAT_0810bfe8 + iVar1)) {
    sub_080FCE7C((int *)(&DAT_0810bf34)[(uint)*(ushort *)(&DAT_0810bfec + iVar1) * 3],
                 (uint)(param_2 << 0x10) >> 0x14);
  }
  return in_lr;
}

