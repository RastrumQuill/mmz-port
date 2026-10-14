// sub_0800D3FC at 0x0800D3FC (thumb)

void sub_0800D3FC(void)

{
  DAT_02002400 = 0;
  DAT_02002410 = DAT_02002410 & 0xbfff;
  DAT_0200241e = DAT_0200241e | 0xe;
  return;
}

