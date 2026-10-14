// sub_08024EE8 at 0x08024EE8 (thumb)

void sub_08024EE8(int param_1)

{
  if ((*(char *)(param_1 + 0x71) == '\a') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 3;
  }
  return;
}

