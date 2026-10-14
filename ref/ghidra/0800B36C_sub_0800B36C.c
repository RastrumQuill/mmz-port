// sub_0800B36C at 0x0800B36C (thumb)

void sub_0800B36C(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0x20;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0xc300;
  return;
}

