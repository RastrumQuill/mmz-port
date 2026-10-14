// sub_08011EAC at 0x08011EAC (thumb)

undefined4 sub_08011EAC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 1;
    DAT_02000fd0 = 0x3748;
    DAT_02000fd2 = 0x808;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

