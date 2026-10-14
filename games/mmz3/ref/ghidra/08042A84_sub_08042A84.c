// sub_08042A84 at 0x08042A84 (thumb)

undefined4 sub_08042A84(int param_1)

{
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0x10) == '\x01') && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) &&
     ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

