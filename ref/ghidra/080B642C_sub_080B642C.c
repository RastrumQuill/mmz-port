// sub_080B642C at 0x080B642C (thumb)

void sub_080B642C(int param_1)

{
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return;
}

