// sub_0800F334 at 0x0800F334 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800F334(void)

{
  undefined4 in_lr;
  
  _DAT_0202e020 = _DAT_0202e020 + 1;
  if (0x5f < _DAT_0202e020) {
    _DAT_0202e020 = 0;
  }
  DAT_0202e023 = DAT_0202e023 + '\x01';
  if (DAT_0202e023 == '-') {
    DAT_0202e023 = '\0';
  }
  return in_lr;
}

