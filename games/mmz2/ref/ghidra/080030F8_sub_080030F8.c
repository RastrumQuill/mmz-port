// sub_080030F8 at 0x080030F8 (thumb)

undefined4 sub_080030F8(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_04000000;
  DAT_04000000 = uVar1 & 0x1fff | DAT_02000fe0;
  DAT_04000040 = DAT_02000fe4;
  DAT_04000044 = DAT_02000fe8;
  DAT_04000048 = DAT_02000fec;
  return in_lr;
}

