// sub_080C6D64 at 0x080C6D64 (thumb)

void sub_080C6D64(void)

{
  byte *extraout_r1;
  char in_r3;
  
  sub_080C6C60();
  extraout_r1[0x14] = in_r3 - 0x40;
  *extraout_r1 = *extraout_r1 | 3;
  return;
}

