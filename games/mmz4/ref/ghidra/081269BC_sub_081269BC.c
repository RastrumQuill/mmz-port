// sub_081269BC at 0x081269BC (thumb)

void sub_081269BC(void)

{
  byte *extraout_r1;
  char in_r3;
  
  sub_08126858();
  extraout_r1[0xc] = in_r3 - 0x40;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

