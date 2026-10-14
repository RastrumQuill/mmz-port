// sub_08023914 at 0x08023914 (thumb)

longlong sub_08023914(void)

{
  uint in_lr;
  
  if (DAT_0202f5bc != 0) {
    DAT_02030108 = DAT_02030108 & 0xf7;
    sub_0800465C();
    DAT_0202f5bc = 0;
  }
  sub_08004768(0x25);
  sub_08004768(0x26);
  return (ulonglong)in_lr << 0x20;
}

