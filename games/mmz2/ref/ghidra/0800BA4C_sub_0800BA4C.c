// sub_0800BA4C at 0x0800BA4C (thumb)

undefined4 sub_0800BA4C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar1 + 9)] + 0xc);
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar1 + 9)] + 0xc);
  }
  sub_08003338(0x78);
  DAT_0202d004 = 0x7fffffff;
  DAT_02000fd0 = 0;
  DAT_02000fe0 = DAT_02000fe0 & 0xbfff;
  DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 0xe;
  return in_lr;
}

