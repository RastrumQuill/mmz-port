// sub_08069258 at 0x08069258 (thumb)

undefined4 sub_08069258(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (1 < *(byte *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x400;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (0x20 < bVar1) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

