// sub_0812695C at 0x0812695C (thumb)

void sub_0812695C(void)

{
  byte *extraout_r1;
  char in_r3;
  
  sub_08126858();
  extraout_r1[0x14] = in_r3 - 0x40;
  *extraout_r1 = *extraout_r1 | 3;
  return;
}

