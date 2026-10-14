// sub_08021AD8 at 0x08021AD8 (thumb)

void sub_08021AD8(int param_1)

{
  if ((*(char *)(param_1 + 0x71) == '\a') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 3;
  }
  return;
}

