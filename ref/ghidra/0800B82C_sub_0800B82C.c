// sub_0800B82C at 0x0800B82C (thumb)

void sub_0800B82C(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0xd0;
    *(undefined4 *)(param_1 + 0x48) = 0xd0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0x38;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return;
}

