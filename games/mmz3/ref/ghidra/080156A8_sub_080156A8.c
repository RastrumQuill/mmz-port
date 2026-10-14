// sub_080156A8 at 0x080156A8 (thumb)

undefined4 sub_080156A8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 1;
    *(undefined4 *)(param_1 + 0x50) = 0xfffffec0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (99 < DAT_0202f4a7) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return in_lr;
}

