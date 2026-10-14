// sub_080B8A3C at 0x080B8A3C (thumb)

void sub_080B8A3C(int param_1)

{
  if (((param_1 != 0) && (*(char *)(param_1 + 9) == '\f')) && (*(char *)(param_1 + 0x11) == '\0')) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  return;
}

