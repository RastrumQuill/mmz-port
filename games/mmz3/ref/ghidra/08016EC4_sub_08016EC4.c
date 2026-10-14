// sub_08016EC4 at 0x08016EC4 (thumb)

undefined4 sub_08016EC4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 1;
    DAT_02002400 = 0x3748;
    DAT_02002402 = 0x808;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

