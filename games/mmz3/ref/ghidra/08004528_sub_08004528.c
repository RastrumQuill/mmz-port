// sub_08004528 at 0x08004528 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08004528(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_04000000;
  DAT_04000000 = uVar1 & 0x1fff | DAT_02002410;
  DAT_04000040 = _DAT_02002414;
  DAT_04000044 = _DAT_02002418;
  DAT_04000048 = _DAT_0200241c;
  return in_lr;
}

