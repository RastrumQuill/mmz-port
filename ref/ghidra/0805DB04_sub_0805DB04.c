// sub_0805DB04 at 0x0805DB04 (thumb)

void sub_0805DB04(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd) != '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return;
}

