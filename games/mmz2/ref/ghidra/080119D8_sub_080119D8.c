// sub_080119D8 at 0x080119D8 (thumb)

undefined4 sub_080119D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 3;
    *(undefined4 *)(param_1 + 0x48) = 0x40;
    *(undefined4 *)(param_1 + 0x50) = 0xf0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

