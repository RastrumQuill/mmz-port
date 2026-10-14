// sub_080FC5B0 at 0x080FC5B0 (thumb)

void sub_080FC5B0(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_080FC484();
  extraout_r1[0xf] = in_r3;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

