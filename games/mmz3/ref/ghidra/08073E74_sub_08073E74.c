// sub_08073E74 at 0x08073E74 (thumb)

undefined4 sub_08073E74(int param_1)

{
  undefined4 in_lr;
  
  for (; *(int *)(param_1 + 0x28) != 0; param_1 = *(int *)(param_1 + 0x28)) {
  }
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x2c)) {
    if (*(byte *)(param_1 + 0x12) < 2) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x28) = 0;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

