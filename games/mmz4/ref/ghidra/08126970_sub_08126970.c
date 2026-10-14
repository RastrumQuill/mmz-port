// sub_08126970 at 0x08126970 (thumb)

void sub_08126970(void)

{
  byte *extraout_r1;
  char in_r3;
  
  sub_08126858();
  extraout_r1[0xe] = in_r3 - 0x40;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

