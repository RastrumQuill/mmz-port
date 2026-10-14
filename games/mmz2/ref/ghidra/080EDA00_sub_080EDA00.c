// sub_080EDA00 at 0x080EDA00 (thumb)

void sub_080EDA00(void)

{
  int extraout_r1;
  int in_r3;
  
  sub_080ED9E0();
  *(char *)(extraout_r1 + 0x17) = (char)in_r3;
  if (in_r3 == 0) {
    sub_080ED9C4();
  }
  return;
}

