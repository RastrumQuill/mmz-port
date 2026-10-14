// sub_080ED428 at 0x080ED428 (thumb)

void sub_080ED428(void)

{
  byte *extraout_r1;
  uint in_r3;
  
  sub_080ED2DC();
  if (extraout_r1[0x18] != in_r3) {
    extraout_r1[0x18] = (byte)in_r3;
    *extraout_r1 = *extraout_r1 | 0xf;
  }
  return;
}

