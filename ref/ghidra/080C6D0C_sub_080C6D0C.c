// sub_080C6D0C at 0x080C6D0C (thumb)

void sub_080C6D0C(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_080C6C60();
  extraout_r1[10] = in_r3;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

