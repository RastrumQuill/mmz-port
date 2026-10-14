// sub_080ED408 at 0x080ED408 (thumb)

void sub_080ED408(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_080ED2DC();
  extraout_r1[0xf] = in_r3;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

