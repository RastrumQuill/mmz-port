// sub_0800AA28 at 0x0800AA28 (thumb)

void sub_0800AA28(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return;
}

