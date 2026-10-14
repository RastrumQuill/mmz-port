// sub_0800A2AC at 0x0800A2AC (thumb)

void sub_0800A2AC(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02004f70 = 0x3f48;
    DAT_02004f72 = 0x1003;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return;
}

