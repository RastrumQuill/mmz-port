// sub_080102B8 at 0x080102B8 (thumb)

void sub_080102B8(void)

{
  DAT_02002400 = 0;
  DAT_02002410 = DAT_02002410 & 0xbfff;
  DAT_0200241e = DAT_0200241e | 0xe;
  return;
}

