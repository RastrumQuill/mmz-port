// sub_0800DB00 at 0x0800DB00 (thumb)

void sub_0800DB00(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0xe0;
    *(undefined4 *)(param_1 + 0x4c) = 0x78;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return;
}

