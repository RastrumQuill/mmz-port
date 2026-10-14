// sub_08013AA0 at 0x08013AA0 (thumb)

void sub_08013AA0(void)

{
  DAT_02002400 = 0;
  DAT_02002410 = DAT_02002410 & 0xbfff;
  DAT_0200241e = DAT_0200241e | 0xe;
  return;
}

