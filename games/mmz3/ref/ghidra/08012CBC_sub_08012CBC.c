// sub_08012CBC at 0x08012CBC (thumb)

undefined4 sub_08012CBC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

