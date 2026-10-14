// sub_08126904 at 0x08126904 (thumb)

void sub_08126904(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_08126858();
  extraout_r1[10] = in_r3;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

