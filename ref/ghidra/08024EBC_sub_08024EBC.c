// sub_08024EBC at 0x08024EBC (thumb)

void sub_08024EBC(int param_1)

{
  if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 2;
  }
  return;
}

