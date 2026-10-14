// sub_080FC59C at 0x080FC59C (thumb)

void sub_080FC59C(void)

{
  byte *extraout_r1;
  char in_r3;
  
  sub_080FC484();
  extraout_r1[0xe] = in_r3 - 0x40;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

