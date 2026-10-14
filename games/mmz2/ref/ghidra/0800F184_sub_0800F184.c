// sub_0800F184 at 0x0800F184 (thumb)

undefined4 sub_0800F184(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x200) != 0) {
      *(undefined4 *)(param_1 + 0x50) = 0xfffffce0;
    }
    sub_08002880(0,((ushort)(&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) << 3,0x1000);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

