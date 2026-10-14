// sub_0802E5F0 at 0x0802E5F0 (thumb)

void sub_0802E5F0(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd) != '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return;
}

