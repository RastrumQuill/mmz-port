// sub_080169DC at 0x080169DC (thumb)

undefined4 sub_080169DC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

