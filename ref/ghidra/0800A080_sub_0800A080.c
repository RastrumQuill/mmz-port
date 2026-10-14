// sub_0800A080 at 0x0800A080 (thumb)

void sub_0800A080(void)

{
  DAT_02004f70 = 0;
  DAT_02004f80 = DAT_02004f80 & 0xbfff;
  DAT_02004f8e = DAT_02004f8e | 0xfe;
  return;
}

