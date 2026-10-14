// sub_080ED9EC at 0x080ED9EC (thumb)

void sub_080ED9EC(void)

{
  int extraout_r1;
  int in_r3;
  
  sub_080ED9E0();
  *(char *)(extraout_r1 + 0x19) = (char)in_r3;
  if (in_r3 == 0) {
    sub_080ED9C4();
  }
  return;
}

