// sub_080FC588 at 0x080FC588 (thumb)

void sub_080FC588(void)

{
  byte *extraout_r1;
  char in_r3;
  
  sub_080FC484();
  extraout_r1[0x14] = in_r3 - 0x40;
  *extraout_r1 = *extraout_r1 | 3;
  return;
}

