// sub_08126948 at 0x08126948 (thumb)

void sub_08126948(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_08126858();
  extraout_r1[0x12] = in_r3;
  *extraout_r1 = *extraout_r1 | 3;
  return;
}

