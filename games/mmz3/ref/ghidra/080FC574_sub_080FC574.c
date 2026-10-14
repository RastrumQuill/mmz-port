// sub_080FC574 at 0x080FC574 (thumb)

void sub_080FC574(void)

{
  byte *extraout_r1;
  byte in_r3;
  
  sub_080FC484();
  extraout_r1[0x12] = in_r3;
  *extraout_r1 = *extraout_r1 | 3;
  return;
}

