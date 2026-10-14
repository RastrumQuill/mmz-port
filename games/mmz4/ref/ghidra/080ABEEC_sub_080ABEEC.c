// sub_080ABEEC at 0x080ABEEC (thumb)

void sub_080ABEEC(void)

{
  DAT_02000a50 = DAT_02000a50 | 0x4000;
  DAT_02000a5d = 0xfd;
  DAT_02000a5e = 0xff;
  DAT_02000a5a = 0xa0;
  DAT_02000a56 = 0xf0;
  return;
}

