// sub_0800A554 at 0x0800A554 (thumb)

void sub_0800A554(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] =
         (&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xfffc | 3;
    *(undefined4 *)(param_1 + 0x44) = 0xe0;
    *(undefined4 *)(param_1 + 0x48) = 0xe0;
    *(undefined4 *)(param_1 + 0x4c) = 0xa0;
    *(undefined4 *)(param_1 + 0x50) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return;
}

