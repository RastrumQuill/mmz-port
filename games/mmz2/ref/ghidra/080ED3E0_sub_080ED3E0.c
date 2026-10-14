// sub_080ED3E0 at 0x080ED3E0 (thumb)

void sub_080ED3E0(void)

{
  byte *extraout_r1;
  char in_r3;
  
  sub_080ED2DC();
  extraout_r1[0x14] = in_r3 - 0x40;
  *extraout_r1 = *extraout_r1 | 3;
  return;
}

