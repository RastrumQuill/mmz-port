// sub_080C6D50 at 0x080C6D50 (thumb)

void sub_080C6D50(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_080C6C60();
  extraout_r1[0x12] = in_r3;
  *extraout_r1 = *extraout_r1 | 3;
  return;
}

