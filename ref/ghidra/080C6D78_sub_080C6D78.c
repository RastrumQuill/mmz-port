// sub_080C6D78 at 0x080C6D78 (thumb)

void sub_080C6D78(void)

{
  byte *extraout_r1;
  char in_r3;
  
  sub_080C6C60();
  extraout_r1[0xe] = in_r3 - 0x40;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

