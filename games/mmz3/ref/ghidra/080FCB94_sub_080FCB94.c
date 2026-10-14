// sub_080FCB94 at 0x080FCB94 (thumb)

void sub_080FCB94(void)

{
  int extraout_r1;
  int in_r3;
  
  sub_080FCB88();
  *(char *)(extraout_r1 + 0x19) = (char)in_r3;
  if (in_r3 == 0) {
    sub_080FCB6C();
  }
  return;
}

