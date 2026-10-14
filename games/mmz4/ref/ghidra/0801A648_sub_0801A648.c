// sub_0801A648 at 0x0801A648 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0801A648(void)

{
  undefined4 in_lr;
  
  sub_08002624(0xc1);
  if ((_DAT_0202dad8 & 0x400) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 0x400;
  }
  sub_08002624(0xc2);
  return in_lr;
}

