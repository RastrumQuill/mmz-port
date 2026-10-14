// sub_0801BF38 at 0x0801BF38 (thumb)

void sub_0801BF38(int param_1)

{
  if (*(char *)(param_1 + 0xe) != '\x02') {
    if (*(byte *)(param_1 + 0xf) < 2) {
      sub_0801BCE8();
    }
    else {
      sub_0801BE90();
    }
  }
  return;
}

