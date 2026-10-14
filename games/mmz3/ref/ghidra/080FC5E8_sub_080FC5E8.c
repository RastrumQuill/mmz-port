// sub_080FC5E8 at 0x080FC5E8 (thumb)

void sub_080FC5E8(void)

{
  byte *extraout_r1;
  char in_r3;
  
  sub_080FC484();
  extraout_r1[0xc] = in_r3 - 0x40;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

