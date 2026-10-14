// sub_080C6D8C at 0x080C6D8C (thumb)

void sub_080C6D8C(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_080C6C60();
  extraout_r1[0xf] = in_r3;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

