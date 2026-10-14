// sub_0803DBD0 at 0x0803DBD0 (thumb)

void sub_0803DBD0(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0xcb) == param_2) {
    *(char *)(param_1 + 0xca) = *(char *)(param_1 + 0xca) + '\x01';
  }
  else {
    *(char *)(param_1 + 0xcb) = param_2;
    *(undefined *)(param_1 + 0xca) = 0;
  }
  return;
}

