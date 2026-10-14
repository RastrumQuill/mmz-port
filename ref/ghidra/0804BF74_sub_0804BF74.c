// sub_0804BF74 at 0x0804BF74 (thumb)

void sub_0804BF74(int param_1)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (0x13 < bVar1) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0x12) = 8;
  }
  return;
}

