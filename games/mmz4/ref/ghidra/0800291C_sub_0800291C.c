// sub_0800291C at 0x0800291C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800291C(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_04000000;
  DAT_04000000 = uVar1 & 0x1fff | DAT_02000a50;
  DAT_04000040 = _DAT_02000a54;
  DAT_04000044 = _DAT_02000a58;
  DAT_04000048 = _DAT_02000a5c;
  return in_lr;
}

