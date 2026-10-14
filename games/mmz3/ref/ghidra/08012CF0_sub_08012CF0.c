// sub_08012CF0 at 0x08012CF0 (thumb)

undefined4 sub_08012CF0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 3;
    *(undefined4 *)(param_1 + 0x44) = 0x60;
    *(undefined4 *)(param_1 + 0x48) = 0x60;
    *(undefined4 *)(param_1 + 0x4c) = 0x96;
    *(undefined4 *)(param_1 + 0x50) = 100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

