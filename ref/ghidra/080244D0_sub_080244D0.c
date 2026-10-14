// sub_080244D0 at 0x080244D0 (thumb)

void sub_080244D0(int param_1)

{
  if ((*(char *)(param_1 + 0x71) == '\a') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 3;
  }
  return;
}

