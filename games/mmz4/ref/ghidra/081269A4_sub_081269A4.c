// sub_081269A4 at 0x081269A4 (thumb)

void sub_081269A4(void)

{
  byte *extraout_r1;
  uint in_r3;
  
  sub_08126858();
  if (extraout_r1[0x18] != in_r3) {
    extraout_r1[0x18] = (byte)in_r3;
    *extraout_r1 = *extraout_r1 | 0xf;
  }
  return;
}

