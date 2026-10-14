// sub_08003358 at 0x08003358 (thumb)

undefined4 sub_08003358(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (param_1 << 0x10) >> 0xd;
  if (*(int *)(&DAT_0810097c)[(uint)*(ushort *)(&DAT_08100a28 + iVar1) * 3] ==
      *(int *)(&DAT_08100a24 + iVar1)) {
    sub_080EDCD4((int *)(&DAT_0810097c)[(uint)*(ushort *)(&DAT_08100a28 + iVar1) * 3],
                 (uint)(param_2 << 0x10) >> 0x14);
  }
  return in_lr;
}

