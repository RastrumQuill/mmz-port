// sub_080ED3F4 at 0x080ED3F4 (thumb)

void sub_080ED3F4(void)

{
  byte *extraout_r1;
  char in_r3;
  
  sub_080ED2DC();
  extraout_r1[0xe] = in_r3 - 0x40;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

