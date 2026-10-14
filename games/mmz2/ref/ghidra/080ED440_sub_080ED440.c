// sub_080ED440 at 0x080ED440 (thumb)

void sub_080ED440(void)

{
  byte *extraout_r1;
  char in_r3;
  
  sub_080ED2DC();
  extraout_r1[0xc] = in_r3 - 0x40;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

