// sub_080235AC at 0x080235AC (thumb)

void sub_080235AC(int param_1)

{
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 3;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0x121) = 0x10;
  }
  return;
}

