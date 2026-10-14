// sub_080FC530 at 0x080FC530 (thumb)

void sub_080FC530(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_080FC484();
  extraout_r1[10] = in_r3;
  *extraout_r1 = *extraout_r1 | 0xc;
  return;
}

