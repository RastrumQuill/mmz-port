// sub_08022B28 at 0x08022B28 (thumb)

void sub_08022B28(int param_1)

{
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 2;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
  }
  return;
}

