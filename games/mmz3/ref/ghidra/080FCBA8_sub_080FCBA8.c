// sub_080FCBA8 at 0x080FCBA8 (thumb)

void sub_080FCBA8(void)

{
  int extraout_r1;
  int in_r3;
  
  sub_080FCB88();
  *(char *)(extraout_r1 + 0x17) = (char)in_r3;
  if (in_r3 == 0) {
    sub_080FCB6C();
  }
  return;
}

