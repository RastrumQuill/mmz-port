// sub_080FC5D0 at 0x080FC5D0 (thumb)

void sub_080FC5D0(void)

{
  byte *extraout_r1;
  uint in_r3;
  
  sub_080FC484();
  if (extraout_r1[0x18] != in_r3) {
    extraout_r1[0x18] = (byte)in_r3;
    *extraout_r1 = *extraout_r1 | 0xf;
  }
  return;
}

