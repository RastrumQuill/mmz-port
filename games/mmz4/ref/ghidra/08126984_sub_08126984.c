// sub_08126984 at 0x08126984 (thumb)

void sub_08126984(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_08126858();
  extraout_r1[0xf] = in_r3;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

