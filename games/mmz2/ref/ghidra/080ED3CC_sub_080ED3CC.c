// sub_080ED3CC at 0x080ED3CC (thumb)

void sub_080ED3CC(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_080ED2DC();
  extraout_r1[0x12] = in_r3;
  *extraout_r1 = *extraout_r1 | 3;
  return;
}

