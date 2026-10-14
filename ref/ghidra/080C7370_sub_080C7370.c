// sub_080C7370 at 0x080C7370 (thumb)

void sub_080C7370(void)

{
  int extraout_r1;
  int in_r3;
  
  sub_080C7364();
  *(char *)(extraout_r1 + 0x19) = (char)in_r3;
  if (in_r3 == 0) {
    sub_080C7348();
  }
  return;
}

