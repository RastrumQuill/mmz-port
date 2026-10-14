// sub_080C6DAC at 0x080C6DAC (thumb)

void sub_080C6DAC(void)

{
  byte *extraout_r1;
  uint in_r3;
  
  sub_080C6C60();
  if (extraout_r1[0x18] != in_r3) {
    extraout_r1[0x18] = (byte)in_r3;
    *extraout_r1 = *extraout_r1 | 0xf;
  }
  return;
}

