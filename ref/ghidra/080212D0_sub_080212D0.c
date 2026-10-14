// sub_080212D0 at 0x080212D0 (thumb)

void sub_080212D0(int param_1)

{
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xf) = 2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return;
}

