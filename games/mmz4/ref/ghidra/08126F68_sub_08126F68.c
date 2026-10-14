// sub_08126F68 at 0x08126F68 (thumb)

void sub_08126F68(void)

{
  int extraout_r1;
  int in_r3;
  
  sub_08126F5C();
  *(char *)(extraout_r1 + 0x19) = (char)in_r3;
  if (in_r3 == 0) {
    sub_08126F40();
  }
  return;
}

