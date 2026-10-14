// sub_08077180 at 0x08077180 (thumb)

void sub_08077180(int param_1)

{
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0801DD2C(0,param_1 + 0x54);
  }
  else {
    sub_0801DD2C(1,param_1 + 0x54);
  }
  return;
}

