// sub_080112D8 at 0x080112D8 (thumb)

undefined4 sub_080112D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc;
    DAT_02002400 = 0x3b44;
    DAT_02002402 = 0xc04;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x34) < 0x1520) {
    DAT_0202e48c = 0x32000;
  }
  else {
    DAT_0202e48c = 0x280000;
  }
  return in_lr;
}

