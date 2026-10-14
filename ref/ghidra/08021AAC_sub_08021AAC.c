// sub_08021AAC at 0x08021AAC (thumb)

void sub_08021AAC(int param_1)

{
  if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 2;
  }
  return;
}

