// sub_080ED388 at 0x080ED388 (thumb)

void sub_080ED388(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_080ED2DC();
  extraout_r1[10] = in_r3;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

